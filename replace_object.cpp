#include <QtCore/QCoreApplication>
#include <cstdio>
#include <cstdlib>

long Replace_object(char *dObjName, long ConvertedObjects)
{
	// start
	strlwr(dObjName);

	if (strcmp (dObjName,"data3d\\afbarabizna.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\afbarabizna.p3d"); };
	if (strcmp (dObjName,"data3d\\afdum_mesto2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\afdum_mesto2.p3d"); };
	if (strcmp (dObjName,"data3d\\afdum_mesto2l.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\afdum_mesto2l.p3d"); };
	if (strcmp (dObjName,"data3d\\afdum_mesto3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\afdum_mesto3.p3d"); };
	if (strcmp (dObjName,"data3d\\afhospoda_mesto.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\afhospoda_mesto.p3d"); };
	if (strcmp (dObjName,"data3d\\dulni_bs.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dulni_bs.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_zboreny.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_zboreny.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_zboreny_lidice.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_zboreny_Lidice.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_zboreny_total.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_zboreny_total.p3d"); };
// does not work	if (strcmp (dObjName,"data3d\\skala.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala.p3d"); };
	if (strcmp (dObjName,"data3d\\skala_new.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala_new.p3d"); };
	if (strcmp (dObjName,"data3d\\skala_newk.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala_newk.p3d"); };
	if (strcmp (dObjName,"data3d\\bouda1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\bouda1.p3d"); };
/*
this might not be correct heh
*/
	if (strcmp (dObjName,"data3d\\bouda2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\bouda2_vnitrek.p3d"); };
	if (strcmp (dObjName,"data3d\\bouda2_vnitrek.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\bouda2_vnitrek.p3d"); };
	if (strcmp (dObjName,"data3d\\bouda3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\bouda3.p3d"); };
	if (strcmp (dObjName,"data3d\\budova1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova1.p3d"); };
	if (strcmp (dObjName,"data3d\\budova2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova2.p3d"); };
	if (strcmp (dObjName,"data3d\\budova3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova3.p3d"); };
	if (strcmp (dObjName,"data3d\\budova4.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova4.p3d"); };
	if (strcmp (dObjName,"data3d\\budova4_in.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova4_in.p3d"); };
	if (strcmp (dObjName,"data3d\\budova5.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova5.p3d"); };
	if (strcmp (dObjName,"data3d\\cihlovej_dum.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\cihlovej_dum.p3d"); };
	if (strcmp (dObjName,"data3d\\cihlovej_dum_in.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\cihlovej_dum_in.p3d"); };
	if (strcmp (dObjName,"data3d\\cihlovej_dum_mini.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\cihlovej_dum_mini.p3d"); };
	if (strcmp (dObjName,"data3d\\deutshe.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\deutshe.p3d"); };
	if (strcmp (dObjName,"data3d\\deutshe_mini.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\deutshe_mini.p3d"); };
	if (strcmp (dObjName,"data3d\\dum01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum01.p3d"); };
	if (strcmp (dObjName,"data3d\\dum02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum02.p3d"); };
	if (strcmp (dObjName,"data3d\\dumruina.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dumruina.p3d"); };
	if (strcmp (dObjName,"data3d\\dumruina_mini.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dumruina_mini.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_m2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_m2.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_mesto.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_mesto.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_mesto2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_mesto2.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_mesto2l.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_mesto2l.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_mesto3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_mesto3.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_olezlina.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_olezlina.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala1_1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala1_1.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala1_2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala1_2.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala1_3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala1_3.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala1_4.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala1_4.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala1_5.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala1_5.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala2_1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala2_1.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala2_2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala2_2.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala2_3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala2_3.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala2_4.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala2_4.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala2_5.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala2_5.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala3_1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala3_1.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala3_2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala3_2.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala3_3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala3_3.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala3_4.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala3_4.p3d"); };
	if (strcmp (dObjName,"o\\skal\\skala3_5.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala3_5.p3d"); };
	if (strcmp (dObjName,"o\\tree\\akat02s.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\akat02s.p3d"); };
	if (strcmp (dObjName,"o\\hous\\hangar_2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hangar_2.p3d"); };
	if (strcmp (dObjName,"o\\tree\\smrk_maly.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_maly.p3d"); };
	if (strcmp (dObjName,"o\\tree\\smrk_siroky.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_siroky.p3d"); };
	if (strcmp (dObjName,"o\\tree\\smrk_velky.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"o\\tree\\dd_borovice.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\dd_borovice.p3d"); };
	if (strcmp (dObjName,"o\\tree\\dd_borovice02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\dd_borovice02.p3d"); };
	if (strcmp (dObjName,"o\\tree\\les_singlestrom.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\les_singlestrom.p3d"); };
	if (strcmp (dObjName,"data3d\\hromada_kameni.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\hromada_kameni.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen1_piskove2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen1_piskove2.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen1_piskovec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen1_piskovec.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen1_piskovec2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen1_piskovec2.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen1_zula.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen1_zula.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen2_piskovec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen2_piskovec.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen2_piskovec2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen2_piskovec2.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen2_zula.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen2_zula.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen3_piskovec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen3_piskovec.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen3_piskovec2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen3_piskovec2.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen3_zula.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen3_zula.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen4_piskovec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen4_piskovec.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen4_piskovec2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen4_piskovec2.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen4_zula.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen4_zula.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen5_piskovec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen5_piskovec.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen5_piskovec2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen5_piskovec2.p3d"); };
	if (strcmp (dObjName,"data3d\\kamen5_zula.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kamen5_zula.p3d"); };
	if (strcmp (dObjName,"data3d\\kopa_kameni.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kopa_kameni.p3d"); };
	if (strcmp (dObjName,"data3d\\kopa_kameni2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\kopa_kameni2.p3d"); };
	if (strcmp (dObjName,"data3d\\hospital.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hospital.p3d"); };
	if (strcmp (dObjName,"data3d\\fuelstation.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\fuelstation.p3d"); };
	if (strcmp (dObjName,"data3d\\fuelstation_army.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\fuelstation_army.p3d"); };
	if (strcmp (dObjName,"data3d\\garaz.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\garaz.p3d"); };
	if (strcmp (dObjName,"data3d\\garaz_bez_tanku.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\garaz_bez_tanku.p3d"); };
	if (strcmp (dObjName,"data3d\\garaz_s_tankem.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\garaz_s_tankem.p3d"); };
	if (strcmp (dObjName,"data3d\\pristresek.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\tents\\pristresek.p3d"); };
	if (strcmp (dObjName,"data3d\\pristresek_mensi.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\tents\\pristresek_mensi.p3d"); };
	if (strcmp (dObjName,"data3d\\strazni_vez.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\strazni_vez.p3d"); };
	if (strcmp (dObjName,"data3d\\vez.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\vez.p3d"); };
	if (strcmp (dObjName,"data3d\\pletivo_wired.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pletivo_wired.p3d"); };
	if (strcmp (dObjName,"data3d\\pletivo_wired_branal.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pletivo_wired_branal.p3d"); };
	if (strcmp (dObjName,"data3d\\pletivo_wired_branap.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pletivo_wired_branap.p3d"); };
	if (strcmp (dObjName,"o\\misc\\plot_vlnplech1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_vlnplech1.p3d"); };
	if (strcmp (dObjName,"o\\misc\\plot_vlnplech2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_vlnplech2.p3d"); };
	if (strcmp (dObjName,"data3d\\budova1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova1.p3d"); };
	if (strcmp (dObjName,"data3d\\budova2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova2.p3d"); };
	if (strcmp (dObjName,"data3d\\budova3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova3.p3d"); };
	if (strcmp (dObjName,"data3d\\budova4.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova4.p3d"); };
	if (strcmp (dObjName,"data3d\\budova4_in.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova4_in.p3d"); };
	if (strcmp (dObjName,"data3d\\budova5.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova5.p3d"); };
	if (strcmp (dObjName,"data3d\\repair_center.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\repair_center.p3d"); };
	if (strcmp (dObjName,"o\\hous\\bouda_plech.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\bouda_plech.p3d"); };
	if (strcmp (dObjName,"o\\hous\\tovarna1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\tovarna1.p3d"); };
	if (strcmp (dObjName,"o\\hous\\ruiny_obvod_3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\ruiny_obvod_3.p3d"); };
	if (strcmp (dObjName,"data3d\\str jalovec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str jalovec.p3d"); };
	if (strcmp (dObjName,"data3d\\kasna.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\kasna.p3d"); };
	if (strcmp (dObjName,"o\\hous\\kasna_new.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\kasna_new.p3d"); };
	if (strcmp (dObjName,"o\\misc\\lavicka_1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\lavicka_1.p3d"); };
	if (strcmp (dObjName,"data3d\\ker trs travy3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker trs travy3.p3d"); };
	if (strcmp (dObjName,"data3d\\ker trs travy5.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker trs travy5.p3d"); };
	if (strcmp (dObjName,"o\\tree\\dd_bush01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\dd_bush01.p3d"); };
	if (strcmp (dObjName,"o\\tree\\dd_bush02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\dd_bush02.p3d"); };
	if (strcmp (dObjName,"data3d\\barel1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\barel1.p3d"); };
	if (strcmp (dObjName,"data3d\\barel2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\barel2.p3d"); };
	if (strcmp (dObjName,"data3d\\barel3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\barel3.p3d"); };
	if (strcmp (dObjName,"data3d\\barel4.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\barel4.p3d"); };
	if (strcmp (dObjName,"data3d\\barels.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\barels.p3d"); };
	if (strcmp (dObjName,"data3d\\heli_h.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\heli_h.p3d"); };
	if (strcmp (dObjName,"data3d\\jezek kov.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\jezek kov.p3d"); };
	if (strcmp (dObjName,"data3d\\jezekbeton.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\jezekbeton.p3d"); };
	if (strcmp (dObjName,"data3d\\obihacka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\obihacka.p3d"); };
	if (strcmp (dObjName,"data3d\\podlejzacka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\podlejzacka.p3d"); };
	if (strcmp (dObjName,"data3d\\prebehlavka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\prebehlavka.p3d"); };
	if (strcmp (dObjName,"data3d\\prolejzacka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\prolejzacka.p3d"); };
	if (strcmp (dObjName,"data3d\\pytle.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\pytle.p3d"); };
	if (strcmp (dObjName,"data3d\\pytle_bsl.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\pytle_bsl.p3d"); };
	if (strcmp (dObjName,"data3d\\paletaa.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\paletaa.p3d"); };
	if (strcmp (dObjName,"data3d\\paletyc.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\paletyc.p3d"); };
	if (strcmp (dObjName,"data3d\\drevo_hromada.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\drevo_hromada.p3d"); };
	if (strcmp (dObjName,"o\\hous\\drevo_hromada.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\drevo_hromada.p3d"); };
	if (strcmp (dObjName,"data3d\\deka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\deka.p3d"); };
	if (strcmp (dObjName,"data3d\\drat.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\drat.p3d"); };
	if (strcmp (dObjName,"data3d\\barbedwire.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\barbedwire.p3d"); };
	if (strcmp (dObjName,"data3d\\betacam.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\betacam.p3d"); };
	if (strcmp (dObjName,"data3d\\statek_plot.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\statek_plot.p3d"); };
	if (strcmp (dObjName,"data3d\\strel_post.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\strel_post.p3d"); };
	if (strcmp (dObjName,"data3d\\strel_post_panel.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\strel_post_panel.p3d"); };
	if (strcmp (dObjName,"data3d\\zed_kamenna.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zed_kamenna.p3d"); };
	if (strcmp (dObjName,"data3d\\krovi.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\krovi.p3d"); };
	if (strcmp (dObjName,"data3d\\krovi2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\krovi2.p3d"); };
	if (strcmp (dObjName,"data3d\\krovi4.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\krovi4.p3d"); };
	if (strcmp (dObjName,"data3d\\krovi_bigest.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\krovi_bigest.p3d"); };
	if (strcmp (dObjName,"data3d\\krovi_long.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\krovi_long.p3d"); };
	if (strcmp (dObjName,"data3d\\afnewplot2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\afnewplot2.p3d"); };
	if (strcmp (dObjName,"data3d\\newplot.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\newplot.p3d"); };
	if (strcmp (dObjName,"data3d\\newplot2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\newplot2.p3d"); };
	if (strcmp (dObjName,"data3d\\pletivo.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pletivo.p3d"); };
	if (strcmp (dObjName,"data3d\\pletivo_dira.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pletivo_dira.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_green_branka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_green_branka.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_green_brank_o.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_green_brank_o.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_green_cihlsloup.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_green_cihlsloup.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_green_draty.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_green_draty.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_green_vrata.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_green_vrata.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_green_vrat_l.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_green_vrat_l.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_green_vrat_o.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_green_vrat_o.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_green_vrat_r.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_green_vrat_r.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_provizorni.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_provizorni.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_rust_branka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_rust_branka.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_rust_brank_o.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_rust_brank_o.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_rust_cihlsloup.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_rust_cihlsloup.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_rust_draty.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_rust_draty.p3d"); };
	if (strcmp (dObjName,"o\\misc\\plot_vlnplech1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_vlnplech1.p3d"); };
	if (strcmp (dObjName,"o\\misc\\plot_vlnplech2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_vlnplech2.p3d"); };
	if (strcmp (dObjName,"data3d\\plot_zboreny.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_zboreny.p3d"); };
	if (strcmp (dObjName,"o\\hous\\plot_zed-drevo1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_zed-drevo1.p3d"); };
	if (strcmp (dObjName,"o\\hous\\plot_zed-drevo2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_zed-drevo2.p3d"); };
	if (strcmp (dObjName,"o\\hous\\plot_zed-drevo3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_zed-drevo3.p3d"); };
	if (strcmp (dObjName,"o\\hous\\plot_zed-drevo1-branka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_zed_drevo1_branka.p3d"); };
	if (strcmp (dObjName,"data3d\\plutek.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plutek.p3d"); };
	if (strcmp (dObjName,"o\\misc\\pumpa.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pumpa.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_rasovna.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_rasovna.p3d"); };
	if (strcmp (dObjName,"data3d\\fuelstation_new.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\fuelstation.p3d"); };
	if (strcmp (dObjName,"data3d\\kostel.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\kostel.p3d"); };
	if (strcmp (dObjName,"data3d\\kostel2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\kostel2.p3d"); };
	if (strcmp (dObjName,"data3d\\kostel3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\kostel3.p3d"); };
	if (strcmp (dObjName,"data3d\\kostelik.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\kostelik.p3d"); };
	if (strcmp (dObjName,"data3d\\kostel_trosky.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\kostel_trosky.p3d"); };
	if (strcmp (dObjName,"data3d\\majak.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\majak.p3d"); };
	if (strcmp (dObjName,"data3d\\majak_podesta.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\majak_podesta.p3d"); };
	if (strcmp (dObjName,"data3d\\majak_v_celku.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\majak_v_celku.p3d"); };
	if (strcmp (dObjName,"data3d\\molo_beton.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\molo_beton.p3d"); };
	if (strcmp (dObjName,"data3d\\molo_drevo.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\molo_drevo.p3d"); };
	if (strcmp (dObjName,"data3d\\molo_drevo_bs.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\molo_drevo_bs.p3d"); };
	if (strcmp (dObjName,"data3d\\molo_drevo_end.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\molo_drevo_end.p3d"); };
	if (strcmp (dObjName,"data3d\\molo_krychle.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\molo_krychle.p3d"); };
	if (strcmp (dObjName,"data3d\\kr_asfaltka_asfaltka_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_asfaltka_asfaltka_t.p3d"); };
	if (strcmp (dObjName,"data3d\\kr_asfaltka_cesta_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_asfaltka_cesta_t.p3d"); };
	if (strcmp (dObjName,"data3d\\kr_asfaltka_sil_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_asfaltka_sil_t.p3d"); };
	if (strcmp (dObjName,"o\\road\\kr_new_asf_asf_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_asf_asf_t.p3d"); };
	if (strcmp (dObjName,"o\\road\\kr_new_asf_ces_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_asf_ces_t.p3d"); };
	if (strcmp (dObjName,"o\\road\\kr_new_asf_sil_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_asf_sil_t.p3d"); };
	if (strcmp (dObjName,"o\\road\\kr_new_kos.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_kos.p3d"); };
	if (strcmp (dObjName,"o\\road\\kr_new_kos_kos_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_kos_kos_t.p3d"); };
	if (strcmp (dObjName,"o\\road\\kr_new_kos_sil_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_kos_sil_t.p3d"); };
	if (strcmp (dObjName,"o\\road\\kr_new_silxsil.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_silxsil.p3d"); };
	if (strcmp (dObjName,"o\\road\\kr_new_sil_asf_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_sil_asf_t.p3d"); };
	if (strcmp (dObjName,"o\\road\\kr_new_sil_ces_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_sil_ces_t.p3d"); };
	if (strcmp (dObjName,"o\\road\\kr_new_sil_kos_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_sil_kos_t.p3d"); };
	if (strcmp (dObjName,"o\\road\\kr_new_sil_sil_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_sil_sil_t.p3d"); };
	if (strcmp (dObjName,"data3d\\kr_silnicexsilnice.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_silnicexsilnice.p3d"); };
	if (strcmp (dObjName,"data3d\\kr_silnice_asfaltka_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_silnice_asfaltka_t.p3d"); };
	if (strcmp (dObjName,"data3d\\kr_silnice_cesta_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_silnice_cesta_t.p3d"); };
	if (strcmp (dObjName,"data3d\\kr_silnice_silnice_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_silnice_silnice_t.p3d"); };
	if (strcmp (dObjName,"data3d\\jablon.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\jablon.p3d"); };
	if (strcmp (dObjName,"data3d\\ker buxus.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker buxus.p3d"); };
	if (strcmp (dObjName,"data3d\\ker deravej.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker deravej.p3d"); };
	if (strcmp (dObjName,"data3d\\ker pichlavej.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker pichlavej.p3d"); };
	if (strcmp (dObjName,"data3d\\ker s bobulema.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker s bobulema.p3d"); };
	if (strcmp (dObjName,"data3d\\oliva.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\oliva.p3d"); };
	if (strcmp (dObjName,"data3d\\parez.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\parez.p3d"); };
	if (strcmp (dObjName,"data3d\\str briza.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str briza.p3d"); };
	if (strcmp (dObjName,"data3d\\str buk.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str buk.p3d"); };
	if (strcmp (dObjName,"data3d\\str dub jiny.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str dub jiny.p3d"); };
	if (strcmp (dObjName,"data3d\\str dub.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str dub.p3d"); };
	if (strcmp (dObjName,"data3d\\str habr.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str habr.p3d"); };
	if (strcmp (dObjName,"data3d\\str javor.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str javor.p3d"); };
	if (strcmp (dObjName,"data3d\\str jerabina.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str jerabina.p3d"); };
	if (strcmp (dObjName,"data3d\\str kastan.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str kastan.p3d"); };
	if (strcmp (dObjName,"data3d\\str krovisko vysoke.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str krovisko vysoke.p3d"); };
	if (strcmp (dObjName,"data3d\\str lipa.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str lipa.p3d"); };
	if (strcmp (dObjName,"data3d\\str osika.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str osika.p3d"); };
	if (strcmp (dObjName,"data3d\\str trnka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str trnka.p3d"); };
	if (strcmp (dObjName,"data3d\\str vrba.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str vrba.p3d"); };
	if (strcmp (dObjName,"data3d\\str_fikovnik.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str_fikovnik.p3d"); };
	if (strcmp (dObjName,"data3d\\str_fikovnik2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str_fikovnik2.p3d"); };
	if (strcmp (dObjName,"data3d\\str_fikovnik_ker.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str_fikovnik_ker.p3d"); };
	if (strcmp (dObjName,"data3d\\hruzdum.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hruzdum.p3d"); };
	if (strcmp (dObjName,"data3d\\statek_brana.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\statek_brana.p3d"); };
	if (strcmp (dObjName,"data3d\\statek_brana_open.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\statek_brana_open.p3d"); };
	if (strcmp (dObjName,"data3d\\statek_hl_bud.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\statek_hl_bud.p3d"); };
	if (strcmp (dObjName,"data3d\\statek_kulna.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\statek_kulna.p3d"); };
	if (strcmp (dObjName,"data3d\\stodola_open.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stodola_open.p3d"); };
	if (strcmp (dObjName,"data3d\\zvonice.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\zvonice.p3d"); };
	if (strcmp (dObjName,"data3d\\lampa strop.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\lampa strop.p3d"); };
	if (strcmp (dObjName,"data3d\\lampadrevo.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\lampadrevo.p3d"); };
	if (strcmp (dObjName,"data3d\\lampazel.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\lampazel.p3d"); };
	if (strcmp (dObjName,"data3d\\stoh.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\stoh.p3d"); };
	if (strcmp (dObjName,"data3d\\str_briza_kriva.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str_briza_kriva.p3d"); };
	if (strcmp (dObjName,"data3d\\str_briza_rovna.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str_briza_rovna.p3d"); };
	if (strcmp (dObjName,"data3d\\str_liskac.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str_liskac.p3d"); };
	if (strcmp (dObjName,"data3d\\str_pinie.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str_pinie.p3d"); };
	if (strcmp (dObjName,"data3d\\ammostore2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\ammostore2.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_mesto_in.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_mesto_in.p3d"); };
	if (strcmp (dObjName,"data3d\\hospoda_mesto.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hospoda_mesto.p3d"); };
	if (strcmp (dObjName,"data3d\\stanice.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"data3d\\helfenburk.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\castle\\helfenburk.p3d"); };
	if (strcmp (dObjName,"data3d\\helfenburk_brana.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\castle\\helfenburk_brana.p3d"); };
	if (strcmp (dObjName,"data3d\\helfenburk_budova2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\castle\\helfenburk_budova2.p3d"); };
	if (strcmp (dObjName,"data3d\\helfenburk_cimburi.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\castle\\helfenburk_cimburi.p3d"); };
	if (strcmp (dObjName,"data3d\\helfenburk_zed.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\castle\\helfenburk_zed.p3d"); };
	if (strcmp (dObjName,"data3d\\str_topol.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str_topol.p3d"); };
	if (strcmp (dObjName,"data3d\\str_topol2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\str_topol2.p3d"); };
	if (strcmp (dObjName,"o\\hous\\aut_zast.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\aut_zast.p3d"); };
	if (strcmp (dObjName,"o\\hous\\bordel_zidka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\bordel_zidka.p3d"); };
	if (strcmp (dObjName,"data3d\\bozi_muka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\bozi_muka.p3d"); };
	if (strcmp (dObjName,"o\\hous\\brana02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\brana02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\hous\\brana02nodoor.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02nodoor.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek_rosa.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\domek_rosa.p3d"); };
	if (strcmp (dObjName,"data3d\\hlaska.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hlaska.p3d"); };
	if (strcmp (dObjName,"o\\hous\\hlidac_budka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hlidac_budka.p3d"); };
	if (strcmp (dObjName,"o\\misc\\kap02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\kap02.p3d"); };
	if (strcmp (dObjName,"o\\misc\\kapl.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\kapl.p3d"); };
	if (strcmp (dObjName,"o\\hous\\nabrezi.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\nabrezi.p3d"); };
	if (strcmp (dObjName,"o\\hous\\nabrezi_najezd.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\nabrezi_najezd.p3d"); };
	if (strcmp (dObjName,"o\\hous\\orlhot.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\orlhot.p3d"); };
	if (strcmp (dObjName,"o\\hous\\panelak.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\panelak.p3d"); };
	if (strcmp (dObjName,"o\\hous\\panelak2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\panelak2.p3d"); };
	if (strcmp (dObjName,"o\\hous\\panelak3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\panelak3.p3d"); };
	if (strcmp (dObjName,"o\\hous\\posed.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\posed.p3d"); };
	if (strcmp (dObjName,"o\\misc\\psi_bouda.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\psi_bouda.p3d"); };
	if (strcmp (dObjName,"data3d\\ryb_domek.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\ryb_domek.p3d"); };
/*
the-f reported this is not working, missing textures.
	if (strcmp (dObjName,"o\\hous\\skola.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\skola.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_patr_nizky_prujezd.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\zalchata.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_podloubi03klaster.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_dum_podloubi03klaster.p3d"); };
	if (strcmp (dObjName,"o\\hous\\zalchata.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\zalchata.p3d"); };
*/
	// temporary fix, needs to find more suitable replacement...
	if (strcmp (dObjName,"o\\hous\\zalchata.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stodola_open.p3d"); };

	if (strcmp (dObjName,"o\\hous\\vysilac_fm.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\vysilac_fm.p3d"); };
	if (strcmp (dObjName,"o\\misc\\aut_z_st.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\aut_z_st.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dd_pletivo.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\dd_pletivo.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dd_pletivo_dira.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\dd_pletivo_dira.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dd_pletivo_sl.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\dd_pletivo_sl.p3d"); };
	if (strcmp (dObjName,"o\\hous\\hrob1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\hrob1.p3d"); };
	if (strcmp (dObjName,"o\\hous\\hrob2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\hrob2.p3d"); };
	if (strcmp (dObjName,"data3d\\hrobecek.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\hrobecek.p3d"); };
	if (strcmp (dObjName,"data3d\\hrobecek2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\hrobecek2.p3d"); };
	if (strcmp (dObjName,"data3d\\hrobecek_krizek1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\hrobecek_krizek1.p3d"); };
	if (strcmp (dObjName,"data3d\\hrobecek_krizek2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\hrobecek_krizek2.p3d"); };
	if (strcmp (dObjName,"data3d\\hrobecek_krizekhelma.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\hrobecek_krizekhelma.p3d"); };
	if (strcmp (dObjName,"o\\hous\\kbud.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\kbud.p3d"); };
	if (strcmp (dObjName,"o\\misc\\leseni2x.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\leseni2x.p3d"); };
	if (strcmp (dObjName,"o\\misc\\leseni4x.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\leseni4x.p3d"); };
	if (strcmp (dObjName,"o\\hous\\nahrobek1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\nahrobek1.p3d"); };
	if (strcmp (dObjName,"o\\hous\\nahrobek2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\nahrobek2.p3d"); };
	if (strcmp (dObjName,"o\\hous\\nahrobek3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\nahrobek3.p3d"); };
	if (strcmp (dObjName,"o\\hous\\nahrobek4.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\nahrobek4.p3d"); };
	if (strcmp (dObjName,"o\\hous\\nahrobek5.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\nahrobek5.p3d"); };
	if (strcmp (dObjName,"o\\hous\\nam_dlazba.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\nam_dlazba.p3d"); };
	if (strcmp (dObjName,"o\\hous\\nam_okruzi.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\nam_okruzi.p3d"); };
	if (strcmp (dObjName,"o\\misc\\nastenka2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\nastenka2.p3d"); };
	if (strcmp (dObjName,"o\\misc\\nastenka3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\nastenka3.p3d"); };
	if (strcmp (dObjName,"o\\hous\\ruiny_3_dvere.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\ruiny_3_dvere.p3d"); };
	if (strcmp (dObjName,"o\\hous\\ruiny_3_prasklina.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\ruiny_3_prasklina.p3d"); };
	if (strcmp (dObjName,"o\\hous\\ruiny_3_roh.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\ruiny_3_roh.p3d"); };
	if (strcmp (dObjName,"o\\hous\\ruiny_3_stena.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\ruiny_3_stena.p3d"); };
	if (strcmp (dObjName,"o\\hous\\ruiny_3_stenazbor.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\ruiny_3_stenazbor.p3d"); };
	if (strcmp (dObjName,"o\\hous\\stozarvn_1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\stozarvn_1.p3d"); };
	if (strcmp (dObjName,"o\\hous\\stozarvn_2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\stozarvn_2.p3d"); };
	if (strcmp (dObjName,"o\\hous\\stozarvn_3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\stozarvn_3.p3d"); };
	if (strcmp (dObjName,"data3d\\zavora.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zavora.p3d"); };
	if (strcmp (dObjName,"o\\misc\\zavora.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zavora.p3d"); };
	if (strcmp (dObjName,"o\\misc\\zavora_sloupek.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zavora_sloupek.p3d"); };
	if (strcmp (dObjName,"data3d\\zed.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zed.p3d"); };
	if (strcmp (dObjName,"data3d\\zed2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zed2.p3d"); };
	if (strcmp (dObjName,"data3d\\zed3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zed3.p3d"); };
	if (strcmp (dObjName,"o\\hous\\zidka01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zidka01.p3d"); };
	if (strcmp (dObjName,"o\\hous\\zidka02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zidka02.p3d"); };
	if (strcmp (dObjName,"o\\hous\\zidka03.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zidka03.p3d"); };
	if (strcmp (dObjName,"o\\hous\\zidka04.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zidka04.p3d"); };
	if (strcmp (dObjName,"o\\hous\\zidka_branka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zidka_branka.p3d"); };
	if (strcmp (dObjName,"data3d\\astan.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\tents\\astan.p3d"); };
	if (strcmp (dObjName,"data3d\\mash.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\tents\\mash.p3d"); };
	if (strcmp (dObjName,"data3d\\stan.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\tents\\stan.p3d"); };
	if (strcmp (dObjName,"data3d\\stan_east.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\tents\\stan_east.p3d"); };
	if (strcmp (dObjName,"data3d\\stan_eastc.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\tents\\stan_east.p3d"); };
	if (strcmp (dObjName,"data3d\\stan_inside.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\tents\\stan.p3d"); };
	if (strcmp (dObjName,"data3d\\hrusen2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\hrusen2.p3d"); };
	if (strcmp (dObjName,"o\\hous\\most_stred30.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\most_stred30.p3d"); };
	if (strcmp (dObjName,"data3d\\zula.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\zula.p3d"); };
	if (strcmp (dObjName,"data3d\\jehlan cs.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\jehlan cs.p3d"); };
	if (strcmp (dObjName,"data3d\\patnik.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\patnik.p3d"); };
	if (strcmp (dObjName,"data3d\\patniky.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\patniky.p3d"); };
	if (strcmp (dObjName,"data3d\\sloupyela.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\sloupyela.p3d"); };
	if (strcmp (dObjName,"data3d\\sloupyeli.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\sloupyeli.p3d"); };
	if (strcmp (dObjName,"data3d\\terc.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\terc.p3d"); };
	if (strcmp (dObjName,"data3d\\uzaverka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\uzaverka.p3d"); };
	if (strcmp (dObjName,"data3d\\zed_podplaz.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\zed_podplaz.p3d"); };
	if (strcmp (dObjName,"data3d\\podprapornik.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\podprapornik.p3d"); };

/*
Roads, these ones work or not?
*/
	if (strcmp (dObjName,"o\\road\\ces10 100.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces10 100.p3d"); };
	if (strcmp (dObjName,"o\\road\\ces10 50.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces10 50.p3d"); };
	if (strcmp (dObjName,"o\\road\\ces10 75.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces10 75.p3d"); };
	if (strcmp (dObjName,"o\\road\\ces10 25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces10 25.p3d"); };
	if (strcmp (dObjName,"o\\road\\ces25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces25.p3d"); };
	if (strcmp (dObjName,"o\\road\\ces12.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces12.p3d"); };
	if (strcmp (dObjName,"o\\road\\ces6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces6.p3d"); };
	if (strcmp (dObjName,"o\\road\\ces6konec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces6konec.p3d"); };
	if (strcmp (dObjName,"o\\road\\sil10 100.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil10 100.p3d"); };
	if (strcmp (dObjName,"o\\road\\sil10 50.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil10 50.p3d"); };
	if (strcmp (dObjName,"o\\road\\sil10 75.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil10 75.p3d"); };
	if (strcmp (dObjName,"o\\road\\sil10 25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil10 25.p3d"); };
	if (strcmp (dObjName,"o\\road\\sil25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil25.p3d"); };
	if (strcmp (dObjName,"o\\road\\sil12.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil12.p3d"); };
	if (strcmp (dObjName,"o\\road\\sil6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil6.p3d"); };
	if (strcmp (dObjName,"o\\road\\sil6konec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil6konec.p3d"); };
/*
disabled to try if they work better as other types look for these from the
conversion part
	if (strcmp (dObjName,"data3d\\silnice10 100.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\silnice10 100.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice10 75.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\silnice10 75.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice10 50.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\silnice10 50.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice10 25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\silnice10 25.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice12.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\silnice12.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\silnice25.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\silnice6.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice6konec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\silnice6konec.p3d"); };
	if (strcmp (dObjName,"data3d\\asfatlka10 100.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asfatlka10 100.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka10 75.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asfaltka10 75.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka10 50.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asfaltka10 50.p3d"); };
	if (strcmp (dObjName,"data3d\\asfatlka10 25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asfatlka10 25.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka12.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asfaltka12.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asfaltka25.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asfaltka6.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka6konec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asfaltka6konec.p3d"); };
*/
	if (strcmp (dObjName,"o\\road\\asf10 100.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf10 100.p3d"); };
	if (strcmp (dObjName,"o\\road\\asf10 75.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf10 75.p3d"); };
	if (strcmp (dObjName,"o\\road\\asf10 50.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf10 50.p3d"); };
	if (strcmp (dObjName,"o\\road\\asf10 25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf10 25.p3d"); };
	if (strcmp (dObjName,"o\\road\\asf12.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf12.p3d"); };
	if (strcmp (dObjName,"o\\road\\asf25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf25.p3d"); };
	if (strcmp (dObjName,"o\\road\\asf6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf6.p3d"); };
	if (strcmp (dObjName,"o\\road\\asf6konec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf6konec.p3d"); };
	if (strcmp (dObjName,"o\\road\\kos10 100.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kos10 100.p3d"); };
	if (strcmp (dObjName,"o\\road\\kos10 75.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kos10 75.p3d"); };
	if (strcmp (dObjName,"o\\road\\kos10 50.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kos10 50.p3d"); };
	if (strcmp (dObjName,"o\\road\\kos10 25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kos10 25.p3d"); };
	if (strcmp (dObjName,"o\\road\\kos12.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kos12.p3d"); };
	if (strcmp (dObjName,"o\\road\\kos25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kos25.p3d"); };
	if (strcmp (dObjName,"o\\road\\kos6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kos6.p3d"); };
	if (strcmp (dObjName,"o\\road\\kos6konec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kos6konec.p3d"); };

/*
	CONVERSION PART, THIS IS WERE ISLANDS ARE "CHANGED"!
	remove this part if you do not want to change objects
*/
	if (strcmp (dObjName,"data3d\\afstr borovice horska.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_siroky.p3d"); };
	if (strcmp (dObjName,"data3d\\afstr borovice.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_siroky.p3d"); };
	if (strcmp (dObjName,"data3d\\afstr smrk ridky.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"data3d\\afstr smrk.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"data3d\\cesta10 100.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces10 100.p3d"); };
	if (strcmp (dObjName,"data3d\\cesta10 25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces10 25.p3d"); };
	if (strcmp (dObjName,"data3d\\cesta10 50.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces10 50.p3d"); };
	if (strcmp (dObjName,"data3d\\cesta10 75.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces10 75.p3d"); };
	if (strcmp (dObjName,"data3d\\cesta12.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces12.p3d"); };
	if (strcmp (dObjName,"data3d\\cesta25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces25.p3d"); };
	if (strcmp (dObjName,"data3d\\cesta6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces6.p3d"); };
	if (strcmp (dObjName,"data3d\\cesta6konec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\ces6konec.p3d"); };
	if (strcmp (dObjName,"data3d\\dum_rasovna_in.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_rasovna.p3d"); };
	if (strcmp (dObjName,"data3d\\hangar.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hangar_2.p3d"); };
	if (strcmp (dObjName,"data3d\\hrusen.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\hrusen2.p3d"); };
	if (strcmp (dObjName,"data3d\\ker listnac.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker buxus.p3d"); };
	if (strcmp (dObjName,"data3d\\ker rakosi.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker buxus.p3d"); };
	if (strcmp (dObjName,"data3d\\ker trs travy kvetina.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker trs travy3.p3d"); };
	if (strcmp (dObjName,"data3d\\ker trs travy.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker trs travy3.p3d"); };
	if (strcmp (dObjName,"data3d\\ker trs travy2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker trs travy3.p3d"); };
	if (strcmp (dObjName,"data3d\\ker trs travy4.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker trs travy5.p3d"); };
	if (strcmp (dObjName,"data3d\\ker trs travy6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker trs travy5.p3d"); };
	if (strcmp (dObjName,"data3d\\ker trs travy7.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\ker trs travy5.p3d"); };
	if (strcmp (dObjName,"data3d\\krovi3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\Krovi4.p3d"); };
	if (strcmp (dObjName,"data3d\\ohrada_end.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_ohrada.p3d"); };
	if (strcmp (dObjName,"data3d\\ohrada_sama.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\plot_ohrada.p3d"); };
	if (strcmp (dObjName,"data3d\\olezlina.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_olezlina.p3d"); };
	if (strcmp (dObjName,"data3d\\pahejl borovice.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"data3d\\pahejl borovice2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"data3d\\pahejl smrk.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"data3d\\plechbud.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\signs\\stopka.p3d"); };
	if (strcmp (dObjName,"data3d\\ryb_domek_in.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\ryb_domek.p3d"); };
	if (strcmp (dObjName,"data3d\\skala.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\rocks\\skala_new.p3d"); };
	if (strcmp (dObjName,"data3d\\stodola.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stodola_old.p3d"); };
	if (strcmp (dObjName,"data3d\\str borovice horska.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"data3d\\str borovice.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"data3d\\str jedle.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"data3d\\str smrk ridky.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"data3d\\str smrk vysoky.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"data3d\\str smrk.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_velky.p3d"); };
	if (strcmp (dObjName,"data3d\\str smrk_medium.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_siroky.p3d"); };
	if (strcmp (dObjName,"data3d\\str_smrcicicek.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\smrk_maly.p3d"); };
	if (strcmp (dObjName,"data3d\\znacka_stop.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\signs\\stopka.p3d"); };
	if (strcmp (dObjName,"o\\divk\\brana.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\hrad01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\hrdb01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\roh_kamen.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\zed_01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\zed_02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\zed_04.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\zed_dr.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\zed_hr.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\zed_ker.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\zedcl.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\zedlv.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\zedpr.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\divk\\zedvn.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\brana02.p3d"); };
	if (strcmp (dObjName,"o\\hous\\chata6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\zalchata.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek_hospoda.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek_hospoda.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek_kovarna.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek_kovarna.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek_podhradi_1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek_podhradi_1.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek_radnice.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\zalchata.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek_ruina.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek_ruina.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek_sedy.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek_sedy.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek_sedy_bez.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek_sedy_bez.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek_vilka.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek_vilka.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek_zluty.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek_zluty.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek_zluty_bez.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek_zluty_bez.p3d"); };
	if (strcmp (dObjName,"o\\tree\\akat01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\hrusen2.p3d"); };
	if (strcmp (dObjName,"o\\tree\\akat02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\hrusen2.p3d"); };
	if (strcmp (dObjName,"o\\tree\\akat02_kvety.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\hrusen2.p3d"); };
	if (strcmp (dObjName,"o\\tree\\akat03.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\hrusen2.p3d"); };
	if (strcmp (dObjName,"o\\tree\\dubfx.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\hrusen2.p3d"); };
	if (strcmp (dObjName,"o\\tree\\javor01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\hrusen2.p3d"); };
	if (strcmp (dObjName,"o\\tree\\javor02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\plants\\hrusen2.p3d"); };

	/* these are so just placeholders :( */
	if (strcmp (dObjName,"o\\hous\\dum_patr_nizky_prujezd.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\skola.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };

	if (strcmp (dObjName,"o\\hous\\dum_patrovy01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_patrovy01b.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_patrovy01c.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_patrovy01d.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_patrovy01prujezd.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_patrovy02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_patrovy03.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_patrovy04.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_patrovy05.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_patrovy06.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_podloubi.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_podloubi02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_podloubi03.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\stanice.p3d"); };
	if (strcmp (dObjName,"o\\hous\\kostelin.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\kostel.p3d"); };
	/* end of placeholders */

/*
the conversion part roads, fix or not, dunno
*/
	if (strcmp (dObjName,"data3d\\silnice10 100.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil10 100.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice10 75.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil10 75.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice10 50.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil10 50.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice10 25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil10 25.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice12.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil12.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil25.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil6.p3d"); };
	if (strcmp (dObjName,"data3d\\silnice6konec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\sil6konec.p3d"); };
	if (strcmp (dObjName,"data3d\\asfatlka10 100.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf10 100.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka10 75.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf10 75.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka10 50.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf10 50.p3d"); };
	if (strcmp (dObjName,"data3d\\asfatlka10 25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf10 25.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka12.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf12.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf25.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf6.p3d"); };
	if (strcmp (dObjName,"data3d\\asfaltka6konec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\asf6konec.p3d"); };
	if (strcmp (dObjName,"o\\hous\\dum_podloubi03klaster.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_dum_podloubi03klaster.p3d"); };
	if (strcmp (dObjName,"data3d\\mesto_dum.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\dum_mesto.p3d"); };
	if (strcmp (dObjName,"o\\hous\\benzina.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\benzina_schnell.p3d"); };
/* Gnat reported that these wont work? */
	if (strcmp (dObjName,"o\\hous\\domek01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek01.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek02.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek03.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek03.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek04.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek04.p3d"); };
	if (strcmp (dObjName,"o\\hous\\domek05.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_domek05.p3d"); };
/* end of Gnat report */
	if (strcmp (dObjName,"o\\hous\\hasic_zbroj.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_hasic_zbroj.p3d"); };
	if (strcmp (dObjName,"o\\hous\\stodola.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_stodola.p3d"); };
	if (strcmp (dObjName,"o\\hous\\stodola2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_stodola2.p3d"); };
	if (strcmp (dObjName,"o\\hous\\stodola3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_stodola3.p3d"); };
	if (strcmp (dObjName,"o\\hous\\zluty_statek.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_zluty_statek.p3d"); };
	if (strcmp (dObjName,"o\\hous\\zluty_statek_in.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\sara_zluty_statek.p3d"); };
/*
	if (strcmp (dObjName,"") == 0) { ConvertedObjects ++; strcpy (dObjName,""); };
*/
/* SEB NAM objects, basically a VTE thing :) */
	if (strcmp (dObjName,"sebnam_obj\\sebelekrovi2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_iplant5.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebker rakosi.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_iplant6.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebkrovi_long.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_iplant5.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebkrovi4.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_iplant6.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebpristresek_mensi.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_rwallv.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebles_su_ctver_pruhozi.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_les_nw_ctver_pruhozi.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebles_su_ctver_pruhozi_var1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_les_nw_ctver_pruhozi.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebles_su_ctver_pruhozi_var2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_les_nw_ctver_pruhozi.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebles_su_ctver_pruhozi_var3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_les_nw_ctver_pruhozi.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebtrailpath10 100.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_itrailpath10 100.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebtrailpath10 25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_itrailpath10 25.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebtrailpath10 50.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_itrailpath10 50.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebtrailpath10 75.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_itrailpath10 75.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebtrailpath12.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_itrailpath12.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebtrailpath25.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_itrailpath25.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebtrailpath6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_itrailpath6.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebtrailpath6konec.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_itrailpath6konec.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebkamen2_zula.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_grassrock1.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebkamen5_zula.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_grassrock3.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebpalm_str_liskac_.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_ipalm3.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebstr borovice horska.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_tree04.p3d"); }; /* or VTE_tree06 */
	if (strcmp (dObjName,"sebnam_obj\\sebstr krovisko vysoke.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_tree06.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebstr osika.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_itree02.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebstr_fikovnik.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_ipalm2.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebstr_fikovnik2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_ipalm2.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebstr_fikovnik_ker.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_ipalm2.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebstr_liskac.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_iplant7.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebbouda2_vnitrek.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_ehut1.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebcamobouda2_vnitrek.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_ehut1.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebbudova4_in.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\budova4_in.p3d"); };
	/* this is not in ArmA, so we "convert" a bit...  replace with better if you please */
	if (strcmp (dObjName,"data3d\\fortress1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\strazni_vez.p3d"); };
	if (strcmp (dObjName,"data3d\\fortress2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\strazni_vez.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebplutek.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_picketfence.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebpytle.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_rwallB.p3d"); };
	if (strcmp (dObjName,"sebnam_obj\\sebpytle_bsl.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"VTE_objects\\VTE_rwallB.p3d"); };

	/* works for VTE yes, but not for normal ArmA. */
	// if (strcmp (dObjName,"data3d\\plechbud.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"vte_objects\\vte_outhouse.p3d"); };
/* end of SEB NAM stuff */

/*
for the-f a personalized road change, please do not use otherwise!
*/
//	if (strcmp (dObjName,"ca\\roads\\kr_asfaltka_asfaltka_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_asf_asf_t.p3d"); };
//	if (strcmp (dObjName,"ca\\roads\\kr_asfaltka_cesta_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_asf_ces_t.p3d"); };
//	if (strcmp (dObjName,"ca\\roads\\kr_asfaltka_sil_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_asf_sil_t.p3d"); };
//	if (strcmp (dObjName,"ca\\roads\\kr_silnice_asfaltka_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_sil_asf_t.p3d"); };
//	if (strcmp (dObjName,"ca\\roads\\kr_silnice_cesta_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_sil_ces_t.p3d"); };
//	if (strcmp (dObjName,"ca\\roads\\kr_silnice_silnice_t.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_sil_sil_t.p3d"); };
//	if (strcmp (dObjName,"ca\\roads\\kr_silnicexsilnice.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\roads\\kr_new_silxsil.p3d"); };
/*
	if (strcmp (dObjName,"") == 0) { ConvertedObjects ++; strcpy (dObjName,""); };
*/

/*
	if we have the special ArmA models that need special values, this is
	where they are setupped properly. very ugly thing I know, but I'm looser
	so dont complain :)
*/

/*
disabled due MOO.exe MLODs ;)
	if (strcmp (dObjName,"ca\\plants\\palm_01.p3d") == 0) { dDir += 5.7; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\palm_02.p3d") == 0) { dDir += 6.9; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\palm_03.p3d") == 0) { dDir += 6.9; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\palm_04.p3d") == 0) { dDir += 6.9; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\palm_08small.p3d") == 0) { dDir += 1.5; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\palm_09.p3d") == 0) { dDir += 7.7; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\palm_10.p3d") == 0) { dDir += 7.9; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\akat02s.p3d") == 0) { dDir += 4.2; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\banana_1.p3d") == 0) { dDir += 2.2; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\banana_2.p3d") == 0) { dDir += 2.2; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\banana_3.p3d") == 0) { dDir += 2.2; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\banana_4.p3d") == 0) { dDir += 2.2; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\letistni_hala.p3d") == 0) { dDir += 8.5; dDir -= 1000; };
// this is not converted object?	if (strcmp (dObjName,"ca\\plants\\str briza.p3d") == 0) { dDir += 3.5; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\str_briza_kriva.p3d") == 0) { dDir += 3.5; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\plants\\str_briza_rovna.p3d") == 0) { dDir += 3.3; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_istan2.p3d") == 0) { dDir += 2.4; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_istan2_04a.p3d") == 0) { dDir += 4; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_istan2b.p3d") == 0) { dDir += 2.4; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_istan3.p3d") == 0) { dDir += 2.6; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_istan3_hromada.p3d") == 0) { dDir += 3.4; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_istan3_hromada2.p3d") == 0) { dDir += 4.7; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_istan3_pumpa.p3d") == 0) { dDir += 2; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_istan4.p3d") == 0) { dDir += 7.3; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_istan4_big.p3d") == 0) { dDir += 10.3; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_istan4_detaily1.p3d") == 0) { dDir += 7.3; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_mesto3_istan.p3d") == 0) { dDir += 2.4; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_olez_istan1.p3d") == 0) { dDir += 2.4; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_olez_istan2.p3d") == 0) { dDir += 1; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_olez_istan2_maly.p3d") == 0) { dDir += 2.4; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\dum_olez_istan2_maly2.p3d") == 0) { dDir += 2.4; dDir -= 1000; };
	if (strcmp (dObjName,"ca\\buildings\\hotel.p3d") == 0) { dDir += 8; dDir -= 1000; };
*/

/*
special case for PMC Rugen porting, the forest blocks in PMC\PMC_ofp_obj\ :)
*/
	if (strcmp (dObjName,"data3d\\les ctverec pruchozi_t1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"pmc_ofp_obj\\les ctverec pruchozi_t1.p3d"); };
	if (strcmp (dObjName,"data3d\\les ctverec pruchozi_t2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"pmc_ofp_obj\\les ctverec pruchozi_t2.p3d"); };
	if (strcmp (dObjName,"data3d\\les trojuhelnik pruchozi.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"pmc_ofp_obj\\les trojuhelnik pruchozi.p3d"); };
	if (strcmp (dObjName,"o\\tree\\les_nw_ctver_pruhozi_t1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"pmc_ofp_obj\\les_nw_ctver_pruhozi_t1.p3d"); };
	if (strcmp (dObjName,"o\\tree\\les_nw_ctver_pruhozi_t2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"pmc_ofp_obj\\les_nw_ctver_pruhozi_t2.p3d"); };
	if (strcmp (dObjName,"o\\tree\\les_nw_jehl_t1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"pmc_ofp_obj\\les_nw_jehl_t1.p3d"); };
	if (strcmp (dObjName,"o\\tree\\les_nw_jehl_t2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"pmc_ofp_obj\\les_nw_jehl_t2.p3d"); };
	if (strcmp (dObjName,"o\\tree\\les_nw_jehl_trojuhelnik.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"pmc_ofp_obj\\les_nw_jehl_trojuhelnik.p3d"); };
	if (strcmp (dObjName,"o\\tree\\les_nw_trojuhelnik.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"pmc_ofp_obj\\les_nw_trojuhelnik.p3d"); };
	/* end of PMC Rugen PMC_ofp_obj conversion */

	/* mapfag baracken */
	if (strcmp (dObjName,"baracken\\barackesupports1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\barackesupports2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\barackesupports3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\brown_baracke01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\brown_baracke02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\brown_baracke03.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\brown_baracke04.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\brown_turm.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\vez.p3d"); };
	if (strcmp (dObjName,"baracken\\dach1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\dach2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\dach3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\green_baracke01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\green_baracke02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\green_baracke03.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\green_baracke04.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\green_turm.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\vez.p3d"); };
	if (strcmp (dObjName,"baracken\\grey_baracke01.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\grey_baracke02.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\grey_baracke03.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\grey_baracke04.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\grey_turm.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\vez.p3d"); };
	if (strcmp (dObjName,"baracken\\kisten1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\misc\\junkpile.p3d"); };
	if (strcmp (dObjName,"baracken\\posten1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\posten2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\posten3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\stromhaus1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\stromhaus2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\stromhaus3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\hut_old02.p3d"); };
	if (strcmp (dObjName,"baracken\\zaun1.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pletivo_wired.p3d"); };
	if (strcmp (dObjName,"baracken\\zaun2.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pletivo_wired.p3d"); };
	if (strcmp (dObjName,"baracken\\zaun3.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pletivo_wired.p3d"); };
	if (strcmp (dObjName,"baracken\\zaun4.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pletivo_wired.p3d"); };
	if (strcmp (dObjName,"baracken\\zaun5.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pletivo_wired.p3d"); };
	if (strcmp (dObjName,"baracken\\zaun6.p3d") == 0) { ConvertedObjects ++; strcpy (dObjName,"ca\\buildings\\misc\\pletivo_wired.p3d"); };
	/* end of mapfag baracken rape */

	return ConvertedObjects;
}
