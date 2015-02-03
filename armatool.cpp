#include <QtCore/QCoreApplication>
#include <cstdio>
#include <cstdlib>
#include "replace_object.h"
#include "armatool.h"

static wrpformat wrp;

armaTool::armaTool(int argc, char *argv[])
{
    // show header first and foremorest
    Header();

    // open files from cmd line parameters
    Open_Files(argc, argv);

    Read_Signature();

    Read_Elevations();

    Read_Textures();

    Write_Elevations();

    Write_Textures();

    Read_Objects();

    Close_Files();
}


void armaTool::Header()
{
    printf("\nArmATool (c) PMC 2006-2012.\n\n");
};

/*

    Show some help for users who did not give command line.

*/
void armaTool::Showhelp()
{
    printf("Usage:\narmatool Source.WRP Destination.WRP\n\nOptional parameters: -sea");
}


void armaTool::Open_Files(int argc, char *argv[])
{
    if (argc < 3)
    {
        Showhelp();
        exit(0);
    }

    printf ("Source WRP: %s\nDestination WRP: %s\n", argv[1], argv[2]);

    // if we have -sea parameter, do the depths of the sea thingy.
    if (strcmp (argv[3], "-sea") == 0)
    {
        DoMyDepths = 1;
        printf("Calculating Ocean depths (-sea parameter used).\n");
    }

    map = fopen (argv[1], "rb");
    if (!map)
    {
        printf ("error in %s\n", argv[1]);
        exit (1);
    }

    printf ("Opened %s\n", argv[1]);

    output = fopen (argv[2], "wb");
    if (!output)
    {
        printf ("error at %s file\n", argv[2]);
        exit (1);
    }

    printf ("Opened %s\n", argv[2]);

    text = fopen ("test-wrpdebug.txt", "wt");
    if (!text)
    {
        printf ("error at debug txt\n");
        exit (1);
    }
}


void armaTool::Read_Signature()
{
    fread (sig,4,1,map);
    sig[4] = 0;
    fprintf (text, "signature: %s\n", sig);
    fwrite (sig, 4, 1, output);

    fread(&MapSize,4,1,map);
    fprintf(text, "MapSize x: %d\n",MapSize);
    fwrite(&MapSize,4,1,output);

    fread(&MapSize,4,1,map);
    fprintf(text, "MapSize y: %d\n",MapSize);
    fwrite(&MapSize,4,1,output);

    if (MapSize > 4096)
    {
        printf("MapSize %i is too large! exiting!\n",MapSize);
        exit(1);
    };

    printf("Signature: %s\nMapSize: %i\nReading elevations...",sig,MapSize);
}


/* _______________________________________________________________________________

new code from old... code? :)

first microdem read format

//read the dem data from MicroDEM format
map=fopen("sf.dem","rb");
if (!map) {printf("error in sf.dem\n");exit(1);}

// skip DEM_head (192 bytes)
for( int forIcount=0; forIcount<96; forIcount++){
fread(&oneShort,sizeof(oneShort),1,map);
if( forIcount == 0 ){
  if( oneShort != 0x4d2a ){
printf( "! unknown input format !\n" );
exit(1);
  }
}
if( forIcount == 30 ){
  sXsize = oneShort;
}
if( forIcount == 31 ){
  sYsize = oneShort;
}
}
printf("ok DEM read.\n");

printf( "[%i;%i]\n", sXsize, sYsize );
if( (sXsize == sYsize) && (sXsize != 0) ){
//ok
  printf("all ok on DEM data...\n");
}else{
printf( "! only 'square block' data allowed !\n" );
exit(1);
}



then the struct stuff

int x=0,z=0;
for (int zx=0; zx < MapSize*MapSize; zx++) {

        fread(&wrp[x][z].Elevation,sizeof(wrp[x][z].Elevation),1,map);
        x++;
        if (x == MapSize) {z++; x=0;}
        if (z == MapSize) {z=0;}

}


and finally the text index
x=0,z=0,TexIndex=1;

    for (int tx=0; tx < MapSize*MapSize; tx++) {

        wrp[x][z].TexIndex = 0;
        wrp[x][z].TexIndex = TexIndex;
        x++;
        if (x == MapSize) {z++; x=0;}
        if (z == MapSize) {z=0;}

  }


_______________________________________________________________________________*/



void armaTool::Read_Elevations()
{
    // read elevations
    /*
    but is this missing now the 0,1,2,3... stupid thing it starts from 1 and not 0?
    */
    int x = 0, z = 0;
    for (int zx = 0; zx < MapSize*MapSize; zx++)
    {
        fread(&wrp[x][z].Elevation,sizeof(wrp[x][z].Elevation),1,map);

        fprintf(text, "elevation %i,%i: %d\n",x,z,wrp[x][z].Elevation/22);

        if (LowElev > Elevation) LowElev = Elevation;
        if (HighElev < Elevation) HighElev = Elevation;

        x++;
        if (x == MapSize)
        {
            z++; x = 0;
        }
        if (z == MapSize)
        {
            z = 0;
        }
    }
}


void armaTool::Read_Textures()
{
    printf(" Done\nReading Textures...");

    fprintf(text,"pmc1\n");

    // read textures IDs
    int x = 0, z = 0;
    TexIndex = 0;

    for (int tx = 0; tx < MapSize*MapSize; tx++)
    {
        wrp[x][z].TexIndex = 0;
        fread(&wrp[x][z].TexIndex,sizeof(wrp[x][z].TexIndex),1,map);

        fprintf(text, "TexIndex %i,%i: %d\n",x,z,wrp[x][z].TexIndex);

        x++;
        if (x == MapSize)
        {
            z++;
            x = 0;
        }
        if (z == MapSize)
        {
            z = 0;
        }
    }
}


void armaTool::Write_Elevations()
{
    printf(" Done\nWriting elevations...");

    // write the elevations
    int x = 0, z = 0;
    for (int xx = 0; xx < MapSize*MapSize; xx++)
    {
        /*
        here we setup the elevations hardcoded down to -100m :)
        -100 = -4.5. so you need to do he x22 thing for it, dunno why.
        */
        if (DoMyDepths && wrp[x][z].Elevation < -45*22)
        {
            wrp[x][z].Elevation = -51*22;
        }

        fwrite(&wrp[x][z].Elevation,sizeof(wrp[x][z].Elevation),1,output);
        x++;
        if (x == MapSize)
        {
            z++;
            x = 0;
        }
        if (z == MapSize)
        {
            z = 0;
        }
    }
}


void armaTool::Write_Textures()
{
    printf(" Done\nWriting texture index...");

    // write the texture indexes
    int x = 0, z = 0;
    for (int cr = 0; cr < MapSize*MapSize; cr++)
    {
        fwrite(&wrp[x][z].TexIndex,sizeof(wrp[x][z].TexIndex),1,output);
        x++;
        if (x == MapSize)
        {
            z++;
            x = 0;
        }
        if (z == MapSize)
        {
            z = 0;
        }
    }

    printf(" Done\nReading Texture names...");

    fprintf(text,"pmc2\n");

    //textures 32 char length and total of 512
    for (int ix = 0; ix < 512; ix++)
    {
        sig[0] = 0;
        fread(sig,32,1,map);
        fwrite(sig,32,1,output);
        fprintf(text, "texture name [%d]: %s\n",ix,sig);
    }

    fprintf(text,"\n****\nlowest elevation; %d, highest elevation: %d\n****\n",LowElev,HighElev);
    fprintf(text,"pmc3\n");
}


void armaTool::Read_Objects()
{
    printf(" Done\nReading and converting 3dObjects...");

    /*
    3d objects!
    9 floats, x coord, elevation, z coord, 3d object index, 3d object filename
    1,0,0,0,1,0,0,0,1 floats
    x/z coords 0 to 12800 in 256 map
    elevation 32768 and its "fit to ground".
    */
    char dObjName[76];
    float dDir,dDirX = 0,dDirZ = 0;
    long dObjIndex = 0, ConvertedObjects = 0;

    while (!feof(map))
    {
        dDir = 1;
        fread(&dDir,4,1,map);
        fwrite(&dDir,4,1,output);
        dDir = 0;
        fread(&dDir,4,1,map);
        fwrite(&dDir,4,1,output);
        fread(&dDir,4,1,map);
        fwrite(&dDir,4,1,output);
        fread(&dDir,4,1,map);
        fwrite(&dDir,4,1,output);
        dDir = 1;
        fread(&dDir,4,1,map);
        fwrite(&dDir,4,1,output);
        dDir = 0;
        fread(&dDir,4,1,map);
        fwrite(&dDir,4,1,output);
        fread(&dDir,4,1,map);
        fwrite(&dDir,4,1,output);
        fread(&dDir,4,1,map);
        fwrite(&dDir,4,1,output);
        dDir = 1;
        fread(&dDir,4,1,map);
        fwrite(&dDir,4,1,output);

        // X coord
        fread(&dDirX,4,1,map);
        fwrite(&dDirX,4,1,output);

        // here we do our magic for aling to ground
        fread(&dDir,4,1,map);

        // Z coord
        fread(&dDirZ,4,1,map);

        dObjIndex++;
        fread(&dObjIndex,4,1,map);
        // clear the objname variable
        for (int i = 0; i < 76; i++) dObjName[i] = 0;

        fread(dObjName,76,1,map);

        // compare and if match found, replace object...
        ConvertedObjects = Replace_object(dObjName, ConvertedObjects);

        fprintf(text, "%s, %ld, [%f,%f], old: %f, new: ", dObjName, dObjIndex, dDirX, dDirZ, dDir);
        fprintf(text, "%f fixed: ", dDir);

        fwrite(&dDir,4,1,output);
        fwrite(&dDirZ,4,1,output);
        fwrite(&dObjIndex,4,1,output);

        fwrite(dObjName,sizeof(dObjName),1,output);
    };

    printf(" Done\nTotal %ld 3d Objects read and %ld converted.\n", dObjIndex, ConvertedObjects);
}


void armaTool::Close_Files()
{
    fclose(map);
    fclose(output);
    fclose(text);
}
