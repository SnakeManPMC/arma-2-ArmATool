#ifndef ARMATOOL_H
#define ARMATOOL_H

typedef struct
{
    short Elevation;
    short TexIndex;
} wrpformat[4096][4096];

class armaTool
{
public:
    armaTool(int argc, char *argv[]);

    void Open_Files(int argc, char *argv[]);

    // reading part
    void Read_Signature();
    void Read_Elevations();
    void Read_Textures();
    void Read_Objects();

    // writing part
    void Write_Elevations();
    void Write_Textures();

    void Close_Files();
    void Header();
    void Showhelp();

private:
    FILE *map;
    FILE *text;
    FILE *output;
    char sig[33];
    short Elevation, LowElev, HighElev, TexIndex;
    int MapSize, DoMyDepths;
    //CellSize = 50;
};

#endif // ARMATOOL_H
