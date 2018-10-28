#include "Characters.h"

std::string name, input;
using std::endl;
using std::cout;

void drawCharacter(int character) {
	switch (character) {
	case 0:
		fontSize(10);
		std::cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmhyooo++yhmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdhs+osyyhhhhyo/:/smMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssso+++++////+oyhhs:-+NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdyys+::::-------::/+shdy/:yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNsyy+/--------------:://ohds/oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmshs/:---.....---------::/+ohdooMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMhyho:-----......-....-:+o++//+sdy+MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMhsdo:------.........-/ydmmNNmys++syodNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdod+:---...--......--omNMNNNNNNNdyo+ydhsydmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNod+------.---------/yNNmdhhhhhhhhyso+omNmhyooyhdNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNhsdo-----....--:://+hhydhyyysssssssoooo++yNMNNdhysosshyddmNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNy+shNy:------::/oyhddmNNdsyysoooooooooooooo++oymMMMMNNmmhysoo+ohdmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmhs+ohNMh::---:+yhdmNNNMMMNmyosoo+++++oooooo+++++++oymMMMMMMMNNmmhs++++hmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmh++ohmNMMh:---::/+syhddddmmddho+soo+ssyo--/oyso+++++++++sdNMMMMMMMmhysso+//+:mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmdhs+++ymNMMMNy:---::/+++++++yyhhsyh+/sy/-yhhy:-:/soo++////////+ohNMMNms//+ooosy+/:+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmyy//:/oydNNMMMMNs:---:::/+oo-.`/ydhs:sy///oo/ooo+//+/////////////////+ymNs//ooooooodh+//yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd/:--:ohdNNMMMMMMm+----:::://++::::o+o+++/::::::://///////////////////+++++shy+osoooo+ymds/:oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd/-::+sdNNMMMMMMMNh/------::::::::::::::::::::::::::::::://////:://///////+++++oyyoooooo+NNdy/-yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm/.-:+sddhyhdNMMMMmo:-----::::::::::::::--------::::::::::::://////////////++++/+++ossooo+/mMNmy//NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm-.-/oddo+//-:+hNMh/---:-::::::::::-::------------:::::::::::///+++++/+++///+++++++++++so+++NNNNms:oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm-.:+ymNo+////:-oms:-:::::::--------::----------------:::::::////++oo+++++++++++++++++++++++dMNNNMm+.NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm-.:ohmNm////+o:od+:::::::::---:::::::-----------------::::::////+++ossooooo+++++++++++++++++ymMNNNMh.sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:`:+hmNMd://++/sy:::::::::::::::::///::::----------:::::::////++++oooyyyyyssssoo+++++++++++++++yNMNNN/NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs.:ymNMMm::///so:::::::::::::::///++/:::::::::::::::::://///++++oooosNNNNmmmmddhysoo+++////+++++odNNMsMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy-odNMMMMo-:/o/:::::::::::////+++ooo//::::::::///////////+++oooosssymMMNNNNNNmmmmmdyso+++///+/+++/yNNsMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+-ymMMMMNmo:::::-::::::://++osyyhhdho//////////////++++++ooooosssyhNMMMMNMNNNNNNmNmmdyso+//////+++/od/MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+:dMMMNNNMNo::::::::://+oshdmmNMMMNNms+++++++++++++++ooooossssyyhmMMMMMMMMMNMMNNNNNNNmdy++/////++++++.dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+:mNMNNNNNo-:-::::://+oydmmNNMMMMMNNNNhsoooooooooooooosssssyydmNMMMMMMMMMMMNMMMMNNNNNNmds++/////+++++/+MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+-mMMNNNm+-:::::::/+oydmmNNNNMMNMNNNMNMNmdyyysssssssyyyhdmmNMMMMMMMMMMMMNMMMMMMMNNNNNNNmso++/////+++++/hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNomMMNNm/--:-::::/+ydmmmNNNNNNMNNNNNNNNNNMMMNNNNNNNNNMMMMMMMMMMMMMMMMMMNMMNMNNMMMMNNNNNmyo++/////++++++:oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmyNMNm:--::::::/oymmmNmNNNNNNNNNNNNNMNNMNNNMNNNMMMMMNMNMMMMMMMMMMMMMMMMMMMMMNMMMMMNNNNNyo++/////+++++++:+NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+dMm:---:::::/ohmmNNNNNNMNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmmmNmmNNNMMMMMMMMMMMMMMMNNNNNmyo++////+++++oo++/:+yhydmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN/h/----:::::+ymmNNNNNNNNNNNNNNNNmNNNmmmmdddddmmmddddddddddmmNNMMMMMMMMMMMMMMMMNNNNNNdso+++//++++ooooo++++hmmdyoyhMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo------::::/odmmmNNNNNNNNNNMNNNNmmdddhdyssooooso+++//++oooshmmNMMMNNNMMMMMMMMMNNMMNmhso++++++++oooooooooooyNNdhhsodNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-::----::::/ommmNNNNNNNNNNMMMMMNmmy+/:/---..--::-------::/+shdmmdddmNMMMMMMMMMNMNNmdyo+++//++++oooooossssssydhhhhhy+sNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+::::-::::::/ommmNNNNNNNNNNNNMMNdso--..-``````./....-:://+osyyyyyyyhdNMMMMMMMMMNNNmdys++++/+++ooooossssyysyyhhhhhhhhhy+sNMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs::::::::::::/omNmNNNNMNNmddhyyyhyso::-----::::/+/+++oooooooooooooshdNNMMMMMMMMNNmmdys++////+++oooossssyyyhhhhhhhhhhhhhhy+oNMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd-::::::::::::/ohNNNNMMMNmdhyo+//::////:/::::://////////////////+osydNMMMMMMMMNNmmdhso++//+++++ooooossyyyhhhhhhhhhhhhhhhhhhyohMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm/:::::::::::::/+sdNNNMMMNmhs+/::::-------------:::::::::::::///+oydNMMMMMMNNNNmdhyso+++//+++++oooossyyhyhhhhhhhhhhhhhhhhhhhhhooNMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmhyss/-::::::::::::::/ohmNNMMMNdyo/:-------------------------:::/+oshdNNMMMMMMNNmmdhysoo++///++++++oossyyhhhhhhhhhhhhhhhhhhhhhhhhhhhy+NMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNhhsssyyhy/::::::::::::::::/oydNMMMMNdyo/:::------------------:::/+oshmNNNNNNNNNNNNmmdhysoo+++/////+++osyyyhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh:MMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdysssyhhhhddh/:::::::::::---::::/+shNMNMNNmdhhys+///::-------:://+osyhmmNNNNmmmmmmmmdddhyyso+++//////+osyyyhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhsssmMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdhsssyhhhhhhdmmy:::::::::::-------:::/+odmmNNNmNmmmddhhhhysoossyyyhddmmNNmmmddddddddddhyyssooo++/////+osyyyhhhhhhhhhhhhhhhhhhhhhhhhhhhhddddmmmmmohNMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmyoosyyhhhhhhddmmho:::::::::::::--------:::/+ossysossyyddmmmmmddmmmmdmmdddddhhhhhhhhhhyyysooo+++/////+osyyyhhhhhhhhhhhhhhhhhhhhhhhhhdddmmmmmmmmddddddy+oMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdoossyyhhhhhhddmNyoo::::::::::::::----------::::///::::://+ooosssyhyyyyyyyyyyyyyyyyysssoooo+++/////+osyyyhhhhhhhhhhhhhhhhhhhhhhhhhddmmmmdddddhhhhhhhhhhhho+hMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmyosssyyyhhhhhhhdmmhoos/:::::::::::----------------:::::::::///+++oooossssssssssssoooooo+++++///////+syyyyyhyhhhhhhhhhhhhhhhhhhhhddmmmddhhhhhhhhhhhhhhhhhhhhhhyo+hNMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMNdsooosyyyyhhhhhhhdmNmso:oo::---------------------------------::::////+++++++++++++++++//////////::/+syyyyyyyyyyhhhhhhyhhhhhhhhhddmmmddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhyo+dMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMmhsosssssyyhhhhhhhhdmNNy+o/+o/:--------------------------------------:::::::::::::///////::::::::::+osyyyyyyyyyyyyyyhhhhhyhhhhhdmmmddhhhhyyyyyyyyhhhhhhhhhhhhhhhhhhhhhhhhyyshmMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMdyooossssyyyyhhhhhhhdmNNmh+/o:o/:--------------------------------------------:::::::::::::::::::::/+syyyyyyyyyyyyyyyyyyyyyhhhddmmddhhhhyyyyyyyyyyyyyyyyyyyyyyhhhhhhhhhhhhhhhhhhysodmMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMNNmhsoosssssyyyhhhhhhhhdmNmhs+:/+//+::-------------------------------------------------------------:/osyyyyyyyyyyyyyyyyyyyyhhhddmddhhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhhhhhhhhhhhhhyssdmMMMMMMMM" << endl
			<< "MMMMMMNmmmhdyso+++ossssssyyhhhhhhhhhdmmdyo/:/+/+:+/:----------------------------------------------------------:/+syyyyyyyyyyyyyyyyyyyyhhhdddddhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhhhhhhhhhhhhhhhysyhNMMMMM" << endl
			<< "hyysoosoosooossssssssssyyyhhhhhhhhdmmdy+/:--:+/o://:------------------------------------------------------:/+osyyyyyyyyyyyyyyyyyyyyhhddmddhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhyhhhhhhhhhhhhhhhhhhyosdNMM" << endl
			<< "sssssssssssssssyyssssyyyhhhhhhhhddmdy+/:----/:-o:+/:-------------------------------------------------://:oyyyyyyyyyyyyyyyyyyyyyhhddmddhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhhhhhhhddhhhhhhhyo+hN" << endl;

		break;
	case 1:
		fontSize(10);
		std::cout << "		                                                                                                                    ` ````````                                                                                   \n"
			<< "                                                                                                                       ``./+oossso+++/:.`  `                                                                            \n"
			<< "                                                                                                                 ```.:+oydmmmNmmmNNNNmmdyo/.`                                                                           \n"
			<< "                                                                                                             ``.:+syhdmmmNNmNNNNNmmNNNNNNNmdy+-`                                                                        \n"
			<< "                                                                                                      ```...:+sydmNNNNNNNmmddhysssssssssyhdmmmho/:...```                                                                \n"
			<< "                                                                                         `       ```...-.-oshmmNNNNNNNmdyso++//::::::::///+osssso++++//:-..``                                                           \n"
			<< "                                                                                    ````.`  ```.....--.--/dmmNNNNNmdhso+//::-----------:::://////////+++++//:-..``                                                      \n"
			<< "                                                                               ``..---////-.-----.....---+mNNNNmhys++/:::---------------:::////////////+++++++//:-.```                                                  \n"
			<< "                                                                               ``..---////-.-----.....---+mNNNNmhys++/:::---------------:::////////////+++++++//:-.```                                                  \n"
			<< "                                                                           ``..:/osyyyhdhdys+:--......---:smmhyo+///::----------------:::///+++++///:::////+++++++//:-.``                                               \n"
			<< "                                                                      ``.-:+osyhmmNNNNNNNNNNms:--......-:::os+///:::-------------:::::::://+oosso+//::::://///+++++++++/-.`         ``````                              \n"
			<< "                                                                    ``.:ohdmNNNNNNNNNNmmmddmmy:--......-:::/+/:::::----::--:::-:::::////+++oossyys+//::::::::///++++++++++/-````  ``.-:::-.``                           \n"
			<< "                                                                   `.:sdmNNNmmmmdhyyyssoooooo+:---..----://////::::::::::::////////osss+:--:/oyhhys+/:::--::::::////+++++++++:-.``.-:::/+++/-`                          \n"
			<< "                                                                  `-omNmmmdhyso+++++++++++++//:-------:::/++++///::::///+++++:-.`.:sddddy:.`..-ohhso/::-----:::::://///++++++o++/:::::/oosoo+:.`                        \n"
			<< "                                                                  -smNmhys++//:::::://////++//:----::::///+oo++++///+++oo+:-``` `/ohNNNdyo- `.:+syyo+/:-----::::::::////+++++++oo+o////oooooo+/-`                       \n"
			<< "                                                                  -yNhys+//:::::::::::://++++/:---:::://///++ooooooooosyo.```````/hmmmdyo+::/++ssyso/:-----:::::::::://///+++++ooooo+/+oso++oo+/-`                      \n"
			<< "                                                                  .shyyo//:::////////////+++/:--:::://////////++oooosssoo/:::::::/+oo++++++++ossso/::------::::::::::://///+++++oooosoosyso++++/:.                      \n"
			<< "                                                                  `/yyyo///++++++oo+++++oo+:----::://///////////+++++++++++++++++++++++++ooo+++/::-------------:::::::://///++++oooosssyhhyo+/+/::`                     \n"
			<< "                                                                  `-sys+oo+/:-:oyysss/:/o/-----::://///////////////::::-----::::::::::::::----.-........-----------:::::////++++ooooossshhhso+++/:.                     \n"
			<< "                                                                   .+ysh+..` .smmhohNh:`-------::////+//////////////::---...................................-----------:::///+++oooooossosyyso+++/.`                    \n"
			<< "                                                                   `/osy.``` :hmNNMNmdo..-..---://++++++/////////////::---.......................................------::::///+++ooooosso++oooooo/`                     \n"
			<< "                                                                   .::+o-````.ohhdhys+:..`..--:/++ooooooooooooooooo++/:----..........................--.......----------::::///+++oooooooo++oosss/                      \n"
			<< "                                                                  `.-:/+/:::///+++++:-.``...-/+oossyyyyyyhhhhhhyyyso/:---....................----------------....---------:::///++ooooooooooosyy+`                      \n"
			<< "                                                                  `.--:/+++++oo++/:-...``.-:/ossyyhhhhhhhhhhhysso/:----..................-------:::::::::::----.---.------:::://+++oooossosssys/`                       \n"
			<< "                                                                 `.----:+oooo+/-........---://+oosyyhhhhhhyso+/::----....................-----:::::///+++//::-------------::::///+++ooosssssyhs-`` ````                 \n"
			<< "                                                                `..---------............----::/++ossssysso+//::---........................--------::::::::///:-------------:::///+++ooossssyyhhhys/-`                   \n"
			<< "                                                             ``.----...................----::/++ooooo++/::----............................------------::/:---------------:::////++ooosssyyyhhhdNmmh+-``                 \n"
			<< "                                                               `.-----.....................---::///+++//::---......................................-.---:::----...---------:::://+++ooossyyyyyhhhdddmdds/.`  `          \n"
			<< "                                                              ``------.......................--:::///:::----........................................--:::---..........-----:::///+++oosssyyyyyhhhhdddddhdy/-.```        \n"
			<< "                                                              `.------......-----............-----:::-----........................................--:::--.............-----::://++++oosssyyyyyyhhhdmNNmNmddhyo:.`       \n"
			<< "                                                             `.-------------------...........-----------......................................---:::---..............-----:::://+++ooosssyyyyyyhhhdddhhdmNmhhyys+.``    \n"
			<< "                                                             `.-------------::::-----...........------......................................--://:--.................-----:::///+++oosssyyyyyyyhhhdhhhhdhdNNmmddhy-     \n"
			<< "                                                             `-:----------::://::----...........-.......................................--:////:--.............--...-----:::://+++oosssyyyyyyyhhhdmNmmmhhddddddmmm+     \n"
			<< "                                                             `-::---------::////::-----.............................................--::////:--..............-----------::::///+++oossyyyyyyyhhhddmmNmNmmdhhyyyshmmhyo/-\n"
			<< "                                                             `-::---------:::::::-------......................................---::/++//:----...............-----------::::://++ooossyyyyyyhhhhhyyhhhdNNNmdhyyyyymMNNNNN\n"
			<< "                                                            .::::-------------::::-------....................-......-..-----::/++++/:----..................-----------:::::///++oossyyyyyyhhhyyssyyyhyhmNNmmmmdhhNMNMNNN\n"
			<< "                                                      ` ` ./syo::::-------------:::::::----------------------------:::://+++++/::----.....................-----------:::::///++oosssyyyyhhhyyssssyyyhyyyhhdmmmmmmNNNNNNN\n"
			<< "                                                       ``-+ssyy+:::----------------:://////:::::::::::::::////+++ooooo++//::---........................------------::::::///++oossyyyyhhdmmdhyyyyyyyyysssssshmNNNMNMNNNN\n"
			<< "                                                       `:oosyhdy/:::----------.--------:://++++++oooooooooooooo++//:::-------........................-----------:::::::///+++ossyyyyhddmmmmmmmdhyyyyssssssssymNNMMNNNNNN\n"
			<< "                                                      `/sydmmmNmy//:::-------..--...---------::::::::::::::::::::------............................------------:::::::///++oossyyyhyyhdmmmmNmNNNdyysosyysssydmmmNMMNNNNN\n"
			<< "                                                     `+hdmmmmmmmmh+//:::-----.----......--------------------------.............................------------:::::::::///+++osssyyyysssssydmmNNNNmNdhyssossshhhdddNMNMNNNN\n"
			<< "                                                   `.odmmmdyyyssshhs//::::-----------.............----..-----.--...........................--------------:::::::::///+++oosyyysssoyssssssydmNNNmmmNmmyosyhhhddddmMNNNNNN\n"
			<< "                                         ```.-:/+osyyhdmhsoooossssshhs+//:::---------...--...............--...........................---------------::::::::::////++oosyhyooossssyyssssssshmmmmmmmmmNhyyshddhhmNNNNNNNN\n"
			<< "                            ```..--:/+osyhddmmmNNNNdmmmhoooooooossssyyyso+/::::----------........................................------------------::::::::://////+osydmmmdysossyyyyyysssssosydmmmmNmNysyhmNNmmNNNNNNNNN\n"
			<< "                   ``.-/+osyhdddmmmNNNNNNNNNNNNNNNNmdmdoooooooooooosshdmmhs+//::-------------................................------------------::::::::://////++oshdmmmmmmmmdsosyyysssoossssoosydmmNNNdyhmNNNNNNNNNNNNNN\n"
			<< "                 .oyhdmmNNNNNNNNNNNNNNNNNNNNNNNNNNNdhss++++++o+++sydmmmmmNmdys+//::::-----------..........................------------------::::::::://///++ooosooshmmmmmmmmmmysyysyssooooooo+oshNNNNmNdmNNNNNNNNNNNNNNN\n"
			<< "                 /mmNmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNh+oo+o++++++oydmmmmmmmmdhhyysso//::::--------------.............----.---------------::::::::://///++oosssso+++ooshmmmmmmmNNmysysooosoo+++ooshmNmmNNmddddmNNNNNNNNNNNN\n"
			<< "                 `:oshmmNNNNNNNNNNNNNNNNNNNNNNNNNNNy/+++oo++++oymmmmmmmmhyssssoossssoo+/:::::---------------------------------------::::::::///++osssosooooooo++ooosshmNNmmNNNmmyssosoooo+oosyhyhmNNNmdyyyyhmNNNMNNNNNNN\n"
			<< "     ```..-::/++ooyyyhdNNNNNNNNNNNNNNNNNNmmmNNNNNNNm+//o+/++++ymmmmmmmmy+++oooooooosoossyyyo++//::-------------------------------:::::://+osyhhdddmdyooooooooooo++ossshmNNmmmNmmmdsooo+oosyyyyssymNNmdysyyyhmNNNNNNNNNNN\n"
			<< "-:/+osyhddmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNd+/+++ooshmmmmmmmdy/o+++oooooooooosdmNmmmmddyo+++//::::---------------::::://++++ooosshmmmmmmmmmdsoooooosoooooossyshmmmmmmmmmmmso+syhhyysysyhmNdhyysssymNNNNNNNNNNNN\n"
			<< "mmmmmmmmmmmNNNNNNNNNNNNNNNNNNNNNNNMMMMNNNNNNNNNNNNNNNmo/+/ohdmmmmmmmmy+o+++oosoooooooydmmmmmmmmhooooooossoooo++osyyyyyyyhyosoo+osoooooooooydmmmmmmNmmdysooooosooo+osssoshmmmmmmmmmmdssyyyyysssydmmdyssyysydNNNNNNNNNNNNN\n";
		break;
	case 2:
		fontSize(7);
		std::cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmmdhyyyyysssssyyhMMMMMMMMMMMMMMMMMMmyyssssssssssssssyymMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmhhhhyso++////::::::/+hhhhyyhMMMMmhhhhhhs++:::::::--::::://shhhhNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNddddo::::::///::::::::::::::----/dddms::::::///:::::::-----:::::::::hdddmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNd::---:::::::::::::::::::::::-----:::::::::::::::::::::::------------::::/NNNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNd::---:::::::::::::::::::::::-----:::::::::::::::::::::::------------::::/NNNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm++//:--------------::::::::::::::-----------:::///////////::::::::::::::::::::----:::::++dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMho+----.....---------::::::::::::::::::::::::--:::////////////::::::::::::::::::::::::::::::+oyMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMyy/--.........-------::::::://///::::::::::::::::::://///++////:::::::::::::::::::::::::::::::--/hhMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdh--............-----::::://///////:::::::::::://:::::////+++////::::::::::::::---:::::::::::::::::::ddddmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNs``............-------:://////////::::::::://///////:::///++++////::::::::::::::::::::::::::::::::::::::::+NNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/:............-------::::///::::::::::::-::::::////////////++++///:::::::::::::::::://////////:::::::::----://mNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNoo:-..........---------:::::::::::::::::::::::::::::////////////++///:::::::::::::::::::///////////:::::::---------yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh//--............-------:::----::::://////////////::::::://///////////////:::::::///////////////////////:::::::-----..sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs``..............--------------:://///++++++++++++++////////////+++///////:::://///////+++++++++++++++/////::::::-----oddMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmdo--............--------------::///++++++oooooooooooo+++/////////+++//////::://///++++++++++oooo+++++++/////:::::::----/+oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNN/--..............------------::::///+++++++ooooooosssssso++/////+++++////////////+++++++++oooooooooooooo+++////:::::::----/NNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm::--..............-------------:::://///++++ooosssossssssssss+///++++++++///////+++++++++++++++++++++ooooooo+++//:::::::::::/yyNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm--..............--------------:::::++ossyyyyyyyyyyyysssssssyy++++++++++++///+++++++++++//////////////+++ooooooo////:::::::::://mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMho+................------------::://ooyyyhhhhhhhhhyyyyyyyyyssyyysooooooooo++++oooooooossssooooooo+++++/////++ooooo++///:::::::::::mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMhy+................------------:::/+ooyyhhhhhhhhhhhhyyyyyyyssssssssssssssooooooosssyyyyyyyyyyyyyysssssoooo+++//+++oooo///:::::::::::mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdd:----..............----------::::++syyhhhhhhhhhhhhyyyysssssooooooooooooooooooosssyyyyyyyyyyyyyyyyyyyyyyysssoo++//+++oo++//::::::::::mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNd----...............-----------::://osyhhhhhhhhhyyyysssoooo++++++///////////+++++ooooooosssssssyyyyyyyyyyyyyyyysoo++//+oooo+//:::::::::mNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/ `----...............-----.---::::/++yyhhhyyyyyssssooooo+++////////::::::::::///////++++++++oooooosssssssyyyyyyyyyyoo+//++oo+//::----::://yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM//-..--.....................---::::://ssyyyyysssssoooo+++///////::::::::::::::--::://///////++++++++oooooosssssssyyyyyss+++//oo+++:::::--:://yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmss-------.....--........--....--:::::/++yyyyyssssooo++++///:::::::::::::::::::::---::::::///++++++oooooooooooosssssyyyyyssoo+//ooo++:::::--:::/yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmdy::----.....-----.......---..---:::://+osyyssssooo+++////::::::::--:::::::::::///----::::://+++ooooossssssssssssssssssyyyyysso//+ooo+//:::--::::yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMddo+/----.....-----.........--...--::::://ossssoooo+++///:::::::--:::::::::////////+/::---:::://+oossssssssssssssssssssssssssyysso//++oo+//:::----::odmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM-------.....-------.......--...--:::::::++ossoo+++//::::::::::::::///////+++++oooo+++::---::::///++sssssssssssssssssssssssssssssss++++ooo///::::--:::/+MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM..-----.....--................---::::///oooso++///::::::://///++++ooooooooooooooooo++::---::::///++oooooooooooooooooooooooooosssssoo+++oo++//:::----::/MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/.-::----......-...........----..---::::::/++ooooo++++++++++++ooooooosssssssssooooooooo+/:-----::::///++++oooooooooooooo++++++++++++ooooo+++++++///::::----:MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN//-..-----....---.........------------::::::/ooosooooooooooooooooooossssssssssssooooo++//:--..---::::///++++oooooooooo++++++++++++++++++++++++++++///::::----:ssmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmys..-----.....----.....---.-----------:::::://+ssssooooooooooooooooosssssssssssooo+++++//::-....----::::////oosssssooo++++++++++++++++++ooo+++++++++/////:::---:::dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy::-------..-------...----------------:::::::++ossssooo+++++++++oooooooooossssooooo++//:::---....-----::::///sssyyssoooo+++++++++++++++++ooooo+++++++/////:::::::::hmNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNms::---------------------------------::::::://ossyysso++//////////++++++ooooossssooo//:::-----....-----::::///yyyyyyysoo++++++++++++++++++ooossoo+++++++/////::::://+ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNo//::-----------------------------::::::://::++syyyyoo++////////////+++++ooooosssssoo//:::-----....-----::::://yyhhhyyoo+///////+++++++++++oossssso++++++//////:::://++yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm++:::------------------------------:::::///:///ssyhyssoo+++oooo++/::///////++ossyyyysoo//:::----.......-----:::::sshmdhh+/:....-------::///ooossyysssoo////++//////::///+yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMho+:::----------------------------::::::://////+ooyyhhhyyoosyyhhhhs++..-------://oosssss++/:::---............---:::://yhhhh//-...........---::oosyyyyyysss++///++///////:://+ssMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMhy+::------------------------------::::::://////+osshhhhhyyoosyhdddds+/.......--::/++ssooo//::---------..........---::::+ooss+/:....--------:://oosyyyyyyyyyss+///////////:://///yysoyMMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNhh/::----------------------------:::::-:::///:///+ooyyyyyyyssooooshhyys+/.....----://++oo++/::------------.........-------::/++++/:::::::::////+oooosssyysssssss+++//////////////////-./MMMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmmmmh..-----------------------------::::----:////::/+++oo+++++++oo+++++++++++/:::::////+++++//:::--------------.........-------::://+++ooooooooooooooooooooooo+++++oooo+//////////////////++sNNMMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNN..-::-------:::::::------------::::::-----::://///////:::::::::::::://///////////////////:::-------:::::::-------.......-------::////////++oooooooooo+++++++//////////////////////////////+++++NMMMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd++------------:::::::::-----:::::::::-----:::///////::---------------------------------------------:::::-:::-------.......-------::://///////////////////////////////::////////////++/////////+++mmNMMMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMyo+::::::------------------------::--------:::://///:::----.............................----------------::------------...---------::--::://///:::::::::::::::::::::::::::::::::::///////+++++///////ossshMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMo:::::::::::::--------------------------::::://///::----....................................-----------------::-------..----------::---:://///::::::::::::::::::::::::::::::::::://///////+++++/////++++sMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMdd+:::::::::::::------------:::------::::::::///////::--..........................------................---------::-----------------:::::--/////:::::::::::::::::::::::::::::::::--://///////+++++////++++sMMMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMN::::::::::::::::---::::::----:------:---:://+++++/::---....................--------------....................------:::--------------:::::::///:::::::::::::::::::::::::::::::::::--:://////////+++++++++++sNNMMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMN:::::::----:::--------:--------::::::///++oo+++:::----.................------:::::---..........................-------::::----------::::://///::::::::::::::::::::::::::::::::-----::/++//++/////////////++++NMMMMMMMMMMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMh//:::::::--:::::---::::::///++////////////++///::-------..............-----:::////::---............................-------:::::-------:::::////:::::::::::::::::::::::::::::::::-----::/++//+++++////////////+++++++oossyhhhhNMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMMMMso/:::::::::::::::::::::::/+ossyyoo+////:::::::::--------..............-----:://+++//----.............................---------::::::::--:::::////::::::::::::::::::::::::::::::::::-----:://////+++++/////////////////++oosyyyyNMMMM " << endl
			<< "MMMMMMMMMMMMMMMMMMNyy/::::::::::::::::::::::://oosyyyyso+//::---------------..............------:::+++oooo::---............................----------::::::::::::////::::::::::::::::::://:::::::::::::::------::::::///////////////////////++oosssyyNMMMM " << endl
			<< "MMMMMMMMMMMMMMMMmhy:::::::::::::::::::::::///++ooooossoo+::------------------...............----:::+++oossoo/----............................----------::::::::::::::::::::::::::::::://////:::::::::::::-------------::://///////////////////+oshhddNMMMM " << endl
			<< "MMMMMMMMMMMMMMMMy--:::::::::::::::::::::///++++/////++++/::-------------------..............-----::////+sshho-------..........................---------::::::::::::::::::::::::::::://///////::::::::::::-------.......--:::::::::::::::::::::/+yMMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMMMMy:::::::::::::::::::::::+++++////////////::-------------------..............-----::::///::yho:-...---------..............--..----------:::::::::::::::::::::::::::://////////::::::::::::::::---......```...----:::-----..````  +MMMMMMMMM " << endl
			<< "MMMMMMMMMMMMMM+::::::::::::::::::::::/++oo+//::///////:::---------------------................-----:::::--+++o+`````....-------------------------------:::::::::::::::::::::::::://+++++/////::::::::::::::::-----....````````................``.....dMMMM " << endl
			<< "MMMMMMM+//////:--:::::::::::::::://///++++/::::///////:::-----------------------..............-------:::--::/++::.``````.....------------::::::::::::::::::::::::://///::::::://+ss+++++/////::::::::::::::::-----....``````````.................````::::: " << endl
			<< "ooooooo-.......-----------::::://///++++///:::://///:::::------------------------..............-------------::/++:::--``........`......-----------::::::::::::///////:::::///++ooss+///////::::::::::::::::::-----....````````````.................``````` " << endl
			<< "...................-------:::://///+++/////::::::://:::::----.....-----------------.............---------------//+++oo::+++//::----------:::::::::::/++///////++++++++++++oosysss++///////:::::::::::::::::---.---....````````  ``.................```````" << endl
			<< ".......-------------------:::://///+++//::::::::::::::::-----.........---------------...........-------------.---//oyyyydmdddhhsooooooo++oosssooooosshhsssssyyhhyyyyyyhhhhmmddyoo///////:::::::::::::::::::---.--......``..```    `................```````" << endl
			<< ".......-------:::---------:::::////++///::::::::::-:::::-----.....```....------------..---.......-----------.....--://yydmmNNNNNmmmmNNNmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNddso+/////////:::::::::::::::::--..---.....````..```    ```.................````" << endl
			<< ".......-------:::::::::::::::::::///////:::::-----------------......`````.....--------------.....-----------.......---::++shhmmmNNNNNNNNNmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNdhyoo////////////:::::::::::::::--..----............`````   ``...................``" << endl
			<< ".......-------::::://///////////////:::::/:---------------------....``````````....---------------------------........-----://oosyyddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdhhsso++//////////////::::::::::::::---------............```````  `....................." << endl
			<< ".....---------:::::::////////////////:--::::----------------------.....```````````........-----------------------.......-----:://+++sssyyyyhhhhhhhdddddddhhhhhyysssoo++///////////////////::::://:::----------.........--..```````` ```..................." << endl
			<< ".....-----------::::::://////++++++++/--:::::-----------------------.....``````````````..........------------------.......--------::::///+++++oooooosssooooooo+++////////////////////////////////:::---------.........---..```````` ```..................." << endl
			<< ".......------------::::://////++++++++::--:::::---....--------..-------.....``````````````````........--------------......----------::::::::::::::::://////////////////////////////////////////:::----:::::--.......-----..```````` ```..................." << endl
			<< ".....----------------::::::://///+++++//-.---::---......-------.....-----.......````````````  ```````........--------------------------::::::::::://////////////////////////////////////:::::::-----:://:::---...---:::--`````````` ```..................." << endl
			<< "...---------------------::::::://///////---.-::::---.......-----.......-------.......````````````````````````.........---------------------::::::::://///////////::::::--------------...............--:::---------:::/:--.......``` ```..................." << endl
			<< "....----------------------::::::::::::::---.---::::---.......-----........-----------.......`````````     ``````````````.......-------------:::::::::::-----.........`````````````````````````````````...``.......:::::--...-...``` ```..................." << endl
			<< ".....-----------------------------------::---..-::::---.........-----.........------------.....`````````````     ````````````````........-------.......````````````````````````    `````            ``````````````..---..-----..``` ```..................." << endl
			<< ".....--------------------------....----------..---::::---.........-----...........------------.....``````````````````````````````````````.....````````````````````````````````````````````   ```````````     ````````````..---..``` ```..................." << endl
			<< ".........---------------.........----------:---..-::::-----............--..............------------.........```````````````````````````````````````````````````````````````````````````````````````````````````````````````.-...`````....................." << endl;
		break;
	case 3:
		fontSize(10);
		std::cout << "                                                     ``.-:://+++//::-..```                                                                                                       " << endl
			<< "                                            `.-:/oyhhdmmddmmmmmmddhyysoo+:-.`              `````                                                                                       " << endl
			<< "                                        `.-+sssooo+ooo+////+shddhdmNNmmmmmdhyo:.`   `-:+osyyyyyysso+/:-.`                                                                              " << endl
			<< "                                      .-+yhy+:-:/+o++//+osyysys/-:/oo+++++++oyy+-...:sdmmmmmmdddmmmmmdhyo+/-.`                                                                         " << endl
			<< "                                   `-/oyyo/.-:++/:--.-::/+/::-----------------:::----:///////:::://+oyhdhyooso+:.                                                                      " << endl
			<< "                               `-/++oo/:.-//--.-------:----------------------------------------:::::::--...-:+o+:/os/.                                                                 " << endl
			<< "                             `.-://+/-..-::---------------------------------------------........-----:::::-...:+o+:/sy/.                                                               " << endl
			<< "                           `.-::-//:..--:-----------------------------------------..............---------::::--.-+o+::sy/`                                                             " << endl
			<< "                          `-::-://-.----------------------------------------...```....--------:-------::::::::::--:+o/./yo-`                                                           " << endl
			<< "                          .-:-://:----------------------------------------..`...-----------..---...------:::::////::/++--+s:`                                                          " << endl
			<< "                          `------------------------------------------..-....--::----....-::///////::--.....---::-::::://:./o:`                                                         " << endl
			<< "                          `----------------------------------------:-....--::---...-/osyyhdddddddddhhyso/:-....--.-:::::/:.-/:`                                                        " << endl
			<< "                        `.--------------------------------------:---....----....:oyhdmmmmddddddddmmmmmmmdhyo/:-....-::::::-.-/:`                                                       " << endl
			<< "                       .-------------------------------------::---....----.`.-oydmddhhhyyyyyyhhhhhhdddmmmmmdhyo/:-...-----::-:/-`                                                      " << endl
			<< "                     `.------------------------------------::::--....---...:ohddhhyysssssssssssssssyyyhhddmmmmdyo+:-...--::--:--.                                                      " << endl
			<< "                    `.------------------------------------:::--..``---...:ohhhyysssoooooo++++o++ooooooossyyhddmmhso+:-...----::-.                                                      " << endl
			<< "                  `.-------------------------------------:::-..```.--.`.+hdhyysooooo++++++++++////////++++oosyhdmdys+/--...--::::.`                                                    " << endl
			<< "                  `.-----------------------------------:::---.` `....`-+yhyysoo+++++++//////:::::::::://////+++oyhdhso/:-...-::::-.`                                                   " << endl
			<< "                ``------------------------------------:::----```.....-ohhysoo++++++////:::::::::::::::::::::////+oshys+/:-.`.-::::-.`                                                  " << endl
			<< "                `.------------------------------------::----.  `...`-ohhyoo+++++////::::::----------------:::::////oyys+/:-.`.-:::--.`                                                 " << endl
			<< "               `.-----------------------------------:::---..` `...`./yhyso++++////::::---------------------:::::::/+osso//:-...-:::--.`                                                " << endl
			<< "              `.---------------------------::::--``-+yho:-.`  `..``:ydyso++++///:::::----------------------::::::////oso+/::.`.-:::---`                                                " << endl
			<< "              `.--------------::::/++ooossyhhhho- `:oddo:-`  `...`.ohdyso++++//::::------------------------:::::::////oo+///-...-::---.`                                               " << endl
			<< "             ``..--:://+ossyyhddddmmmmmmmmmmmmmy: `:ydy/-.`  `...`.oyyso+/////::::-----------------::---:::::::::::///+oo++/:...-:::--.`                                               " << endl
			<< "            `.:/osyhhddddmmmmmmmmmmmmmdddmmdmmms-`./hdo-.````....`-oso++/:::--..../oo++/////::::---------:::::::::://++ooo+/:.``.-::-..`                                               " << endl
			<< "           `:/osyhhddddddmmmmmmmmmmmddmmmmmmmmmy/-:sdy/``````.--..-oso+//::--.`` -sdhsooshdhhhhyyssooo+/:------:::://++ooo+/:.``.://:-..`                                              " << endl
			<< "           .:/+oyhdddddmmmmmmmmmmmmmmmmdddddmmms:.:sds:```..`.--.`.+so//:::-..`` -shhs:-+hddddddddyyyyhh+.``````...--:/oo+::-....:/+/:-.`                                              " << endl
			<< "          `-/+oshdddddmmmmmmmmmmmddddddddddddmd+` -ody/-.-....--.`./ss+/::-...`  .ohhyssyhdddddddhhyhhdh/`  ``````...-::/:---.`.-:/++yhs/.                                             " << endl
			<< "           -/+oyhhddddmddmmmmmmmmmddmmmmdmmmmmd+` -odho/::----::-..:oso+/::-..`` `:ymhyssyhddddhysoshdmy-  ```````...--:::--..`.-/++odmdho:`                                           " << endl
			<< " .: / +syhdddmmmmmmmmmmmmmmmmmmmmmmmNNd / ``:oddy + / :-- - ://:.`.+sso+/:-..``` `:hmdyssssysoosssyddy:` ```````....--:::--....-//+hmmmddo-`                                           " << endl
			<< "          `-/oshhhhhhyyssyyyssssssssssssssssyys:.-/sdmho+:---:+/:-..-+ss+/:-..````  -+hddhyyysssyhddh+.`````````...---::::-.``.-:/:+hddddddo.                                          " << endl
			<< "          `:syo++/::::::::::::::::::::::::::////://sdmho/:-..:/++:-.`:oso/:--..````  `./oyhhhhhyyyo/.` ````````...---://:--.`..:/::oddhyyyy+.                                          " << endl
			<< "           ./:-----------------------------:-::::/+shhs/:---..:+o+/-..:oso/---..````    ``------..`` `````````...-.-/++/:-.`.-:/::odmmdhyo+:`                                          " << endl
			<< "            ..---------------------------------::::/+oo/-----..-+oo/-..:oo+:---..`````````     `  ``````````.....--+so/:-.`.-:/:-/hmmmmmdhs:`                                          " << endl
			<< "            `.----------------------------------:::::///:-----..-/oo+:..-/+/:--...`````````````````````````.....-:oys+:-.`.-:/:.-+yhhdddmmds-                                          " << endl
			<< "            ..-----------------------------------:::::::::-----...:+so/-..-//:---..```````````````````````.....-/sys/-....-::-.-/oooooooshdo.                                          " << endl
			<< "           `.-------------------------------------::::::/::-----..`.:+oo/-..-:::-...`````````````````........-:+ss+:....--:-..-/++++++//::-`                                           " << endl
			<< "           `.---------------------------------------::::::::------.`.-:+o+/-..--:---...```````````........-:/oss+-....--::-..-/+++++////:.`                                            " << endl
			<< "           `.---------------------------------------:::::::::::------.`.:+++/:-..-----................--:/+sso/-....--::-..-:/++++++////:-`                                            " << endl
			<< "           `---------------------------------------::::::::://:::::::-...--:/++/:-..---------------:://+oo+/:-...------..-:/+++++++/////:-`                                            " << endl
			<< "           .--------------------------------------::::::::::::///::------....-:////::-----------:::://::--...-------....-:/+++++++/++////:.`                                           " << endl
			<< "          `.------------------------------------------::::::::::///:::------.....-:::::::------------..---------....-://///++++//+//+////:-`                                           " << endl
			<< "          `.------------------------------------------::::::::::::////::::::---...``..------------:-------.......-//+++++++//////////////:-`                                           " << endl
			<< "          `..---------------------------------------:--:::-::::::::://++++///:::::--.....`...............`..--:/+oo++++++++///////////////:.                                           " << endl
			<< "          `.--------------------------------------------:-:::::::::::://+oossssoo+++/::::-----......---://++ooooo+++++++/++///////////////:.                                           " << endl
			<< "          `.-------------------------------------------:----::::::::::::///+osyyyhhhyyyyyyo/-:+ssssssssssssoooo++++++++/////++/+++++//////:.                      `-:////-`            " << endl
			<< "          `.-------------------------------------------::---:::::::::::::::///+oosyyyhyyhhysosyyyssssssooooo+++++++++++/////+++++++///////:.                     -sdmmdmmms-           " << endl
			<< "          `.-----------------------------------------------------::::::::::::////+oosssssssysssssssoooooooo+++++++++++++////++++++++//////:.                   `-smNmmddmNNy-          " << endl
			<< "          `.------------------------------------------------------:::::::::::://///++ooossssoosssooooooo+++++++++++++/++///++++++++///////:.                  `/hmmmmddddmmdy++o+/.    " << endl
			<< "          `.------------------------------------------------------:::::::::::::::////++++ooooooooooooo++++++++++//////++++///////////////+/.                 -smNmmmmmmddmmmmmmdmmd+.  " << endl
			<< "          `.------------------------------------------:::-----------:::---:::::::::::////+++++++++++++++++++++++++++++++++//++++++///////++-`               :ymmmdddddmmmmmmddddmmNd+` " << endl
			<< "          `.-----------------------------------------------------------:----::::::::::////////+++++++++++++++////////++++////++++////////+oo/`             .smmmddddddddmmmmmddddmmd+` " << endl
			<< "          `------------------------------------:----:-----::-----------:::::--::::::::::::://///////++//+++////++++///+++////////////////+ymd/            `/dmmmmmmmdddddmmmmmddmmmy:  " << endl
			<< "          .------------------:::-----------------:::::----:-----------------------::::::::::///////////////+oo+++///////+++//////////////ohmd+            .ommmmmmmmddddddmmdddmmds-`  " << endl
			<< "         `.-------------:::----------------------:::::/+//:::::::::::::::::::::::::::::://://::::::://:::/+ydho//////////++/////////////+sdmd+            .smmmdmmdddmmddddmmmmmy/`    " << endl
			<< "         `.------------:-----------------------------/sddyo/:::---:::::::--:::--------:::.......`.`./ssooyhmmho//////////++/////////++//ohmmdo`           -yNmmdddmmmmmmdddmmmds.      " << endl
			<< "          .-------::::-------------------------------:omNmdysoo++///+oyyo-.....`...--+hhs/:-:::://oydmmmmmmmmy+/////////////////////++/+sdmdho.          .ommmmdmmmmmmdmmmmmds:`       " << endl
			<< "         `.--:::::////:----::::---:-------------------/hNNmmmmmmmmmmmmNNmhhyyyyyyhhhdmNmmmmddddmmmmmmmmmmmmmdo://///////////////////+/+ohddhhs.         `/dNmmmmmmmdddddmmhs:`         " << endl
			<< "         .---::://++++////::///::::-----------------:--/hmNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNdo::://///////////////////+oyddhhho`        `+dmmmmmddddddmmmds-`           " << endl
			<< "        `------:////+//+++++++//::----------------------/ymNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdo:::::::://///////////////+shmhyhh+`       `+dmmmmmmmdddddmmds.             " << endl
			<< "        `.------:/::::///+++++++//::::--:::-----------:--:ohmNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmmmNho:-:::::::::/::://////////+ohdhyyyy/        `+dNmmmmmddddddmmdo.             " << endl
			<< "        ./oo+/::::::::--::+++++++++//:::::::---------------:+ydmNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdo/--:::::::::::::://////////oydhysyys/`        `-ohmmmmmmmmdmmNms.             " << endl
			<< "       `/hh+:-::--:::::::::///+oo+++////:---::::::------------:/shmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmh+:-----:::::::::::::::://////+sddhyyyys/.         ./shyyhhhhddmmmdo.             " << endl
			<< "       .sdy:----------:::://////+++++/++/::-:::::::::------------:/+syhhddddddmmmmmmmdddddddddddhhs+/:---::--:::::::::::::::://///+shhyyyyyso/.`      `:osysoo+++oo+/::-.              " << endl
			<< "       `/so:-----------:::::://///////+++//::--::::::----------------::/++ossyyhhhhhhhyyyyssso++/:----------:::::::::::::::://///+shhsosyyyo+/-`    `./ssssoo+++++/-`                  " << endl
			<< "      `.----------------:::::::://:::///+++//::::::::::::------------------:::::::////:::::::-------------::::::::::::::::::///++syysosyyyso++/.   `:oyssoo+++++/:.`                   " << endl
			<< "    `..--------------::::::::::::::://:://++/////::--::::::--:------------------------------------:---:::::::::::::::::::///++osyhysshhhyyo++++:.`:+sysooo+++++/:.`                    " << endl;
		break;
	case 4:
		fontSize(10);
		std::cout << "                                                        `.`                     " << endl
			<< "                                      `.`              ..`                            " << endl
			<< "                                        .:`           -.    ``                        " << endl
			<< "                                         ./-`       `:`  `..`` ```                    " << endl
			<< "                                  ``  `   `//`     `:.`.-.``.-:-.                     " << endl
			<< "                                  ``...-`  `//`    :-.:``.-//:`                       " << endl
			<< "                                     `.-:-  `+/`  -/:-`.:+/-`                         " << endl
			<< "                                       `-/:.`:+- `+/-`:++-`                           " << endl
			<< "                                         `++--++ -s:.+s+`                             " << endl
			<< "                                           ++/+o.s+-yh/                               " << endl
			<< "                                            ooos:d-ym/                                " << endl
			<< "                                            `shhosom/                                 " << endl
			<< "                                             :mmd+mo                                  " << endl
			<< "                                             `hNmdh`                                  " << endl
			<< "                                              oNNN:                                   " << endl
			<< "                                              :NNh`                                   " << endl
			<< "                                    `````.....:ss+.`````                              " << endl
			<< "                               ``...---------------------..``                         " << endl
			<< "                           ``..---....................--------..`                     " << endl
			<< "                         `..-............................-----:::-.`                  " << endl
			<< "                       `.-................................-----:::::-`                " << endl
			<< "                     `......................................-----:::::-`              " << endl
			<< "                   `.-.......................................----:::::/:.             " << endl
			<< "                  .----.......................................----::::://-`           " << endl
			<< "                 .--....``.....................................---:::::///:`          " << endl
			<< "                ..`````.........----:-------................--------:::////:`         " << endl
			<< "             `````.-:/++ooo++//::--://::::-----.```..--:::::--::::::-::////:-         " << endl
			<< "           ````.-/+osso+++++oooo++/:-:////::.```-:/++oooooooo+///:://::://:::.        " << endl
			<< "          ```.-/oss+///:::::::://+++/::://.``.:/+ssso++++++++ooo++//://://:::-`       " << endl
			<< "         ```-:+ys+//:-..````````.-:/+//::.`-:/oss++//::------::/+o++/::///::::.       " << endl
			<< "        `.`-/+yo/::-```````````````.-://:::/+ss+//:-..````````...-/++/:::+/:::-`      " << endl
			<< "        ..-:/ys/:-.````````..-.`````..://///ss+::-.``````````````..-///:-/+/:::`      " << endl
			<< "        --:/+h+:-.```````-+ossoo/.``.`-:///+y+::.````.-:::.````````..://:-oh+o:.      " << endl
			<< "        :::/oy+:.```````:oo++yysss.``..:///ss/:.```-+++ossoo-``````..-///-/hoso-      " << endl
			<< "        :///+y+:.```````+oohdddysy:``..////so/-.``.ooo+shysss``````...///-+yosyo:     " << endl
			<< "        :+///ss/.```````:sssyyo+o+.`..-////os+-.``-sooyhdhsss.`````..-///:ohsssy+     " << endl
			<< "        -/+///s+-.```````-+ooo++:.....//++//so:.```/ssssoooo:`````...-/+//yd+sso:     " << endl
			<< "         ./++//+/-.````````.........-/++o++/+o/-.```-/+++/:.`````...-/++/+ddoshy:     " << endl
			<< "          `:+++///-.....```........:/+oo++o+//+/-..```````````.....:/++//shs+++-`     " << endl
			<< "           .-/+++//:--.........--/+oo++oyo++o+///-.....``........-/+o+//+++++/:`      " << endl
			<< "           .---:/++++//::::::/++oo+++oyhhhy+/+o++/:--........--:/+oo//++++++//:       " << endl
			<< "           ..---::://++++++++++//+osyyyyyyyys+/++o+++///////+++oo+/++o++++++//-       " << endl
			<< "          `..---:://///++++++oosssssssssssssssso+///++++++++++++++oo++++++++//-       " << endl
			<< "          `..----::///++oooosssoooooooooooooooooooooo++++++ooooooo++++++++++//-       " << endl
			<< "          `...----:::///+++++ooooooo+++++++/////+++oooooooooooooo++++++++++///.       " << endl
			<< "          `...------::://///++++++++/////:::::::///+++oooooooooo+++++++++++///.       " << endl
			<< "          ....--------::::::://///:::::::----::::::///+++++++++++++++++++++///`       " << endl
			<< "          ....------------:::::::::---------------::::////++++++++++++++++////`       " << endl
			<< "          ....---------------------------------------:::://////++++++++++++///`       " << endl
			<< "         `.....--.-------------------------------------:::::///////++++++++///        " << endl
			<< "         `.....------------------------------------------:::::://////++++++//:        " << endl
			<< "         `....--------.----------------------------------:::::::://///+++++//:        " << endl
			<< "         .....-------...........-------------------------:::::::::////+++++//:        " << endl
			<< "         .....----..----............--------------------::::::::::////+++++//-        " << endl
			<< "         .....-----.----................---------------::::::::::::///+++++//-        " << endl
			<< "        `.......---------...............--------------:::::::::::::///+++++//-        " << endl
			<< "        `......----------...............-------------::::::::::::::///+++++//.        " << endl
			<< "        `.....-----.----------.........-------------:::::::::::::::///+++++//.        " << endl
			<< "        `.....----......-------.........------------:::::::::::::::////++++//.        " << endl
			<< "        ........--........--------.....-----------::://::::::::::::////++++//.        " << endl
			<< "        ......----............-----------------:::/::::::::::::::::////++++//.        " << endl
			<< "        ......----...............---:::::::::::::----::::::::::::::////++++//.        " << endl
			<< "        .....-----....................-------------::::::::::::::::////++++//.        " << endl
			<< "        .....-----....................-------------::::::::::::::::////++++//.        " << endl
			<< "        .....-----...................--------------::::::::::::::::////++++//-        " << endl
			<< "        .....-----...................----------------::::::::::::::////++++//-        " << endl
			<< "       .-....---....................------------------::::::::::::://///++++//.       " << endl
			<< "      ./:.-..---...................-------------------::::::::::::://///+++oss+`      " << endl
			<< "      ://:-..-----..................-------------------::::::::::::////++ossyso:      " << endl
			<< "     .///+:---------.............-..--------------------:::::::::::///+osyyyyss+.     " << endl
			<< "    `-/++++/---------..........-------------------------::::::::::://+osyyhyyys+:`    " << endl
			<< " ``..--/+o+//:------........----------------------------::::::::://+osyyyhhyso+///-.` " << endl;

		break;
	case 5:
		fontSize(10);
		std::cout << "         `-:-.                                                                                                                                                     " << endl
			<< "        `yyyyyo.                                                        `````````````````                                                                                " << endl
			<< "        -dysyhdy-       `-::-                                   ```.....------------------.....```                                                                       " << endl
			<< "        `ydyyhhhy-    `+syyhho`                           ````....-----------....--.---------------...``                                                                 " << endl
			<< "  ````   -ydyyhddh/``.shyyhddh/                   ``````......------....---...............--------------..``                                                             " << endl
			<< " /oossso:--ydyyhhyyssyhdddmmmy.               `````````.....--------:::----------.....-...-..............---..`                                                          " << endl
			<< "`hhyhdmmhhhyyyyyhyyyhddmmmmh+.              ```  ``.--:/++++++++/::---:::::---------.-.-.......---:-:::::------..`                                                       " << endl
			<< " -shddmmdmmhyssyhyyddmmmdd+`              ``  ``.-:+osyyyyysssssssso+::::://::--------.......--:::://///:://::::---`                                      .-::.          " << endl
			<< "  `-/+shdmdhyyyhhhhdmmdhho               `` ``.:+syhysoo+++//////++oooo/::::///::---..``..-://+++ooooo++++////////::-.`                                 .+yyhdh:         " << endl
			<< "       `-/yhdhhhhdmdddddy:`            ``  `.-+shhso++/::--........--:/++/:::////-.```.-:/+osyyyyyyyssyyssso++///////:-`                   .--.`       .yyyhdmmo         " << endl
			<< "          `:shddmdhyyyhddy/`         `-`  `.:ohhso+/:-..``````````````..://::////.`..::/+syhysoo++++////+++osso+///////-.`               `oyyyhs-     -yhhhdmNd-         " << endl
			<< "             -/oydhyyydmddy/`        -.  `.:sdho+/:-.```          ``````..-::://:--::/+shyso++/::--.......--:/+oo+//////--.              +dhhddmd+` `:hhhhdmNd:          " << endl
			<< "                `hhyyyhdmmdh+`       -  `.:odhs+/:.``         ``..```````..-::::::://ohys++/:-..`````````````..-:++//////---`            :dmmmmNmhs+shhhhdmNd-``.:://-`  " << endl
			<< "                 hdyyyhhhyy:`        .  .-/hdy+/:.`         `:+ossso/.````..--://///shyo+/:-.```   `` `````````..-:///////:--`            :hNNNmdhhhhhdhhdmdyoshhhhhddo  " << endl
			<< "                 +++oo////+:        `. `.-+dho/:.``       `-.-+ssssssy/````.--:////odyo//:.````-::-.``  ````````..-://////:/::.             -yNNmmddddmhhddhhdddmddmmd+  " << endl
			<< "                    -----::/.       ..``.-+dy+/-.`        /s/+syhhhsosy-```.../////hho//-.``./ossssoo+.`  ```````..-:://///sso+.             `smNNmmdmddmmmmmmmmmddy+-   " << endl
			<< "                    `-----://`     `:-`..-+dh+/-```       oyoshhhhhs/+y/``....////+dy+/:.``:.`/+ssso+oy:  ```````..--://///oyoo:             `-dmmNmmmmmmmmmmdy+:.`      " << endl
			<< "                     .-..--:/:     :/:...-:yhs+-````      /hsoyhhhs/+sy.``...-////ohy+/-``-so+oyyhhho+os` ```````...--///+/oyosh:           .ymmddmmNNmmmmdho.           " << endl
			<< "                      .-.--::/.    ::::..-:+hyo:.````     `+hysso+++ss-``....:////+hy+/.``-yoosyhhhyo/+s`````````...--///++/s+smm+        `/dmmmmmmmNmmmhs/`             " << endl
			<< "                      `-..--:::`   `.-::---:+hs+-.```````  `./ssyso+:``.....://////hyo/-```oyo+ssyo+:+s/````````....--//++/osohdmd-       :hmmmmmmmmmmy-`                " << endl
			<< "                       .-..-:::-   ..--:/:--:+ys/..```````````````````.....:///////ohs+-.```+yyso++oso:````````....-.//++o/hsohddd:        .ohdmmmmmmd.                  " << endl
			<< "                       `-..--::/` `------//::::os/-.`````````````````....-//++o++///oys:.`````-/++/:.`````````...--.:/++o/hho+hddd+       .////+ydmmmo                   " << endl
			<< "                        ...--::/- .-------://:::://:-..``````````......-//+oo/:/++///oyo-.``````````````````....---:/+oo/sdh+ohhddd`     -+//:///+..-.                   " << endl
			<< "                        `-..--::/`----------:/+//::::----..........--:/++o+/:+y/:+++///so:..```````````````....---//+oo:+hso/+oooso`    -++//////.                       " << endl
			<< "                         .-.--::/:-------------/+++///:::-------:://++++/:/ohddds::+++////:--..`````````....---://+oo/:/++++++++oo:    -o++/////.                        " << endl
			<< "                         `-----:/:------------:---://++++++++++++++//::/oyhyyyyyyy+-:++++///::---......----:://++o+/:/+////////++o/   -oo++////-                         " << endl
			<< "                          .----:::-------.-------:::::::::::::::-::/+ossssssssssssss+::/++++////::::::::///+++++/::+++//////////+o/  :ooo++///-                          " << endl
			<< "                          `----:::-----...---------:://///+++++ooooooooooooooooooooooo+/:-://++++++++++++++++/::/+++/////////////++ :soo+++//-                           " << endl
			<< "                           .---:///----.....---------::://////////++++++++++++++++++////++//::--:::::::::://+/+o++///////////////++/ssoo++//-                            " << endl
			<< "                           `---:+///:---.......---:/:::::::///////////////////////////:::////+++++++++++ooo+++////////////////////sysoo++//:                             " << endl
			<< "                            .--://+++:---.......--oh/--:/:::::::::::::::::::::::::::::::::::::///////////////////:::::////////////syso++//:`                             " << endl
			<< "                            `---/+++++:---.......-/h/::/s/-.--::::////::::::::::::::::::::::::::::::::////////::::::::///////////+syso++/:`                              " << endl
			<< "                             .--:++++/+/---.......-smmmmmmdhysooooyy+/::::::::/o/::::::::::::::::://///:/::::::::::::////////+oooooso++//`                               " << endl
			<< "                             `---/+oo++//:--.......-yNNNNNNNNNNNNNNNmdddhhhhhdmNdyo++//////+s/::::/+oyh/:::::::::::///////+ossssoooso+//.                                " << endl
			<< "                              ...-++o++///:--.......-smNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmmmdmmNmdhhhhhdds::::::::::///////+syyssssoooo+//-                                 " << endl
			<< "                              ....:/++o+///:---......-/hmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmh+:::::::::://////+ssyyyysssooo++/:                                  " << endl
			<< "                              `...--/+oo+////---.......-+hmNNNNNmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNdy+:-::::::::::////osyyyyyyyyso+/+//:`                                  " << endl
			<< "                              `....--//+++////:--........-/shhhhyyyhhdddmmmNNNNNNNNNNNNNNNNNmmdy+:-----::::::::://+syyyyyyyyys+/::///.                                   " << endl
			<< "                              `....---:/++++/+/:--..........-:/++ooosssyyyhhdddddddddddhhhso+/:--------::::::::/+osssyyyyyyso//::::::                                    " << endl
			<< "                              `....----/++oo+////----...........----:::///+++++++++///::---------------:::::://+ssssssyysso///::::::.                                    " << endl
			<< "                              `.....----:/++o+/:/+//::::--------------------------------------------:::::::/+oossssssssso+////::::::                                     " << endl;

		break;
	case 6:
		fontSize(7);
		std::cout << "                                                                               `            ``                                                                                                                    " << endl
			<< "                                                                         `````````````.``   ``                                                                                                                          " << endl
			<< "                                                                     ````....``..........`.``                                                                                                                           " << endl
			<< "                                                                   ```.`............---.....````                                                                                                                        " << endl
			<< "                                                                ````.................-..........`                                                                                                                       " << endl
			<< "                                                              `````..................-...---.-..-.                                                                                                                      " << endl
			<< "                                                            ``..................-...---..--.--.-:--`                                                                                                                    " << endl
			<< "                                                          ``.....-------------------------------:--.`                                                                                                                   " << endl
			<< "                                                    ````........................--------------:--:--.`                                                                                                                  " << endl
			<< "                                                 ````.````..........````.............----::::::------.`                                                                                                                 " << endl
			<< "                                                     ``````.......```````.```````````....---::::------.                                                                                                                 " << endl
			<< "                                                     ``````......`````````````         ```..---:::-----`                                                                                                                " << endl
			<< "                                          ````````````````......`````````````````````````` ```.--------.`                                                                                                               " << endl
			<< "                                 `.-:://////+///:-....`.........```````.....`..---:::::--..`````.-------.`                                                                                                              " << endl
			<< "                             `./+oo+++++++osyyyhyys+-...........`````.....:/+oooooooosyssso+:-..``.------.                                                                                                              " << endl
			<< "                           `-+o+/+syyyyysso//osyhhhhho---..............-/oo+//oossso+//+syyyyyo/-...-----.`                                                                                                             " << endl
			<< "                          -++/+shdhhhhhhhyhhyo/+yyhhhdy/---..........-+oo/+oyhdmmmddhhho+/oyyhyys+:-------.`                                                                                                            " << endl
			<< "                        `:o+/sddhyhhhhyys/syydy++syhhhhh+--.........:oo/+sddhhddhys+:shdho/+yyyyyyo/::-.--..                                                                                                            " << endl
			<< "                        :o/+hmhhhhhdmmdhhhhhhsyh/+sydhddh/--......./so/oddhhhdmdhssssyhdo+s//yyyyyyy//:-.--.`                                                                                                           " << endl
			<< "                       -s+/hmhhhhydNNNmmddmmNNhss:oyhyydms:-....-:/so/omhhhhhdNmhyyhddmmNs/o/+yyyyyys+/:..-..`             ```....`                                                                                     " << endl
			<< "                      `+s/oNhhhhyhmNNmhhyyhhdmNhs:oyhmdmdho++/++sdys+/mdhhhyhmNmhyyhhdddmmo++:yhhyyyhs+/--...`           `.....-:::-`                                                                                   " << endl
			<< "                      `oo/yNdhhyyhNNmhysssyyhhdhs:oyhmdmdhhhhhhhhmys:oNhhhyydNmhsoosssyydmhs+:yhhhhhddhs/::--.`        `.....-://///-`                                                                                  " << endl
			<< "                      `oo/sNddhdmmNNmhyyyyhhhdhho:symdmmhsooossyhmhs:oNddhhdmNmhsoosyyhhdmdh+/yhhhhhmmmdhhysoo+.     `......-/++/////`                                                                                  " << endl
			<< "                      `+s/+dmmmNNNNmdhyhhhddddhy:/shmdds:-..--:/oyys//mmddmNNNmhssssyhdddddy/+hhhhhhdmmdddhhyso/`   `-.....-/++//:/+/-                                                                                  " << endl
			<< "                      `-so/omNmmmmmmdhhhddddddy+/oydNh/-....--:/+oyyo:smNNNNmmmhyssyhdddddy//yhdhhhhdmhsosso+/:-`  .--...--:+++//:/++:`                                                                                 " << endl
			<< "                      `.:so/+ydhhhhhhhhhhhhhyo//sydNm+......-:/++oshyo/oddhdddddhhhhhdddhs//shddhhhhdds++++++/-.` .--...--:+++++//:++:`                                                                                 " << endl
			<< "                       `.:os+/+syyyyyyyyysso++syhdNNo-.....-:////+oydhs++shhhyyyyyyyyyys+/oyhdddddddddo+++ooo+/-..--...--:/++++++/:++:`                                                                                 " << endl
			<< "                       `..-/sso++++oooo++++osyhdmNNy-.....--:////+osdmdys+/+oosssssso+++oshdmmmddddddh+++++oooo/-:--.---:/+//++++/:++:`                                                                                 " << endl
			<< "                        ....-+sysssosssssyyhhddmmNd/-....--:/:///++shhdmhysso+++o+++oosyhddmmmmmdmdmhso+++++ooo/:------:/+++/++++/:++:`                                                                                 " << endl
			<< "                        `.....:syhhhhhhhhddddddmmmo:.....-://////+osyysyddhhhhyyyyyhhdddmmmmmmmmmmmdsoo++++++oo/------::+o+++++++//++:`                                                                                 " << endl
			<< "                         `-....:ohhdddddddddddddys+-.....-:////++oosyyo+oyddddddddddddddmmmmmmmmmmhssoo++++++++/-----::+ooo++++++//++-                                                                                  " << endl
			<< "                         `.....-:oyddddddddhysso++/-....-::///++osyyys+/:/+syhdddmmmmmddmmmmmmmdhyssooo++++++++:----::/ooooo+++++/+o+.                                                                                  " << endl
			<< "                         `....--://+oooooo+++++/::-.....-:///+syhyyyso/::::/+oossyhhdddddddddhyyssoooo+++//////::--::/ossooooo+++/+o/`                                                                                  " << endl
			<< "                         `.......--:////////::-----....--:/+oyhhyyys+/:---:-::/++++ooooosssssssoooo+++++///////:::::/+ssssoooo++//o+:`                                                                                  " << endl
			<< "                         `.....---::/::-----...........-://oyyyyyso/:----------:://+++++++++++ooo+++++++/////////:://syyyssooo++/+o+.                                                                                   " << endl
			<< "                         `....--://///:-...............-:/ossyyso+:-...----------::://+++++++/++//////////////////:/+hhhyysoo+///++/.``                                                                                 " << endl
			<< "                        `....--:://++++so/:::::::::...-:/+ossooo+/:::::-::::::::///++osyyysoo+//::::::::/:::///++//+oshhyyso/:::++::---..``                                                                             " << endl
			<< "                        `....-------.-:oNd/::::::::-..-//++o+++oo+++++//++++++/+o++syyydmmysoo/::---::::///:///++//+ssyyys+:--:/+/:////////:--.`                                                                        " << endl
			<< "                        ..............-+dh::-------..-::-://::////::/:::///////////+++oyho+//::------:::://///++++/osyyyo/----:+/:/++++++++++//::-.`                                                                    " << endl
			<< "                       `..............-:oyooo///:--..-:--:/o///+o+/:/+:/+//+o//oo+oo+oo+/:---......---:::////++++++oyhho:----:///:+oo++++++//:------..``                                                                " << endl
			<< "                       ...........``....-/o+///:-......-.-:+///+o++++/:/+++oooososo+/::::---........--:://////++++/yddy/-----://:/oooo++/:--...-.--..-....`                                                             " << endl
			<< "                      `...........``.................--:+++++::::::::::::::///:::::::::----........---:://////+++//hmd+:----:::::/soo+/:...............-.--..``                                                         " << endl
			<< "                     `.......`...``````.`...`````.......:/:-.....------------::::::::-----.........--::://////+++::ymy/:-----::::+so+/-..........................`                                                      " << endl
			<< "                   ``...........````````````````````....---............---------:::------....--------::://///++++/:/hs/:------:::+s/:-.........................-....`                                                   " << endl
			<< "                  ``............``````````````````````..................---------------....---------:::://///++o+:::+s/:-------::+o:--..............................-..``                                               " << endl
			<< "                 `.............```````````````````````...................--------------..---------:::::://///+++o:--://--....---:+o:--...............................-....``                                            " << endl
			<< "               ``..............`````````````````````.........................----------------::--::::::://///+++o:----::---..----/o:--..................................-....``                                         " << endl
			<< "              `................````````````````````.......................-.--..------------:::::::::::://///+++o/---------------:o/.--.....`..............................-....``                                      " << endl
			<< "              `......--.......``````````````````````.......................--...-----------::::::::::::://////++oo:--.....-------:o+---...````..````````.....................--....``                                   " << endl
			<< "             `.....----.......```````````````````````......................---------------::::::::::::://////+++os/:--....------::oo---...````````````````.....................------.`                                 " << endl
			<< "             `....---:-........``````..``````````````....................---------------:::::::::::::://////++++oso:---...------::oo:.-...`````````````````...................---------.`                               " << endl
			<< "              `.----:/:...........``..```````````````...................--------------:::::::::/:::::://///+++++oss+:---------:://ss:.--.....`.```````````````..................---------.`                             " << endl
			<< "             ``..-::/+:....................```````......................-------------:::::::///////////////+++++osso+::-----::://oso:.--....`````````````````````````...........-----------`                            " << endl
			<< "            `````.-----...............................................------------:::::::::://////////////+++++oossss+/:::::///+sss+-.-:....`````````````````````````...........------------.`                          " << endl
			<< "           `.````.````................................................----------::::::::::://////////////+++++ooossyhdys++++ossyso/-.../-...````````````````````````...........--------------.`                         " << endl
			<< "          `.`````.````...............................................-----------:::::::::://///////////+++++++oooossymNmhyyyysso/:...../-....`````````````````````.............----------------.                        " << endl
			<< "         ````````.````.............................................----------:::::::::::://////////////++++++++ooooshNd+++++//:-.......+-....```````````````````...............-----------------.                       " << endl
			<< "         `.`````..````............................................----------:::::::::::///////////////++++++++oooooymm+----............+:....````````````````````..`...........------------------.`                     " << endl
			<< "        ````````.`````............................................----------::::::::::///////////////+++++++oooooosdm+--...............+:....``````````````..``````.............------------------.`                    " << endl
			<< "       `````````.`````..........................................----------:::::::::::////////////////+++++++oooooohmo.............````.+/...``````````````...``````.................----------------`                   " << endl
			<< "       ``````````.````..........................................-----------::::::::::///////////////+++++++++ooooymo-...........``````-+/-...````````````...``````......................-------------`                  " << endl
			<< "      ```````````.````.......................................------------:::::::::::////////////////++++++++oooosms-..........````````-+/-...```````````....`````......................---------------`                 " << endl
			<< "     ````````````.````......................................------------::::::::::::::::://///////++++++++++ooosdy-..........`````````-+/-.....````````....```````.......................--------------`                " << endl
			<< "     ````````````...........................................-----------:::::::::::::::::::////////+++++++++ooosdy-..........``````````-+/:......``````....``````..........................--------------`               " << endl
			<< "    ``````````````...`.....................................----------::::::::::::::::::::////////++++++++++ooshy:..........```````````-+/:.......```......````.............................--------------`              " << endl
			<< "    `.````````````..``....................................--------::::::::::::::::::::::::///////+++++++++ooohy:........``````````````-//:-..............````..............................---------------.             " << endl
			<< "   `...```````````..```................................----------:::::::::::::::::::::::://///////+++++++o+ohh:.........``````````````-///-..............```.................................--------------.            " << endl
			<< "   `....```````````````............................----------::::::::::::::::::::::::::://////////+++++++oohh:.........```````````````-///:..............`....................................--------------`           " << endl
			<< "   `.....````````.`````................------------------::::::::////:::::::::::::::::://///////+++++++ooohy:.........````````````````-///:-....................................................-------------`          " << endl
			<< "   `......``````.```````...............----------::::::::::::///////:::::::::::::::::::////////+++++++o+shy:.........`````````````````-//::-....................................................--------------`         " << endl
			<< "   ........`````````````.-...............------::::::::::::::::::::::::::::::::::::::::////////++++++oosdy-.........``````````````````-::::--.............-......................................--------------`        " << endl
			<< "   ............`````````.....................---------:::::::::::::::::--:::::::::::://////////++++ooosdy-........`````````````````.-:::::::-............----...............------.................-------------`       " << endl
			<< "  `..............````````.-.....................-.-------------------------:::::::::://///////+++++oosmh:........``````````````.-::/::::::::--..........------.............--------...................-----------`      " << endl
			<< "  `.................``````-..........................--------------------:::::::::::://////+/++++oooymh:-........`````````..-://///::::::::::----.......-------............--------....................--------:--`     " << endl
			<< "  `.................-..```.-..........................------------------::::::::::::://////++++ooooymh:..........`.```.-:////////::::::::::::------.....--------...........-------.......................-------::-`    " << endl
			<< "  `................--:/-```.--......................-------------------::::::::::::///////+++++ooohms:........```..-/++++++/////:::::::::::::::-----.....-----------.......------........................--------::.    " << endl
			<< "  `...............---::-```.----......................----------------:::::::::::///////+++++++oshms--........````:osso+++/////::::::::::::::::::----.....--::-------......------...........`````.......---------::-.   " << endl
			<< "  `................----`````.-----...................--------------:::::::::::::///////+++++++osmm+-.........``````.:oo++/////:::::::::::::::::::::::-....--::::------......----...........````.........-------:::::-`  " << endl
			<< "  `................--.```````.-----.................---------------::::::::://////////+++++oooymd+-..........````````.:::------:::::::::::::::::::::::-....--::::------.....----.............`.........---------:::::-` " << endl
			<< "  `.................``````````------.................-------------::::::::::////////++++++++shNh:-..........```````````............-----::::::::::////:-....-::::-------....----......................----------::::::. " << endl
			<< "  `.................``````````------.................-------------::::::::::////////++++++++shNh:-..........```````````............-----::::::::::////:-....-::::-------....----......................----------::::::. " << endl
			<< "   .............-..```````````.-------..............------------:::::::::::///////++++++ooosdms:-........````````````````..............----::::::///////--..--::::-------...----.......................----------:::::: " << endl
			<< "   `..........---.`````````````.----------......----------------::::::::////////+++++++++oymmo--.........``````````````````............------::::///++++/:...--::::-------..----........................----------::::: " << endl
			<< "   `..........--.```````````````----------........----------::::::::::////////+++++++++osdNd/--.........`````````````````` ``..........-------::::////++o+--..--::::------..-----.........................--------::::: " << endl
			<< "   `............`````````````````--------------------------::::::::::///////+++++++++ooymNh:-..........```````````````````````.........---------::://///+o+:-..--::::---::-.------...........................-------::: " << endl
			<< "    ...........``````````````````.------------------------::::::::::///////++++++++ooydNNo:-...........`````````````````````````.......-----------:://://+oo/-..--::::::::-..-----............................-------:: " << endl
			<< "    ....-----.````````````````````----------------------::::::::::///////+++++++oooshmNmo-............```````````````````````` ``......------------::::://+oo+-----::::::::..-----............................-------:: " << endl
			<< "    `-.------.````````````````````.---------------------::::::::://////++++++++oooymNNd/-...........``````````````````````````.--.......-------------::::://+oo/----::::///-.-----...........``................-------: " << endl
			<< "     ..-------.```````````````````..-------------------:::::::////////+++++++oooydmNNy/-..........````````````````````````.-:://:--.....---------------::::://+o+:---://///-..----............```..............-------: " << endl
			<< "     ...........```````````````````..-----------------:::::::://///++++++++oooyhmmmmy:-..........``````````````````````.-:///////::--.--------------------:::::+oo+:-:://++:..-----.............................------- " << endl
			<< "     `...........``````````````````..::---------------::::::::////++++++++ooyhmmmmdo-..........````````````````````.-:///////////:::---.--------------------::::/ooo+::://+/-.--:----...........................------: " << endl
			<< "     `..........-.``````````````````.:o/-------------:::::://///++++++++ooyhmmmdddo-.........```````````````````.://++///////////::::--.--.--------------------::/+oso+:::/+:.--------..........................------: " << endl
			<< "     `..........--.`````````````````.-o+::::-------:::::////////+++++oosydmmddddh/-........`````````````````.-:/++++/////////////::::::--.-----------------------::/+osso//+/----:----..........................------: " << endl
			<< "      `-........--.``````````````````.+o//::::-:::::::://////++++++ooyhdmddddddy/.......````````````````.-:/+++++/////////////::::::::::--.------------------------::/+osso++:-------...........................------: " << endl
			<< "      `........---.``````````````````.:o+///::::::::///////++++++osyddddddhhhhy/.......``````````````.-//+++++++///////////////::::::::::--.-...---------------------::/osyys+----:--...........................-----:: " << endl
			<< "       ........--.```````````````````.-o+///++//://////////+++osyhddddhhhhhhys:.......```````````.-:/++++++++/////////////////:::::::::::::--.-.......-----------------::+osss/-:::-............................-----:: " << endl
			<< "       `..........```..```````````````./s////+oo++/////+++osyhhddhhhhhhhyyso+-.....``````````.-:/+++++++++////////////////::::::::::::::::::--.........--------..--------:/osss/::/:............................-----:: " << endl
			<< "        ..........```...``````````````.:s+////++osssssyyyhhhhhhhhhhyyyyso++/-...-..```````.-/+ooo++++++//////////////:::::::-------------::::--...........--.......-------::+oss+//:...........................------:: " << endl
			<< "        `--......````....``````````````-+s+/////+oosssyyyyyyyyyyyyysso++///-.-:/:-.````.-/ooooo++++++//////////::::-----..............---------....................--------:/++yys+/-..........................------:: " << endl;

		break;
	case 7:
		fontSize(8);
		std::cout << "                                                                                    `````````````                                                                                     " << endl
			<< "                                                                        ```.-::::://++ossyssssso+/:.````                                                                                    " << endl
			<< "                                                             ```.--:://+osyhhhdhhhhddhhhhhhhhhhhhhyyys+/:-.``                                                                               " << endl
			<< "                                                      ```.-:+osyyyhhhhhhhhhddhdddhhhhhhhhhyyhhhyyyyyyhhhsso+/:-.`                                                                           " << endl
			<< "                                                 ``-:+osyyyhhhhhhhhhhyyyhyyyyyyhhhhdhyyyyyyyyyyyyyyyhhyyhyhhysoo+:.`                                                                        " << endl
			<< "                                             `.:+syhdddddddddddhhhhhyhyyyysyyssssyyyyyyyysssyyyysssyhyyssyyyyhyssso/-``                                                                     " << endl
			<< "                                         ``./shmmmmmmmmdddddhyyyyyyyyyyyyysssyyyysssyyyyyhhyysyyyssosyhyyyyysyyyyyyyyo-``                                                                   " << endl
			<< "                                      `.-/shdmmdmdmmmdddddddddhyyssssssssssssyyyyyyyyyyhhyyhdhhhhhyyysyhhhhhyysyhhyyyys+:-::://////::--..````                                               " << endl
			<< "                                  ``.:+ydddddddmdddddddhhhhhyyyyyssssssssssssyyyyhhddddddddhhhdddhhhddyyyhddhyysssssoooosssyyyhhhhhyyyysso+//:-..``                                         " << endl
			<< "                                `-/oydddddddddddddddddhhhhyyyssssoosssssssyyyhhhhhhddmmmmmmmmddmmmdddddddhhhyyssoooooossssyyhhhddddddmmdddddhyso++/:-.``                                    " << endl
			<< "                             `.:oydmmmmdddddddddddhhhhhhhhhhyhyyssssyyyyyyyhhhdddddmmmmmmmmmmmmmmmmmmmmmddhyysssssssyyyyhhhhhdddmmmmmmmmmmmmmmmddhyyo+/-.``                                 " << endl
			<< "                            `:sddmmmmmmmmmdmmmdmmdddddhhhhhyyyyyyysyyyyhhhddddddmmmmmmmmmmmmmmmmmmmmdddddhhhyyyssssyyhhdddmmmmmmmmmmmmmmmmmmmmmmmmmmdhyso/:.``                              " << endl
			<< "                          `.+hdmmmmmmmmmmmmdddddddddhhhyyyyyyssyyyyyyyyhhhhddmmmmmmmmmmmmmmmmmmmmmmddddhhhhyyssosssyhhhhddddmmmmmmmmmmmmmmmmmmmmmmmmmmddhsoo/:-``                           " << endl
			<< "                        `.:sdmmmmmmmmmmddddddddddddhhhhhyyssoossssssssyyhhhhddmmmmmmmmmmmmmmmmmmmddddddhhhyysssssssyyhhhddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdhyso+/-.`                         " << endl
			<< "                      `.:sddmmmmmmmmmdddddmdddhhhhyyyyssssssssssssyyyhhhdddddmmmmmmmmmmmmmmmmdddmmddhhhyyyyyyysyyyyyyyhhddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdhys+/:-`                       " << endl
			<< "                     `:oddmmmmmmmmmmddddddddddddddddhyyysssssssyyyhhhdmmmmmmmmmmmmmmmmmmmmmdddddddddhhyyyssssssyyyyhhhdddmmmmmmmmmNNNmmmmmmmmmmmmmmmmmmmmmmmmmddyo+/:-.`                    " << endl
			<< "                    .+hdmmmmmmmmmmmmmmmmmdddddddhhhyyyysssssssssyyhhdddmmmmmmmmmmmmmmmmmdddmmmmmmmddhhhyyssosssssssyyhddddmmmmmmmmmmmNNNNmmmmmmmmmmmmmmmmmmmmmmmddyo//:-``  `               " << endl
			<< "                  `-odmmmmmmmmmmmmmmmmmmmmdddddhhhhyysssssssyyyhhddddmmmmmmNNNNNNNmmmmmddddmmmmddddhhyyyssssssssyhhhhhhhddmmmmmmmmmmmmmmmNNmmmmmmmmmmmmmmmmmmmmmmmdhs////-`                 " << endl
			<< "                 ./ydmmmmmmmmmmmmmmmmdddddhhhhhyyyyyyysssyyyyyhhhdddddmmmmmmmmmmNNmmmddmmmmmmmmdddhyyyyssossssyyyyhhhddddddmmmmmmmmmmNmmmmmNNNmmmmmmmmmmmmmmmmmmmmmddy+///:.                " << endl
			<< "               `-ohmmmmmmmmmmmmmmmmmmdddddddhhhhyyyyssssssssssyyyhhdddddmdmmmmmmmmmmddmmmmmmmmmdddhyssssssyyyyyhhhhdddddmmmmmmmmmmmmmmmmmmmmNNNmmmmmmmmmmmmmmmmmmmmmmdhs+//:.`              " << endl
			<< "               -odmmmmmmmmmmmmmmmmmmddddhhhhyyyysssssssssssyhhhddddmmmmmmmmmmmmmmdmmmmmmmmdddddddhyyysssssyyhhhhhhdddddddmmmmmmmmmmmmmmmmmmmmmNNmmmmmmmmmmmmmmmmmmmmmmdhyo///-`             " << endl
			<< "              .+dmmmmmmmmmmmmmmmddddddddhhhhhyyyyyssssyyyhhhhhhhhddddmmmmmmmdhysosdmmmmmmmddhhhhyyyyyssyyhhhhhhddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmddmmddyo+/:-.            " << endl
			<< "             `:ymmmmmmmmmmmmmmmdmddddddddhhhhyyyyyyyyssssssyyyhhhdddmmdddhys+/::+sdmmmmmmdddhhyyyssosyyyyhddddddddmmmmmmmmmmmmmmmNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmddmmmdhs++:-``          " << endl
			<< "             .+hmmmmmmmmmmmmmmmmmmmmddddddhhhyyyssooossssssyhhddddddhhhyso/:---:oymmddmdddhhyyysssssosyhhhhdmmmmmmmmmmmmmmmmmmmmmmmNNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdhso+:-.`         " << endl
			<< "            `/ymmmmmmmmmNmmmmmmmmmmmmdddhhhyyyssssssooossyyhhhhhhhyyyso+/:-----:ohmddhddhdhyssssssssyysyhddddmmmmmmmmmmmmmmmmmmmmmmmNNNmmmmmmmmmmmmmmmmmmmmmmmmmmmddmmmmdmmhhso/:-``        " << endl
			<< "           `:ydmmmmmmmmmmmmmmmmmmmdddhhhhhhhyyssoosoosyyhhhyyyyyysso+/::-------:ohmddhhhhyyyssoossysyyhhhhddddmmmmmmmmmmmmmmmmmmmmmmmmNNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmddyso/:-`        " << endl
			<< "           -sdmmmmmmmmmmNNmmmmddddddddddhhyyysssssyyyyyyyysssssoo+/::----------/ohdddhhyhyssssoossyhhhhdmmddmmddmmNNmmmmmmmmmmmmmmmmmmmmmNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmdhyso/:-`       " << endl
			<< "          .odmmmmmmNNNNmmmmmdddddddddhhhyyyyyyyyyyyssssssooooo+/:-----...------:oyhhhyyyyysosssossyhdddddmmmmmmmmmmNNNNmmmmmmmmmmmmmmmmmmmmmmNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdddyys+::.`      " << endl
			<< "         `/dmmmmmNmmmmmmmmmdmddddddddhhhhhhhhyysssssoooooo++/:---........------:+yhyyyyssyysossssyyhdddmmmmmNmNNmmmNNNNNNmmmmmmmmmmmmmmmmmmmmmNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmdyys+:-.      " << endl
			<< "         `/dmmmmmmmmmmmmmmmmdddddddddddddhhyysssssoooo++//:---...........------:/oyyssssssyyysyyyyhhdddmmmmmmmNNNNmmNNmNNNNmmmmmmmmmmmmdmmmmmmmNmmmmmmmmmmmmmdmmmmmmmmmmmmmmdmdhyys/:-`     " << endl
			<< "          :hmmmmmmmmmmmmddddddmmmmmdddhhyyssssssooo++/::---..............-------/+sysssssyhyhhyyhhhhdmmmmmmmmmmmNNNNNNNNNNNNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmddmmmmmmmmmmdmmmmddhyso/-.`    " << endl
			<< "          -ydmmmmmmmmdddmmmmmmmddddhhyyysssssooo+//:---.................--------:+osysssyyhhhhhyhdddmdmmmmmmNNNNmmNNNNNNmNNNNNNmmmmmmmmNmmmmdmmmmmmmmmmmmdmmmmddmmmmmmmmmmmmmmmddhsso:.``   " << endl
			<< "          :hmmmmmmmmmmmmmmmmddhhyyyysssssssso+/::----...................--------:+soyysyyyhdhhdddddmmmmmmmmmmNNNNNmNNNNNNNNNNNNNNmmmmmmmmNmmmmdmmmmmmmmmmmdmmmmmmmmmmmmmmmmdmmmddhyso/..`   " << endl
			<< "         -sdmmmNNNmmmmddddhhyysssssoosssoo+/::--........................---------/ssshyyhhhdmddmmdddmmmmmmmmmmmNNNNNmNNNNNNNNmmNNNNmmmmmmmmmmmmmmmmmmmmmmmmmdmmmddmmmmmmmmmmmmmmddhys+-`.`  " << endl
			<< "       `:sdmNNNmmmddddhhyyyyysssossssoo+/:---...........................---------:+ysyhhhhddmmddmmmdmmmmmmmmmmmNNmNNNNNNNNNNNNNmmNNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmmmmmNmmmmmmmddhyyo:``.  " << endl
			<< "      `/ymmNNNmmddhhyysyyyyysssssoo++/:---...............................--------:/syyhdddddmmmmmmmmmmmmmmmmmmmmmNNmmNNNNNNNNNNNNmmNNNmmmmmmmmmmmmmmmmmmdmmmmmmmmmmmmmmmNNmmmmmmmdhyys:``.` " << endl
			<< "     `/hmmNNNNmdhyyyyyyyysssssoo+//:----...............................-----------/oyhhddddmmmmmmmmmmmmmmmmmmmmNmmmNNNNNNNNNNNNNNNmmmmNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNmmmmmmmdhyys/.`.` " << endl
			<< "     .smmNNmmmdhyyyyyyssssssso++/::---.................................-----------:+shhddddmmmmmNNmmmmmmmmmNmmmmmmmNNNNNNNNNNNNNNNNNNmmNNNmmmmmmmmmmmmmmNmmmmmmmmmmmmmmmmmmmmmmmmddyss+.`.` " << endl
			<< "     .smNNNmddhhyysssyhhddddddhhhyys+/:--........................--...------------::oydddddmmmmmmNNNmmmmmmmmNmmmmmmNmmNNNNNNNNNNNNNNNNNNNNNNNmmmmmdmmmmmmNmmmmmmmmmmmmmmmmmNmmmmmmdhys+.`.` " << endl
			<< "     `:hmNmmdhysssyhddddddhhhhhhhhdddhyso:--................--...------------------:/shddddmmmmmmmmNNNNmmmmmmmNNmmmmmNmmNNNNNNNNNmNNNNNNNNNNNNmmmmmmdmmmmmNmmmmmmmmmmmmmmmmNmmmmmmdhys+...` " << endl
			<< "      .odmmmhsssyhdhsoo++////::/:://+ooso/--...........-.-------.--.---------------::+shdddddmmmmmmNmNNNNmmmmNNNNNmNmmNNmNNNNmNNNNNNNNNNNNNNNNNNmmmmmdmmmmmNNmmmmmmmmmmmmmmNNmmmmmdhys+-.`` " << endl
			<< "      -shmmmyoosys+///::::::::::-::::::-----.........-------------------------------::+yddddddmmmmmmmmNNNNmmmmNmNNNNNmmNNmmmNNNNNNNNNNNNNNNNNNNNNNmmmmmmmNmNNNmmmmmmmmmmmmmNNmmmmmmhys+-.`` " << endl
			<< "     `/yysyysooo+:::::::::::-:::::::::-----.-.......----------:+oo+//:::-------------::+yhddddddmmmmNmmmmNNNmmmmmmmNNNNNNNNNNmmNNNNNNNNNNNNNNNNNNNNmmmmdmmmmNmmmmmmmmNNmmmmmNNmmmmdhys+:``` " << endl
			<< "     `:syyo+///::::::::::::::::::::::------.-.....------------/oyhddhhhyyso+/:-----:--:/+shdddddddmmmmNNmmNNNmmmmmNmmNNNNmNNNNNmmNNNNNNNNNNNNNNNNNNNNNmmmmmmNNmNmmmmmmNmmmmmmNmmmmdyys+-``` " << endl
			<< "      .:/os/:::::::::::::::::::::::::------....--------------:-:::/+osyyhdddhhys+/::-:::/+oyddddddddmmmNNmmmNNNNNmmmmmmNNNNNNNNNNNNNNNNNNNNMNNNNNNNNNNNNmmmmmmNNNmmmmmNNmmmmmNmmmddyys/. `` " << endl
			<< "     `.:ohh+:::::::::::::::::::::::::---------..-----------::::::::::::://+osyhddhhso+/:::/oyhddddddddmmmmmNNNNNNNNNmNNmmNNNNNNNNNNNNNNNNNNNMNNNNNNNNNNNNmmmmNNNNmNNmmmNmmmmmNNmddhyyo:` `  " << endl
			<< "    ./yhyso/::::::::::::::::::::::::::--------.----------:::::::::::::::::::://+oyyhddhyo+//oshdddddddhdmmmmmmNmNNNNNNNNNmmmNNNNNNNNNNNNNNNNNMMNNNNNNNNNNmmmmmNNNNNNmmmmmmmmmmmmmdhyy+.```  " << endl
			<< "  `:oso/-..::::-:::::////////////::::::------------------:::::::::::::::::::::/::////+oshhysoosyhdmmddddddmmNmmmmmNNNNNNNNNmmmmNNNNNNNNNNNNNNNNNNNNMNNNNNNNmmmNNNNNNNmmmmmmNmmmmddyys/. ``  " << endl
			<< " `-osyyssooosoo+ooosssso++o+o++///::::::---------------:::::::::::::::/::////////////////++osyyyyydddmddddddmmmmmmmNNNNNNNNNNNmmmNNNNNNNNNNNNNNNMMNNNNNNNNNmmNNmNNNNmNmmmmNNmmmmdhyyo-` `   " << endl
			<< "  `-ohho-.-::+ossoossysso+/:--:////:::::---------------::::::///////////////////////////////++osyyyhhdmmddmddddmmmmmmmNNNNNNNNNNNNmNNNNNNNNNNNNNNNNMNNNNMNNNmmNmmNNNmmmmmmNmNmmmdyys/. ``   " << endl
			<< "   `/yh+.`.:/+s+-.`...-:/+ssys+++++/:::::-------------::::::////////////////////////////+++++++++syyyyhddmmmmmdddmmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNmNNNNNNNNNMNNmmmmNNNNmmmmmmNNmmdhyso:` `    " << endl
			<< "   `:yy+.`-/os/.````   ``-+ydddhhhhyo/:::------------:::::://+++++++++++++++///////+/+++++++++++++osyyyyhdmmmmmmmdddmmNNNmNNNNNNNNNNNNNNNNNNNNNNNmmNNNNNNNNNMNmmmmmNNNmmmmmNmmmdyyo/.``     " << endl
			<< "   `-sy/..:yy+.````````.+hmdddmmdmddhyo+:-----------:::::///++++++++++++++++++++++++++++++++++++++ooossyyyhddmmmmmmmmdmmmNNNNNNNNNNNNNNNNNNMNNNNNNNNNNNNNNNNMNNNmmmNNNNmmmmNmmdhss+-``      " << endl
			<< "    -sy+../sy:........:sdddy/+hmmmmdhyyhyo::--------::::///++++++++++++++++++oooooooo+++++++++++++ooooosyyyhhhdmmmmNmmmmdmmmmNNNNNNNNNNNNNNNNNMMNNNNmNNNNNNNNNNNNmmmNNNmmNmmmmdys+:.`       " << endl
			<< "    .oy+.`-++:.......-odddddhdNNNNmmho+shhho:------:::///+++ooooo+++++++oosoo++++/+++oooooo+++++++ooooossyyyhhhhdddmmmmmmmmddmmmNNNNNNNNNNNNmmNNMMNNNNNNNNNNMMNNNmmmNNNmmNmmmdhyo/-.`       " << endl
			<< "    .+y+.`.-:-..`````-ymmdmNNNNNNNmmhs+/+ohhysoo++/////+++ooooosssssyyyyyyyso++///::::::/+osssoooooooossssyyyyhhhhhdddmmmmmmmmmmmmmmNNNNNNNNNNmmmNNNNNNNNNNNNMMNNmmmNNNmmNmmmhyo/:.`        " << endl
			<< "    `/ys-`..-..```````odddmdNmNNNmmdho/::-+yhhyyyyyyyyysssssyyyyssssys+/:::/oydhdhhhhyssoooosyyyooooooosssyyyyyhhhhhhddddmmmmmmmmmmmmmNNNNNmmmNNNNNNNNMNNNNNNNNNNNmmmNNmmNmmdyo+:.`         " << endl
			<< "     -sy+......``` ```-sddhhddddddddy+:---/ydy/+oossyyyhhhhhyso++++o+:.````:ydmmmdmmmmddddhyhhdddyssoooossyyyyyyyyyhhhhhhdddddmmmmmmmmmmmNNmmmmmmNNNNNNMMMMMNNNNNNmmNNNmmNmdhs+/-``         " << endl
			<< "     `:ss/-.---.```````-ohddhhyyhhdho:----+hh/::://+ooosyyhhs+++++++-`````/hdo+ymNNNNNmmmmho//+oshdhdhhhyyyyyyyyyyyyyyyyhhhhhhhhhhddmNNNmmmmmNNNNNmmNNNNNMMMMNNNNNNNNNNNNmdhyo/-.`          " << endl
			<< "      `-+so/://:.```````.:oyyhhhhyso/----/yd+:::::://+oosyhyoo+o+o+:.```.:ymdsodNNNNMNNmmNms-...-+ssssyddmddhhhyyyyyyssssssoooo+oosyhhddmmNNNNNNNNNNNNmNNNNMMMNNNNNNNNNNmdhyo+:.`           " << endl
			<< "      ``.:/osoo+:-.````````.--::--::-----ohs::::-::::/++oshysosooo/-.----/hmmmmNNNNNNNNmmmmy:...--+yo+oyhhhhyyyyssssssooooooooooossssyyyhdmmNNNNNNNNNNNNNNNNMMMNNNNNNNNmmhss+-.`            " << endl
			<< "       ..-.--/ooso/:--.........---------+hs/::-:-::::://+shyssssso/:--...-ymdmdmmNNNNNmmdmdo:....-:so+ohhsooooooooooooooooooooooooooooosyhmmNNNNNNNNNMMMMMMNNMMMNNNmNNNmhsoo:.`             " << endl
			<< "      `..--.--::/+ooooo+//////:-----::/os+:::---:-::::://oyysossso/--.````:ymdddmmmmddddddy/-------ss+shyooooooooooooooooo+o++++++++++oosymmNNNNNNMNNNNMNNNMMNNNNNNNNmmhso+:.`              " << endl
			<< "      `...----:::::///++oooooooo+++ooo+/:::::----:::::://+yhsoosso/-..`````:sddddddhhdddhs/---:---:osoyyoooooooooooooooo+++++++++++++++oyhdmNNNmNNNMNNNNmmdddddmmNNNNmdyso/.`               " << endl
			<< "      `...-------::://////://:////++////:::------::::::://ohhsosso+-...`````./osyhhhhys+:-.---:---:osshsooooooooooooooo++++++++++++++++oydmmNNmmNNNNmdhhyysoo+++oymmmdys+/.`                " << endl
			<< "      `.-----------::::://////////////::-----------:::::::/oyhyyoo+/-.....`.``..-::::--....------:/oshsooooooooooooooo+++++++++++++/+++oydmmNmmmmddhyysooo+++///:/yddyo+:.                  " << endl
			<< "      `.------------------:::::::::----------------::::::::/+oyhys++/:-.................-------:/+oshysooooooooooooooo+++++++++++///+++oydmmmmmdhyyssoo+++++++++/:ohyo/:`                   " << endl
			<< "      `.----------------------------:::::::-:-----::::::::::::/osyyssso+/:----------------:::///++shssossoooooooooooo+++++++++++/////++shmmmmmdyssooo+ooooo+++oo+/+so/-`                    " << endl
			<< "      `.---------------.-------.---:::::::::::::::::::::::::::::/+ooossyyssoo+++/////////+++ooosyyys+oooooooooooooooo++++++++++//////+oydmmmmdyoooooooooo+++//os+:++:-`                     " << endl
			<< "      `.-----------------......---------:::////////::::::::--::-::/++++oooosssssssssssssssssssssso+++++oooooooooooooo++++++++++//////+shmmNmdyoooossoooo+++///+o+::-.`                      " << endl
			<< "      ``.------------..-......----...---::://++++++//:::::::--------:://+++oooooo++++++//////////+++++++oooooooooooo++++++++++//////+oydmmmdyo+ossssssooo+///+oo:...`                       " << endl
			<< "       `.----------------....---...-----::://++++o+++/:::::::----------:::://++++oooooo+++++++++++++++++ooooooooooo++++++++++///////+shmmmdyo++sssssssooo+//+oo/-.`                         " << endl
			<< "       `.----------------....----------:::://+++ooooo+/:::::::-------------:::::///+++ooooooo+++++++++++oooooooooo+++++++++++///////+ydmmmho++/ossssssoo++++o+:.``                          " << endl
			<< "        `.---------------....----------:::://+++oooooo+/::::---------------:-:::::::///+++oooooooo++++ooooooooooo+++++++++++///////+shmNmds+/++ossssooo+++oo/-`                             " << endl
			<< "        `.----------------...--------::::://++++oooooo+/:::----------------:::::::::::////+++ooooooooooooooooooo+++++++++//////////+ydmNdyo/++osssooooooooo/.`                              " << endl
			<< "         `----------------...---:::::::://++++oooooooo+/:::::----------------:::::::::::////++++ooooooooooooo+++++++++++//////////+sdmmmhs++ossssoooooooo/:.`                               " << endl
			<< "         `.--------:::----....---::////+++oooossosooo++/::::::::---:::---:::::::::::::::////++++++ooooooooo++++++++++++//////////+oymmmmy+++osssooooooo/-..`                                " << endl
			<< "          `.-------:::-----.....--:/+++oossssssssoooo++//::::::::::::::::::::::::::::://///+++++++ooooooo++++++++++++///////////+osdmmmho+//+oooooooo/-````                                 " << endl
			<< "           `.-------::-----.....----:/+ooooooooooooo+++///:::::::::::::::::::::::::://////++++++ooooooooo++++++++++++///////////+shmNmdy+++//++++++:.````                                   " << endl
			<< "           ``.-------------.......---:://+++ooooooo+++//////////////////////:::::///////++++++oooooooooo++++++++++++//////////++shmmNmho++++////:.``                                        " << endl
			<< "            `.--------:::----.....-----::://++++++++++///////////+++++++++///////////++++++++ooooooooo+++++++++++++//////////++oydNNmdso+++/:-.``                                           " << endl
			<< "            ``.----------:--.--....------::://////////////////++++++++o+++++///////+++++++++ooooooo+++++++++++++++//////////++oshmNmmho+/:-.``                                              " << endl
			<< "              `.--------.-----.....---------::://///////////++++++++o+oo+++++//++++++++++oooooooooo++++++++++++++//////////+oosydNNmdo-`                                                    " << endl
			<< "               `.---------------...---------::::::////////+++++++ooooooo+++++++++++++++ooooooooooo+++++++++++++++////////++oossymNNmy-                                                      " << endl
			<< "                `.----------:::--------------::::://////+++++++oooooooooo+////++++++++oooooooooooo++++++++++++++////////+oosssydNNmd/`                                                      " << endl
			<< "                 `.----------:::////::------:::://///++++++oooooosssssso+/::///++++++ooooooooooooo++++++++++++////////++ooooshmNNNmy-`                                                      " << endl
			<< "                  `.----------:::/++oooooooo++++oooooossssssyyyyysssoo+/::::://++++oooooooooooooo++++++++++++++////+++ooosshmNNNNNmo.` `                                                    " << endl
			<< "                   ``.---------::://///+++ossssyyyyyyyyyysssssoooo+++//::::://++++ooooooooooooooo++++++++++++++++++ooososhmNNNmNNNdo:.`                                                     " << endl
			<< "            ```      `.----------:/++++++++++oooooooooooooooooooo+++//:::::///+++oooooooooooooooo++++++++++++++++ooosssdmNNMNNmNNmdho/-``                                                   " << endl
			<< "                      `.-----------://+++oooooooooooooooooooooo+++++////////++++ooooooooooooooooo++++++++++++ooooosshmNNNNNNNNNNNmddhs+/.`                                                  " << endl
			<< "       ` ``            `.----------:::///++++++++oooooooooooo+++++++/////++++ooooooooooooooooooo++++++++++ooooossydmNMMNNNNmmNNNNmmmdhys+:.`                                                " << endl
			<< "      `````            ``-:::--::::::::////+++++++oooooooooooo++++++++++++oooooooooooooooooooooooo++++++ooooosshmNNNNNNNNmmmNNNNNmNmmdhyyo:.`                                               " << endl
			<< "      `````            `./+:::::::::://////+++++++ooooooooooooooo+++++ooooooooooooooooooooooooooo++++oooooosydmNMMNNNNNNNmNNNNNNmmNNmmdhyyo:.                                               " << endl
			<< "      ``..`            .:/:.-///////////++++++++oooooooooooooooooooooooooooooooooooooooooooooooooooooooosyhmNMMMMMNNNNNNNNNNNNNNmmNNNmmdhyyo:.                                              " << endl
			<< "       `...``       `.://.```./+++++++++++++oooooooooooooooooooooooooooossssssssssooooooooooooooooooosyhmNNMMMMMMMNNNNNNNMMNNNNNmmNNNmmmdhys+:.                                             " << endl
			<< "        `.---.````.-/++-`     `:+oooo+ooooooooooooooosoosssoosssssssssssssssssssssssssssssssooossosyhdmNNMMMMMMMMMMMNNMMMMMNNNNmmmmNNNmmmdhys+-`                                            " << endl
			<< "         ``.--:::///:.``       `.:ossoooooooooossssssssssssssssssssssssssssssssssssssssssssssso+:+ymmmNNNNMMMMMMMMMMMMMMMMMMNNNmmmmmNNNmmddyys+-`                                           " << endl
			<< "              `````              `./ossssssssssssssssssssssssssssssssssssssssssssssyssyyysso/:.`.+hmmmNNNNMMMMMMMMMMMMMMMMNNNNNmNNmmmNNNmmdhyys:`                                           " << endl
			<< "                                   `.:+syyyysyysssssssssssssssyyyssyyyyyyyyyyyyyyyyyyyyo+:-.`  `:ohmmmNNNMMMMMMMMMMMMMMMMMNNNNmNNNmmmNNNmmdhyyy+-`                                          " << endl
			<< "                                    ```-:+syyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhhhhys+-``     ./sdmmmNNMMMMMMMMMMMMMMMMMMNNNNmNNNNmmmNNNmmdhyyo:`                                          " << endl
			<< "                                   ``````.-:+syyhyyyyyyyyyyyyyhhhhhhhhhhhddddddddddhhyys+.     -+ymmmmNNMMMMMMMMMMMMMMMMMMNNNmmNNNNmmmNNNmmdhyys/.`                                         " << endl
			<< "                          ``..---:::///++++osyhhdmmdddddhhhddddddddddmmmmmmmmmmmmmNmmmmds:`   `:ohmdmmNNNMMMMMMMMMMMMMMMMMNNNmmNNNNmmmmNNmmdhyys+-`                                         " << endl
			<< "                 `````..-:/++ooosssssssyyyyhdmNNNmmNNmdhhhddddddmmmmmmNNNNNNNNNNNNNNNNmdho-`  ./shmdmmNNNMMMMMMMMMMMMMMMMMNNNmNMMNNNmmmNNNmdhhys+-`                                         " << endl
			<< "             ``.-::///++oossssssyssyyyyhhdmmNNNmmmmmmmmddddddddmmmmNNNNNNMMMNNNNNNNNNmmmdy+.  -+ydmdmmNNNMMMMMMMMMMMMMMMMMNNNmNMNNNNmmmmNNmdhhys+:`                                         " << endl
			<< "           `.:+++oo+oossssssssssssyyhddmmmmmmmmmNmNNNNNNNNNNNNNNNNNNNNMMNNNNNNNNNNNNNNmmmdhs:.:oydddmmNNNMMMMMMMMMMMMMMMMNNNmmNNNMNNNmmmNmmdhhys+:.`                                        " << endl
			<< "         `./oooooooosssssssssysyyyhdmmmmmmmmmmmmNNNNNmmNNNNNMMMNNNNNNNNNNNNNNNNNNNNNmmmmmdddhyssydddmNNNNMMMMMMMMMMMMMMMMNNmmNNNNNNNNmNmmmmdhhys+:.`                                        " << endl;

		break;
	case 8:
		fontSize(10);
		std::cout << "                                                         `      ..      ` `                   " << endl
			<< "                                                         .``.```:. ````.`.`````                     " << endl
			<< "                                                      ``.-`./:-++..-.---/----````                   " << endl
			<< "                                                   ``..-::-/s+oh+-o//o+s+/o/:.-:.`````              " << endl
			<< "                                                ````---:+++ohsdh+sy+yyhysyso/+o:::.-.``             " << endl
			<< "                                               ``...//++yyshdhmhsmyhdmdhdhhhhhoo++::-.`````         " << endl
			<< "                                               `..::+ossddhmmmNdmmdmmmmmmmmmmhhhyo+:.....``         " << endl
			<< "                                             ```.-/+oyyhmmmNNNNmNNNNNNNmNNNmmmmdhs+/::..```         " << endl
			<< "                                              .`.:/oyhdmmNNNNNNNNNNNNNNNNNNNNNmdyso+/---.`          " << endl
			<< "                                              ``./+shddmNNNNNNNNNmmmNNNNNNNNNmmddhyso+/-.``         " << endl
			<< "                                               .`-oyddmmNNNNNNmNmmmmNNNNNNNNNmmmmhhso//-..````      " << endl
			<< "                                               ``.+ymmNNNNNNNNNNmNNNNNNNNNmNNNmmmdyso+///:-.``      " << endl
			<< "                                               ``.+ymmNNNNNNNNNNmNNNNNNNNmNNNNmdddhyyso/:-..`       " << endl
			<< "                                                ``/ymNNNNNNNNNNNNNNNNNNNNNNNNNmmmmhhys+/-..`        " << endl
			<< "                                                . /hmNNNNNNNNNNNNNNNNNNNNNNNNNmmmdhyo/:-.```        " << endl
			<< "                                                ` :hmNNNNNNNNNNNNNNNNNNNNNNNNmmdhyo/:-..```         " << endl
			<< "                                                ``:hmNNNNNNNNNNNNNNNNNmmNNmmmmdyo/:-.```            " << endl
			<< "                                                 `:dmNNNNNNNNNNNNNNNNmmmNNmmmh+:.````               " << endl
			<< "                                                 .:dmNNNNNNNNNNNNNNNNmmmmmmds-`                     " << endl
			<< "                                                 .:dNNNNNNNNNNNmNNNNmmmmmmh/```                     " << endl
			<< "                                                 .:dNNNNNNNNNNNNNNNmmmmmmy- ``                      " << endl
			<< "                                                 ./dNNNNNNNNNNNNNNmmmmmmo```                        " << endl
			<< "                                                 ./dNNNNNNNNNNNNNmmmmmd/ ``                         " << endl
			<< "                                                 ./mNNNNNNNNNNNNmmmmmh:` `                          " << endl
			<< "                                                 `/mNNNNNNNNNNNNmmmmy-```                           " << endl
			<< "                                                  /mNNNNNNNNNNNmmmms.``                             " << endl
			<< "                                                  omNNNNNNNNNNmmmms.``                              " << endl
			<< "                                                 `ymNNNNNNNNNmmmmo```                               " << endl
			<< "                                                 `hmNNNNNNNNmmmd+``                                 " << endl
			<< "                                                 .dNNNNNNNNNmmd+.`                                  " << endl
			<< "                                                 -dNNNNNNNNmmm+-`                                   " << endl
			<< "                                                 /mNNNNNNNNmmo.                                     " << endl
			<< "                                                 +NNNNNNNNmmo.                                      " << endl
			<< "                                         `.--:/:-sNNNNNNNNmy.                                       " << endl
			<< "                                       `/yyyyyhhhdmNNNNNNNm+:-.`                                    " << endl
			<< "                                     `:syyyhhhyhhhhhddmmdhhhhhys-                                   " << endl
			<< "                                     -yhhhhhhhhhhhhhhhhhhhhhhhhhy/                                  " << endl
			<< "                          ``.-:+o++/::hdhhhhhhdhhhdmmddddhhhhdddho`                                 " << endl
			<< "                      `.:+syhdmmmmNNmmNNNmmmmmmmmmNNmddmmdddddmdds`                                 " << endl
			<< "                   .:+shdmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmmdo`                                 " << endl
			<< "                `./syhdddmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNMNNNNNNNNmdys+/:.`                           " << endl
			<< "               .+yhhhhhddmmmNNNNNNNNNNNNNNNNNNNNNNNNNMNNNNNNNNNNNmmdhyyyys/-`                       " << endl
			<< "             `-sdddhhhhdddmmmNNmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmNmmmdhhyyhhddy+-`                    " << endl
			<< "            `/hdmmmdhhhhdddmdmddmmmmmmmNNmNNNNNNNNNNNNmNmmmmmmmdmddddhhyhhddmmdy:`                  " << endl
			<< "           `odmmNNmmmmmmmNNNmmmmmmmmmmmmmmmmNNmNmNmmNmdmdmddddddddhddhddhdmmmmmmdy:`                " << endl
			<< "         `:smmmNNNNNNNNNNNNNNNNNNNNNNNNNNNmmNmmmmmdNmddmmdddddddmmddmmdmmmmmmNmmmmds.               " << endl
			<< "       .+shdmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmNmmmNNmmmmmmmmmdmNNNNNNNmNNNmmmmmy.              " << endl
			<< "     `/hhhhhhddmmmmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmNNNNNNNNNNNNNmmmmms`             " << endl
			<< "    `oddhhhhyhhhhddddddddmmmmmmNmNNNNNNNNNNNNNNNNNNNNNMMMMMNNNNNNNNNNNNNNNNNNNNNmmmmmd+             " << endl
			<< "   .smmddddhhhhhhhhhhhhhhhhhhhdddddmmmmmmmNNNmNNNNNNNNNNNNNNNNNNNNNmNNNNNNNNmNNNmmmmmdd.            " << endl
			<< "  `ommmmmmdddddddddhhhhhhdhhhhhhhhhdhddddmdmmmmmNmmmmNNNNNNNNNNmmmmdmNNMNNNNNNNmmmmmmdd+`           " << endl
			<< "  :dmmmmmmmmmmmmmmmdmmddddddddddddddhdhhhddddddddddddmmmmmmmmmmddddmmNNNNNNNNNNmmmdddddy`           " << endl
			<< " `smmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmddddddddddddmddmdmmddmmmmdmmmNNNNNNNNNNNNmmmdddddy.           " << endl
			<< " .dmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNmmmNmmmmmmmmmmmmmmmmmmmmmmNmmNNNNmNNNNNNNNNNNNNNmddddhy-           " << endl
			<< " :mmmmmmddddmdddmmmmmmmmmmmmmmmmNNmmNmmmNmmmmmmmNNNNNNmNNNNNNNNNNNNNNNNNNNNmmmmNNmddddhy.           " << endl
			<< " /mmmdysoosyyyyyhhhhhhdddmmmmmmmmmmmmmmmmmmmmmmmmNNNNNNmmmNNNNNNNNNNNNNNmmNmmmmmmmddddhs`           " << endl
			<< " ./ohs:/oyhdddmmmmddhs++ossyyhhdhddddddmddddddmmmmmNNmmmmmmNNNNNNNNNNNNmmmmmmmddmmmdddd/            " << endl
			<< "   -ds-/::::::/+ossso+::::://///+oyyhhhhhhyyhhddddmmmmmdddmmmmmmmNNmmNmmmmmmmdddddmmmdy`            " << endl
			<< "   :my:------:::::----------:::::+yhddmmmmmddhysssyhdhhhdddmddmmdmmmmmmmmmmmmdddhdmmmh-             " << endl
			<< "   :mh:----:::::/++/----.------:::::://+oossyyhhhhso++++oosyhhddddmddddddddmmdddhhmmd:              " << endl
			<< "   :dh-..::.```+sydhy/-...------::::::::::::::::/+osso///////++oosyyhhddddddmdddhhmd:               " << endl
			<< "   -dh-.:/````shy:ymmh+....----::::::///++++///::::::///:://///////+++oyhdddmdddhhd+`               " << endl
			<< "   .hh-.--```-yydNNNNmy:...----::::/oooyhhdddhy+/::::::::::::::///////+oyddddhhhyo++:.              " << endl
			<< "   `hy-..-.```ohhmmmmhh/...----:::/++/yhh+ymmddd+//:::::::::::::::////+oyddhhhso/////.              " << endl
			<< "   `yo.......`.+yhhyhhs:..-----:::/+::hhdNNNNmhdo-:/::::::::::::::///+osyddhs+/////o:`              " << endl
			<< "   `o:......--..-:///:-..-----:::://..ohhdmmdhhh:---//::::::::::::///+osydds/+++++/.                " << endl
			<< "    /--.......-------...-----::::::/-../yhhyyys:.----/::::::::::////++ossdh++++++-`                 " << endl
			<< "    -.-----...-------...----------:::-...-:::-..----://:::://///////+oo+ymy/+o+:`                   " << endl
			<< "    `.--------.--.......----------------------:::::::::////////////+oo+/hds+o+-`                    " << endl
			<< "    `-.----.-.............-::/::------------------:::::://////////++o/:/dds/:`                      " << endl
			<< "     :----------......--.--::///-----.---------:::::://////+++///++o/--+mdo.`                       " << endl
			<< "     -s:----------....--::::////-----.-------:::::://////+++++///++/-` /md/                         " << endl
			<< "     `oo.---:::::----.---::////:-------------:::::///////+++//////:.   /md/                         " << endl
			<< "  `-`.s:  `.--:::/::-------:::::------------::::::///////////////-`    /mh:                         " << endl
			<< "   .:-.      `.--:::---------::::::::::::::::::::://///////////:`      :mh-                         " << endl
			<< "                `..---::::::::::::///////::::::::://////////::.`       -mh-                         " << endl
			<< "                   ``.-:://////////////:/:::::::://///////:-.`         -dh-                         " << endl
			<< "                      ``:+/////:::::::::::://////////+++o+-           :/mh.                         " << endl
			<< "                      `-ydhyso++/////////+++ooossyyhhhhhyy+.          -ods`                         " << endl
			<< "                     `.sdddddddyssssyyyhhhddmmmmmmmmmdhhyo++`          :d+                          " << endl
			<< "                    ./:sdddddmyyyyhddddddddmmNmmmmdhhhhyso+-           /h-`.                        " << endl
			<< "                   `-/syddhddmssssyyyhhhdmmmmmmmdddddhyso++.           `o+:`                        " << endl
			<< "                  `///oyyhhhddoosyhhdddmmmmmmmmdhhhyyyyys+::`                                       " << endl;

		break;
	case 9:
		fontSize(7);
		std::cout << "                                                                                                           ``````````.`````````````                                                                " << endl
			<< "                                                                                                      ````........------......----..``                                                             " << endl
			<< "                                                                                               ``````.......----------...-----:::::--.`                                                            " << endl
			<< "                                                                                          ``````...........-------....------:::::::---...``                                                        " << endl
			<< "                                                                                       ``````.........---..----....-------:::::::::-----.-...`                                                     " << endl
			<< "                                                                                    ````............-------......-----::--:::--:::-------::-...```                                                 " << endl
			<< "                                                                                `````...........---------......------------------------::::-----...``                                              " << endl
			<< "                                                                             ```````...........-------.........-------------::--------::/::----:----..`                                            " << endl
			<< "                                                                           ``````...........--------..........---------------::------:://::----:::--::-.`                                          " << endl
			<< "                                                                ```````````````...........--------............--------------------:-::///:-----::::--::::.`                                        " << endl
			<< "                                                               `...---....`.............--------..`.....---..-----------------------:///:-----:::::::-://:.`                                       " << endl
			<< "                                                              `..---::::----.......-....-------.......-----.-----------------------:////:-----:::::::-::///-`                                      " << endl
			<< "                                                           ```.---::::::::::::---.....------............--..---------------------::////:------::::::::-::++/-`                                     " << endl
			<< "                                                        ```....----::::///:///:::----------............---.-----------------::--:::////:------:::::::::--/+/:-`                                    " << endl
			<< "                                                  ```........----:::::::://///////::-----..........-----------------------------::////:------::::::::::--:///:.                                    " << endl
			<< "                                                ``..-----.----:::::::::::////+++///:::::------------------------------------::::::///::------:::::::::::--:///:`                                   " << endl
			<< "                                               ``...-------:::::::::::/:::://///////::::::::::::::::::-----------------------::::///::-------::::::::::::--:///-`                                  " << endl
			<< "                                               ``.-----:::::::::::::::::::////::::::::::://///////////::::::::-----------::-:::////:::-------:::::::::::::--:///.`                                 " << endl
			<< "                                              `````...--:::::://///////::////::::::::::::::////////////////:::::-----::--:::::////:::--------:::::::::::::---://:.                                 " << endl
			<< "                                             ````````....-:::::///////////:::::::::::::::://:://///////////////:::-:::::::-:::///::::---------:::::::::::::---/+/.`                                " << endl
			<< "                                           ```````.........---::::///////:::::::::::::::////:///////////+++//////////:::::::::///::--------::::::::::::::::---://:.                                " << endl
			<< "                                         `````````............--::::::::::::::::::::::://::/:///////////++++++++++/+/////////////:::---:---::::::::::::::::--.-///-`                               " << endl
			<< "                                   ``  ```````````...............---:::::::::::::////////:://///////////////+++++o+oo++++++++++///:-----:----:::::::::::::::--.///:.                               " << endl
			<< "                                `..-.``````````.....``.........-..---------:::::::://///////////////////////+++++++++oooooo+++++/::::::::::::::::::::::::::::-.:++/-`                              " << endl
			<< "                               `.----...``````.................-..-.......------::::///:////////////////////++///++++++++oosoo++++////:::::::::::::::::::::::-.-/+/:.                              " << endl
			<< "                               `.-------...................-..............----------:::::///////////++++////////++++++++oooossooo+++++++////:::////::::::::::-..:///-`                             " << endl
			<< "                              ``.--:::::-----.............---..........-------------------::///////////////+///++++++++++ooo++///+/+++++++++++/////://///::::--`-/+/:`                             " << endl
			<< "                             ``.---::::::::::--------..-------.-.......--------------------:::::://////////////++++++++o+++++/////////++++oooo++++////////:::--.-/++/.`                            " << endl
			<< "                             `.------::::////::::::::------------...--....-----------------------:::://///////////++++ooo+++//+///+/////+++++ooooooo+++///::::-..:+++:.                            " << endl
			<< "                          ```.-------:::::::::////:///::::::::-------------------------------------------::::::////+++++++++++++++//////+++++++ooosooooo++///::-.-/o+/.`                           " << endl
			<< "                       `....-------:::::-:::::::::::////////:::::::-----------------------------------------::::::///++////////////++++++++++++oooooooooooo++++/:::///:.                           " << endl
			<< "                      `.-:--------:::::--:::::::::::::::///////////:::::::--------------:----------------------:::::::////////////////+++++++++++oooooooo+++++++//::://:.                          " << endl
			<< "                    ``.--------::--:::-:::::::::::::::::::::::://///////////::::------:::-----------------------:::-::::--:::::::////++++++++++++oooooooo+++++//:::/+o++/:.`                       " << endl
			<< "                    `.--------::::::::::::::::::::::::::::::::::/:://///+++++//////::::::::::--------------:----::::::::--::-:--:::::///+++++++++++o+++oooo++++/:::/oooooo+:-``                    " << endl
			<< "                    `..------::::::::::::::::::::::::::::::::::::::::///////++++++++/+/////::::::::::::-:---::--::::----:::--:----:::::::://++++++++++++++++++++//++++oo+/+o+/:.`                  " << endl
			<< "                     ``.-----::::::::::::::::::::::::::::::::::/::::://////////////++o+++++//////:::::::-----::-:::::::-:----:::----::::::://////+++++++++++++/////::+ooo+::/++//-.`               " << endl
			<< "                     ```......--::::::::::::::::::::::::::::/:::::::://///////////////++++++++++//////:::::::::::-:::::-------:--:::::::::://///////////////////::://++oso+--:++++/:.`             " << endl
			<< "                    ```.............---:::::::::///:::::://:::/:///:////////////////://////+++oo++++++++////////:::::::::--:--:::::::::::::///:////////:::::::::----:+/osoo/-``-++++/:`            " << endl
			<< "                    ``````................---:::::/:::::::::::::///////////////////////++/+/++++++++++o++++++++/////::::::::::::::-:::::::::::::://///////::::::-----::/+oo+:.``.-:///-`           " << endl
			<< "                   ```.```.....................----::::::::::::::::/:////////////////////////////+//++++++oooooo++++///////:::::::-::::::::://::::::://///:::::::--..-::::+++-`   `...`            " << endl
			<< "                   ```.................----.........-----:::/::////::://////////////+/+/++/////++////+++/++++++ooo+oooo+++///////////::://::/::////://///////::::---.-://-:++:.                    " << endl
			<< "                  `````.....`...........---...---.----..-------:::::://///////////////////+////++//++/+/++++++++++++ooooooooo+++++++++/////////////////////////:::--..:++/.-:-`                    " << endl
			<< "               ```````....`...................---...------.---------::::://////////////////////+++++++/++++++++++++//+++++ooooooooooooo++++++++++////////////////:::-:/++:```                      " << endl
			<< "              `......`...````...................-.....----..--------------:::///////////////++++//+++++/++/+++/++++//++++++++++oooooooooooooooooooo+++++++++++++++/////:-.`                        " << endl
			<< "             ``.----.........................................------------------:-:::://://///////+++++++++++++++++++++++++++++++ooooooooooooooooooosooooo+++++++////::-..`                         " << endl
			<< "              ``.---------...............................-.--------------------------::-:/:////+/+/////++++++++++o+++++++++++o+++ooooo+ooooooooooosoooooooo+++++///::..```                         " << endl
			<< "               `.-::::::::-------.............-..-.......-..---.----------------::--:----:--:::/:////+//++++//+++o++++++++++++ooooooooo+oooo++oooooooo++++++++++//::-....`                         " << endl
			<< "               `.--::::::::::::::::-----.......---------..--....---------------------------::::::::::://///++/+//+++++++++++++oooooo++oo+oooooooooooo++o+++++++///::-.-::.`                        " << endl
			<< "              ``.----:::::::::////:::::::::------..-----..---------------------------------:::::::::::-:::::////++++//++++++++++o++o+++oo+++ooooooooo++++o+++++///::--:/:.`                        " << endl
			<< "             ``..----::::::::::::://///////:::::::------...-----------------------------------::::-::--:::::::::::////+++++//+/++/+++++++++++oooooooooooooo+++++///::/++:.`                        " << endl
			<< "            ``.---::---:::::::::::::::::://////////::::::-::-------------------------------:---:-:--::-:::::::::::::::///////++++++++++++++++++oooooooooooooooo++++++++:-`                         " << endl
			<< "            `..--::::::::::::::::::::::::::::///////////////:::::::--:----------------:--::----:-:--:::::::::::::::::::::::///////++++++++++++++++++++++ooooooooo+++/::-.`                         " << endl
			<< "            ``.------:::::::::::::::::::::::::::::////////+/////////::::::----:-----------:----------::::::::-::::::::::::::::::/://////+++++++++++++++++++++++++//::-.`                           " << endl
			<< "              `..---:::::::::::::::::::::::::::////////////////+++++//////::::::::--------:---:-:-:::-:-::::::::::::::::::::::::/:::::::///////////++++++/+//////::--.`                            " << endl
			<< "               `.-::///::::::::::::::::::::::::////:////::::///////++++++///////////::----:-----:--::::::::::::::::::::::::::::::::::::::://:::::::///////:::::::---..`                            " << endl
			<< "               `.-:/os+///////:::::::::::://::://:::://///:///////////++++++++++++++//////:::::----::-:::::::::::::::::::::::::::::::::::::///////:://::::::::::----..`                            " << endl
			<< "               `.-:+os::::////++++///::::::::::://:///////////////////////+++++++++++++///////////:::::::::::::::::::::::::::::::::::::::::///:///:::/:::::::::----...`                            " << endl
			<< "               `.:/+oo-----::+oss+///////////:::::::///////////////+///////++++/++++++++++++++++/++//////::::::::::::::::::::::::::::::::::://:::::::::::::::::----..``                            " << endl
			<< "               `-:/oo/....---/ss+::::///osooo+++//:///////////////++//++/+/+//////+++++++++++++oo+++++++++++//////:::::::::::::::::::::::::::/::/::::::::::::------..````                          " << endl
			<< "               `-:/oo-......-:+/-...--::sssoo/hdhyyo+////:/::::////+//++//+///////++///++/++++++o+++oooooo+++++++++//////:::::::::::::::::::/:::/:::::::::::::------...-.`                         " << endl
			<< "              ``-:+o+........-::.`````.:ysssssmNNNNhs+++//////////////////++////+/++/++/++/+++++++++o+o+ooooooo+++++++++++///////://::/:::://:::::::::::::::::::----.-:-.`                         " << endl
			<< "              `.-:oo/.........-:-``````.ssssydmmmmdhyo++/////////////+//////////+++++++++++++++++++++++++++oooooooooooo+++++++++++///////////////::::::::::::::::::::/:-.                          " << endl
			<< "              `.-/s+:.........--:-.`````/syssyhhhhyyyyo///////////++++++++//////////++++++++++++++++++++++++++oooooooooooooooooo+++++++++++//////////////////////////:-.`                          " << endl
			<< "              `.-/o/...........--::-.```.:osysssssyyhyo/::///////////+++++++++++++++++/++++++++++++++++++++++++++ooooooooooooooooooooooo++++++++ooo++++++oo+++++///::-.`                           " << endl
			<< "               .-/o:........--.----:::-...-:+ooooossoo+::::::////////++++++ooosoo++ooo++++++++++++++++++++++++++o+ooooooooooooooooooooooooo+++++++++++++++++////:::--.``                           " << endl
			<< "               `-//-.........---------:::::--::::://++/----:::://///++++++osssoo+++oyyssooysoo++++++++/++++o+oo++ooooooooooooooooo+ooo+ooo++++++++++++++++//////:::---.`                           " << endl
			<< "               `.::-...........-----------::::::::::-------:::::////+++++ossso++//+ohyysosNNmmdhssoo++++++++++++oooooooooooooooooooo++++oo+++++++++++++++///////:::--/:.`                          " << endl
			<< "                `--..............-------------------------::::://///++++osyyo+///:/+yyyhhdmmmmdhhyyyo+ooo+++++++++++ooooooooooooo+oooooo+++++++++++++++++///////:::://:-`                          " << endl
			<< "                 ...............-.---------------.....---:::::://///+++oosyyo+//:::/ohhhhhdddhhyyyys+/+sso++++++++++++++++++ooosooooooooo+++++++++++++++++/+++/+++///:-.`                          " << endl
			<< "                  `................------------.....----::::::////////++oosyso//:::::oyhhhhyyyyyys+/://+sso++++++++++++++++++++++ooooooooooooooooooooooo+++oo+++///:-.`                            " << endl
			<< "                  `..................-----------..----::::::://////////+++++oo+/:::---/+osyyysso+/:::://sso++++++++++++++++ooooo+++++++++o+++++++++++o++++++///:::--.``                            " << endl
			<< "                   `.............--------------------:::///+++/////////////:::////:::----::::::::::://+osoo+++++++++++++++++oosso++///++//++++++++++///////::::---..`.```                          " << endl
			<< "                   `......--------------------.-.....---:://++ooo+////////:::::::::////////////+++oooooooo+++++++++++++++++++osss+//////////////////::::::-:-----...---.``                         " << endl
			<< "                   `....--------------------..........---:://+ossso+/::::::::::::::::::://///++++++++++oooooo++++++++++++++++oosso/////:::::/:::::::::::::-------..-://:--..```                    " << endl
			<< "                    `..------::::-------............-----:://+oossso//:::::::::::::-::::::://////++++oooooooooooo++++++++++++oosss+//:::::::::::::::::::--------..-:/++//:-.``                     " << endl
			<< "                    `..----::::////:----.......-...-----::://+++ooso+/:::--------------:::::::://////+++oooooooooo++++++++++ooosyyo//:::::::::::::::::----------..-/++/:-.```                      " << endl
			<< "                     `.---:::://++++/:--.......-------::::////+++ooo+/:::---------------::::::::::///////++++ooo++++++++++++ooosyyy//:::::::::::::::::----------..-/+/:-.```                       " << endl
			<< "                      `.--::::///++++/-.........---::::::////++++++++//::--------------::::::::::://///////++++++++++++++++++oosyyy+//::::::::::::::::----------.-://:-...``                       " << endl
			<< "                       `.---:::::////++:.........---:::///+++++++++++//::--------------::::::::::://///////+++++++++++++++++ooosyyhs+/::::::::::::::::::--------.-://:-.```                        " << endl
			<< "                        `.---::::::::/+s/-........---::///+////////////:::-------------::::::::::////////+++++++++++++++++++oossyyhy+//::::::::::::::::--:------.-/+//::--.```                     " << endl
			<< "                         `.-----------:+ys+-.......----:://////////////::::::---------::::::::::///////////+++++++++++++++++oossyyhho+/:::::::::::::::----------.-/++//:::---...``````             " << endl
			<< "                         ``.-----------:oyys/-.....------:::////////////::::::::::::::::::::::://///////////////+++++++++++ooossyyhhy+/::::::::::::::-----------.-:/+//:---...````                 " << endl
			<< "                         ``.------------:+shy:..-----------::::///////////:::///::::::::::::::://////////////////+++++++++ooossyyyhhys/:::::/::::::::::::::------://////:-.`````                   " << endl
			<< "                          `.-::-.---------/osho::------:----:::::::///////////////+++/::::::::///////////////////++++++++oooossyyyhhhyo/::::::::::::::::::-------:/+/:::::-.``                     " << endl
			<< "                          `--::.`..--------:/oyo/-------:::::::::///////////++ooyhddyo//::::::///////////////////++++++++ooossyyhddddhs/::::::::::::::::-:-------:////::----..``                   " << endl
			<< "                          `-:::.` `.---------:/++/::--:/o:-----:::::::://+//+oydmmhso++//::::////////////////////++++++oooossyhhhhdhhhy+/::::::::::::::-:--------:://::::--...```                  " << endl
			<< "                          `-:/:.`   `.---------::///:::://///++ooss//:::/o++oyhdyo++++//::::////////////////////+++++++oossyhhhhhhhhhhys/:::::::::::::::::::-----:/::::--.......```                " << endl
			<< "                          `.:/:.`     `.----------::://///////+oo+++ooooyhhhysso+//////:::::///////////////////++++++oosyyhhhhhhhhhhhyyy+/::::::::::::::::::----:////::--.````````                 " << endl
			<< "                          `.-:-.        `..---------:::::///++oooosssyyyysoo++/////////::::://////////////////+++++oosyyyyyhhhhyyyyhyyyyo/::::::::::::::--:-----:/+++/::--.```                     " << endl
			<< "                         `.--/-`           ``--:::::::::::::://///+++++////////////////::::////////////////++++++ossyyyyyyyyyhyyyyyyyyyss//:::::::::::::::-----.--::///::--..``                    " << endl
			<< "                         `.--/.`              `.-:::::::::::::::///////////////////////////////////////++++++oooossssssysyssyyyyyysyyysss+//::::::::::::::-----....----:::--..```                  " << endl
			<< "                         `.-:/.`             ``..-:::://:::::://////////////////////////////////////++++oooo++ooooossssssssssyyyyssssssoso+///::::::::-:::-----...``..........``````               " << endl
			<< "                         `.-::.            ``..---:--:///////////////////////////////////////++++++oossyhhhys+++++ooosoossssossssssssssooo+///:::::::::::::-----...````````                        " << endl
			<< "                          `--:.            `..-----..-:++sssoo++/////////////////////+++++++ooossyyyhhhhhhhhhyo+//++ooooooooooosssssosso++++/::::::::::::::::---....``  ````                       " << endl
			<< "                          `-::.`         ```..-::-...--/ossyyyyysssssoooooooooooooosssssssyyyyyhhhhhhyyyyyyhyhys+:::/+oo+oo+oo+ooooooooo+/++//::::::::::::-----....````                            " << endl
			<< "                          `-::.`       ```...----....--:+oossysooosssyyyyyyhhhhhdddddddhyssyssyyyyyyyyyysyyyyyyys/-..-:++++++++++++//++o+:-:///:::::::::::----.`````````                           " << endl
			<< "                          `.-:-`      `.....----.....-:://++ooo+ooossssssyhhhhhhhhhhhhysssssssssssssssssssyyyyyyys/-.`.-:///://////---:/+:..-:::::::::::::-----`                                   " << endl;

		break;
	case 10:
		fontSize(7);
		std:: cout << "                                            ``....``   ` `-++ooossoosssssooooyhs++oo++ooo+++++++//:-.`     " << endl
			<< "                                        `.:+ssyyyyso/-..``-/ooooossoossysssosyhyo+os++osooooooo+o++o++:`        " << endl
			<< "                                       ./+osyyyysyys+/++/++++oosoosoosyyyyyssyhyoossooossoooossosooooo+/.`     " << endl
			<< "                                     `-+++ossshhhyso++ooo+oo++ooooosoossyyyssyhyooyysooysosssyysossso++++:.`   " << endl
			<< "                                    `./o++oo+/ooossooooo+/+o++o++++ooso+oyhyssysossysosyssyysyysssysoosoo+:-.` " << endl
			<< "                                    `:+++++oo+++osyhysooo++oooooooooosssyyhhyysoosyysossssssossosyyosyoo++++:.``      " << endl
			<< "                                  `.-/+++++oosssyyhdddyssoossossssosyssyhhhhhysooossoooosssoosssyyooo++++++//:--`       " << endl
			<< "                                `.:////++oooosyyhhhhhdhyssoossyyyysyhyyhhhhhhys+ooso++ooooo+ooooysoo+++++o+++--:.`       " << endl
			<< "                               ``./++++++ooooossyyyhhhyssssssssyyhhyhhhhhhhhhyo+ooo+/++oo+++ooooyyssso+oooooo//:..`      " << endl
			<< "                               `./////++ooossyyssyyyhhhhyssssoshdhhhhdhhdhddhys+osoo+++oo+/+oo+shyysssssoooss++/:.    " << endl
			<< "                              ``-/////++oooosyyhhhhhyyyyyyyyyyyhddhhhdhhddddhhsoshyssosyso++ooshhyyyyyyssyysooo/-.    " << endl
			<< "                              `.-::+++++oosssyyyyyssyhyyyyyyyyhhhddddddhhdmddhysydhyyyyhysosysyhhhhhhyyhhhysso+:-.`    " << endl
			<< "                              `.--/+++++ooosyyyssssosssssyhhhhhhdddddddmddmmddhyhmdhhhddhyssyhdddhhhhhddhyyysss/-.   " << endl
			<< "                               `-//+++oooossoossoooooooooooyhhhhhdddhhhhdmmdddddmNmddmmmdhyhhdmddhhhhhhhhhhyyys+.     " << endl
			<< "                                `::/+oooosssoooooo++++o+ossyhdddddhhyyssshddhhhhmNNmmNNNmdhddhddddhhyhhhhhhyyyyo. ``  " << endl
			<< "                                 `-:/++ooooooo++o++++ossyyhhhdmdddhyssoo+oyhssyyyddmmmmmmddmmdhddhhhhyyhhhhddhhyo:.    " << endl
			<< "                                `.-:+++oooooo++//+oossyyyhhhhddmddmho+++++ossoososyhmmmmmmmmmmddddhyhyyyhdmddhyyss+.`   " << endl
			<< "                              `--:++++ooooooo+/+++oyyyyhhhdddddmddmms+++++osoooo+oydmNmmmmmmmddhhhyyyyysydmmdhhhyyys+-   " << endl
			<< "                             .::/oossssoosyyo++ooosyhhhddddmmddmmdddyooosssyyysssshmmmmmmdddhyyhdhysssoosydhhhhhyyyyso-     " << endl
			<< "                            `--/oosyso++osydhyossssyydddmmmmmddddddhysosyhyhddhhhhdmmmhhyyyysssyyysyysssosyyyyyyyyysso+-     " << endl
			<< "                            `:/+oo+//+ossooosyyssyyhhddmmNNmdddddddysosyhdhhmNmdhhhhhhyyyhhyyyyssyssyyyyyssssyyyyysso++/`     " << endl
			<< "                           ``-/+++++oooooo+++osyyyhhdmmmmmmdhddddhhyssyhhhyhhhddhyyyyhhhyyyhhyyyssssssyyssyssssyysssso+/.`    " << endl
			<< "                            `.:/+++++ooooooooosyyhhhdmmmddhhhhhhhhyssyhhhyyhyyhhhyysyyyyyysyhhyysssssssyysssssssyyysyysso+/-`       " << endl
			<< "                            `.-:/+++oooooooossyyyhhddddddhhhhhhhysssyyhhhssyysyhhyyssyyyyyyshhysssssssssyyssssssssyyysyyyssso/-`   " << endl
			<< "                              `.:///+++oooosyyhhhhddddddhyyyyysyyssssyyyyyssyyyyhyyyssyyyyysshhyssssosossyyssssssyyyyysyysssssso/:.     " << endl
			<< "                               ``-/++ooosssssyysssyhdhyysssyyssssssssyyyyyssssyyyysssssyysyssyhhsssssosossyysssyssyyyyysyyssyssssso/-`   " << endl
			<< "                                ``.-/+++oooosssssoossyyysssyssssossssyyssysosssyyyssysosyssysshhyssssoooosssssoyyosyyyyysyyssyyssssso/-`  " << endl
			<< "                                   ``.-://+sssossoooooyyossssssoossssyyssssoossyyyssssooysssssyhyssosoooosssssosysosyyyyysyyssyyyssssso/-``     " << endl
			<< "                                      ``-/oosooooooosyysoosyssoooossssysosssoossyssssyoosysssosyyssosooooosossoosyooyyyyyysyysyysyyssssso+-`    " << endl
			<< "                                       .:ooosoo+oosssyssoosysooooossssssoooooossssssossooysososssssoosooooooossosssosyyyyssyyysyysyysssssoo+:`     " << endl
			<< "                                      `-+osso+oososssssooosysooooosoosooooooooooosssosyoossoooossosoooo+ooooooooossoosyyyysyyyssyyyyssssyyooo/-`    " << endl
			<< "                                      .:+oooooosoosysssoooossoooooooossooooooooooossooss+osoooossooooooo+osoooo+oooosoyyyysyyyysyysyyssssyyooo+:.   " << endl
			<< "                                      .:+oooossoosssssoooooooooooooooosoooooooooooossooso+oooooosoooooo++ooooosooo+osooyyyysyyyssyyyyyysssyyooso:.`      " << endl
			<< "                                      .:+ooosssoosssssooooooooooooooooooooo+ooooooooooooo+ooooooooooooooooooooooooo+ssooysyssyysssyyyyyssssyyooso+-`   " << endl
			<< "                                      `-+ooossoossoossoooooooooooooooooooooo+ooo+++ooo+oooooooooooooooooooooooooooooooooooosoossoossossssssyysossso:.   " << endl
			<< "                                      `-+ooossoosoooosoooooooooooooooooooo++++oo+++ooooooooooosssssoossosyhhysssysyhsosssoosoooooooooooooooosysoosss/.    " << endl
			<< "                                     `-+o++syooooooooooooooooooooooo+++++++++++++++ooooooossssssssoosysosyhyyhosdyshysyyyysyyyyyyysoosooooo+oooooooys/.  " << endl
			<< "                                    .:+oo+ossooooooooooooooooooo+++++++++++++++oooooooooossooossssoosysossyyyyoshyshyosssssyyyyyyyysoosssssooo+++++ooo+-     " << endl
			<< "                                   `-/ooo+ossoooooooooooooooo++++++++++++++ooooooossoooossooooosso+oyyoossysyy+ohyshyosssoshsyysyyyysoossyyyooooo++++++/-`  " << endl
			<< "                                  `.:+ooo+osoooooooooooooo+++++++++++oooooooooooossoosoosoooooosoo+oysoossyshh+ohsshsosysoshsshoyhyysoooosyyyoooso+o++++/-      " << endl
			<< "                                  `-/oooo+ooooooooooooo++++o++++++ooooooosoooooosoooooooooooooooo++oss+ooosoyy+oyoshsoshs+shysyoyhyyysoooosyyssooso+oooo++:-`      " << endl
			<< "                                  ./+oooooooooooooooo+++oo++++++ooooooossooooooooooooooooooooooooo+oso+oooooys+ososyooshs+shyoosyyyyyssoooosysyy+osoooosoo++/:-`    " << endl
			<< "                              `  `:+ooooooooooooooooooo+++++++oooooossssoooooooooooo++ooooooo+ooo+++oo+++oooso+oooss+oyyoosysosysysysossooooyssho+oossosso+o++++/-.     " << endl
			<< "                             `   -+oooooooooooooooooo++++++++ooooosssssoooooooooooo++++oo+oo+++++++/++++++o+o++oooss+syo+osssosssyyyoossoosossoys+++oyooyoo+oo++o++:.`    " << endl
			<< "                            ``  `:+ooooooooooo++ooo+++++++++oooooooossoooo+o++oo+o+++++o++oo++++++//++++++o++++ooooo+ss+oosysooosyyyoossooysooosso+++ssosyso+ooooo+++:-`    " << endl
			<< "                            `   ./oooooooooo++ooo++++++++++++oooooossoooo+o++oo++++++++o++++++++/+++o++/++s+++++o+++osooooyhsooosssyoosys+syooosooo++ssooyyso+ooooo+oo+:.`    " << endl
			<< "                             `-+ooooooooo++oo++++++++++++ooooooosyoooo+++++o+++/++//+o++++++++++ooo++++os+++++o+++oo+++oyyoooosyssoooys+syoossooo+ossoosyso+ooooooooso/:.     " << endl
			<< "                               .:++/////+++ooo+++++++++++oooooooosysooooo++o+++///////++++oooooooossssssoss++ooo+++++++oossoooooyyssooyho+ossossoso+oyoossyyoooooooososyo//-`    " << endl
			<< "                              `-:-.....--:+o++++++++++++ooo+ooooosyooooooooo++/////:::////////+ooossssyyyyyysyyysoo++++oosooooooysso+oyyooossossoos++hsossyhy++ooososs+yyo+/:.    " << endl
			<< "                             `...--::------/+++++++++++oo++ooososysooooooo++//:::::::::::::::::////+++ooosssssyyyyyyssssssoooooyyss++ossoo+syoosooyo/ysossyyho+oooossyooyy+/+/-      " << endl
			<< "                             `.-:::--::::--:/++++++++oo+++ooossosso+ooooo+/::::---------------::::::////+++oooossssyyyyyyyyyyssysso+ossss+/sy++soohs/ssoooyyhs+oosossssooyy+/++:`         " << endl
			<< "                            `.::--..---:::::/+o+++++oo++++ossssoso++ooo+/:::------------------:::::::////++++ooooosssssyyyyyyyyyyysoossso+/oy++o+sys+ossoshyhy+++oossoyooshs++++/`  " << endl
			<< "                           `.::-...----::///++++++ooo+o++oossssooo++oo//::--------.----------::::::::///+++++oooooooosssssyyyyyyyyyyyhhyso+os++sooyo+osy+ohyhhoo+osossysssyho++oo/`      " << endl
			<< "                           .-:------:::://++o++++ooo+oo++osossooo++++/::-------...----------::::::://///++++ooooooooooossssssyyyyyyyhhhhhhhhysoysoyyoossooyhyhyo+oyosssssysyy++oso:    " << endl
			<< "                           .------::::///++oo+++oooooo++osoooo+o++++/::--------------------:::::::///++ooossoooooooooooooossssssyyyyyhhhhhdddhhhysyysoyyosyyhyhsooyssssysyssys+oss+.      " << endl
			<< "                           .-----::://++++oo+++ooo++o+++ooooo++++++/::------...-----------:::::://+syyyhdhddhhhyyyssoooooooossssssyyyyyhhhhhhhhhhhhhysyyosyyhyhyooyyyssyshysyyooyso/`     " << endl
			<< "                          `.-----::///+++ooo++ooo++oo++ooooo+++////::-----....-----------::::/+osyhhhyysssyyhdmmdddhysooooooooossssssyyyyhhhhhhhhhhhhhyyyyyyhhhhsohhyoshshhyyyooysso-     " << endl
			<< "                          `.-----:::/+++ooo++ooo++ooo++oooo++/////::-----....-----------::::+yhhy+:-.``````..-:+sdmmdysoooooooooooossssyyyyyyhhhhhhhhyyyhddhhhhhsohhysyyydhyhyssyyss/    " << endl
			<< "                           .------:::+++ooo+ooo+++oo++oooo+//////:------.....----------:::/shho-` ```````````...-:+ymmhs++oo++++++ooosssyyyyyyyyyyyyyyyyyyhhhdddhshhhyhhydhyhhssyyss+`    " << endl
			<< "                           `.--.----:/+oooooooo++ooo++ooo+//////:-----....------------::/ohy/.````````````````...--:+hmhso++++///+++ooosssyyyyyyyyysssssyyyyyyhhdhhhhyhyyddyhhyyyysso`    " << endl
			<< "                           `.....---:++oooooooo+ooo++ooo+/:////:----.....------------::+hd+` ``````````````````...---/yNdo+++///////++oosssssyysssssssssssssssyyyyhyhddyydhhdhyyyyyyo`    " << endl
			<< "                          ``.....---:/ossooooooooo+++oo+/::///:----......-----------::+yy-  ```````````````````...----/hmyo++/::::///++ooosssssssooooosssssssssssssyyhddddddddhhhyyys`    " << endl
			<< "                          `.-:-.----:/ossooooooooo+oooo/::///:----.......---------:::/ys. `````````````````````....---:odho+//:::::://++ooossssooooooooosssoooosssssssyddmmddmdhhyyyo     " << endl
			<< "                          `.://----:/+ossooooooooooooo+/:///::--.........------::::::++. ``````````````````````...-----/hdo+/:::::::///++ooosoooooooooooooooooooosoosssshdddmNNdyhhs/     " << endl
			<< "                          `.:/++/::/+osssooooooooooooo+::///:--..........------:::::/+- ``````````````````````....-----/ydo//:::::::://++oooooo+++oooooooooooooossooooo+ohdddNNNmdh+.     " << endl
			<< "                          `.:/++oooo+osssooooooooooo++/:///:---.........-------::::/++. ``````````````````````....----:/sho/::::::::::/++oooo++++oossssssssysyssoooooo+//hdddmNNmd+`      " << endl
			<< "                          `.-/+oooosoosysooooooooooo++::///:--.........---------:::/os:````````````````````.----..----:+yy+/::::::::::/++ooo++++osssyyhhddmmmdhhhyooo++:/hdhddmNy-`       " << endl
			<< "                           .::+oossooosssosooooooooo+/:///:---..........--------:::/oyo-..``````````````-+ssyyyhy+-.-:/oyo/::::::::::://+oo++++oosyhhyso+++osdmmdhhyo+/-+dhhdhs/`      " << endl
			<< "                           `-//ooooooosssssoosoooooo+/:///:---........-----------::::+so/:-...```````.-os/.-oysssys:-:+ys/::::::----:::/+++++ooshys+///:::--.-:hNmdhho/-odyhds`       " << endl
			<< "                            ./++oossoosssssoosoosooo+/:///:-----...--------------:::::/+++/::---...../sso+:omNdyoyho:/sy+/::::------:::/++++osyyo//::::::--....`+Nmhys/:ydhyh:       " << endl
			<< "                            `-/+oossooosssssssssssoo+////:----------------------:::::::::/+o+//:::--/s+:sNNNNNmyoyho/sy+/::::--------::/++osyso+//::::----.....``+Nmhs/+hhhs/      " << endl
			<< "                            `.:/+ossooosysssssssssoo+////:-----..----------------::::::::::/+ooo+///oho+ymNNNmhyyhyoyy+/:::::--------:::/+sys++//:::-----....`````yNhy+yhyy+`         " << endl
			<< "                             `-/+osssoosysssssssssoo+////:----------------------:::::::::::////+osssydhyyyhdhyyhhyyys+/::::::---------::/+oo++//:::------...``````oNhssdsos.           " << endl
			<< "                             `.-/+ossoosyssssssssooo+///::--------------------:::::::::::::::::://+oshmmmddddddhhyyo+//:::::---------:::/+oo+//:::------...`````` +Nhshhs+:               " << endl
			<< "                              `.-/ossoosssssssssssoo+/:::-----------------------:::::::::::::::///////+syhdddhhhys+///:::::-----------:::/++//:::-----....`````` `omoymso/`               " << endl
			<< "                               `.-+sysoossssssssssoo+/:::----------------------:::::::::::://:::://///////+++ooo+///::::::------------::::++//:/+ossso+:..`````` `yNhdho+`          " << endl
			<< "                                `.:ossoosssssssssooo+/:::--------------------:::::::::::::::::::://///////+/++++///::::::--------------:::///+oo++ssooo+:.`````  :Nmdhy+-         " << endl
			<< "                                 `-/osooossosssssoooo/:::--------------------::::::::::::::::::://////////++++////::::::----------------:::/oso/-:dNho::+-````  .hmhdyo/`           " << endl
			<< "                                  `-/osoossosssssoooo/:::-------------------::::::::::::::::::::::://////++++/////:::::------------------:::+osmNNNNmo::/-```` .ymsohs+`               " << endl
			<< "                                   `.:+ooosoosssssooo+/::------------------::::::::::::::::::::::::////////+////:::::---------------------:::+yNNNNmy+/+:.``` .oyo/oyo:         " << endl
			<< "                                    .-/+oooooosssssoo+/::-----------------:::::::::::::::::::::::::////////////:::::-----------------------:::ohmdhysys/...`./o++/-os/`              " << endl
			<< "                                    `.-/+ooooosssssso+/:::-----------::::::::::::::::::::::::::::::://////////:::::----...........----------::/ohhhhdh+:--:+oo+///-oo:         " << endl
			<< "                                      `-/oooooossssoo+/:::---------::::::::::::::::::::::::::::::::::////////:::::----...-...........--------::/ymmhso++osyo+/+//:-o/.              " << endl
			<< "                                       .:/+o+ooossssoo/:::::------::::::::::::::::::::::::::::::::://////////:::::---------.............------::/oyyyyhhys+//+///-:o-        " << endl
			<< "                                       `.-:++++oosssoo+/:::::--::::::::::::::::::::::::::::::::::://////////:::::-------.................------:::+o+++++///////:-:+`       " << endl
			<< "                                       `..-/+//++oosoo+/:::::::::::::::::::::::::::::::::::::::::///////////::::------......................----:::/+++/////////:.//         " << endl
			<< "                                        `..:+/:///oooo+//::::::::::::::////////////////////////////////////::::-------........................---:::/+/////::::::.:.       " << endl
			<< "                                         ``.//-:///ooo+//::::::::::::///+++++oooo+++++////////////////////::::--------...........................--:://////:::::--:`          " << endl
			<< "                                          ``:/--:///+o+/:::::::::::///+++ooosyhyso+++///////////////////:::::---------.............................-::////::::::.::`       " << endl
			<< "                                           `./:.-:/:/++/::::::::::://+++ooosydmdyo/::::::::::::::::::::::::---------.............................---:/://::::::--/-                " << endl
			<< "                                            `:/-.-:/::///:::::::::////+++oooshdhyyo/:::::::::::::::::::::::--------.......................-------:::::///:::::--//`        " << endl
			<< "                                            `.//..:::::::::::::::::////+++++oymdo//++/:-----::::::::::::::----------.....-...........---------::://::////::::--+/-              " << endl
			<< "                                            `.:/-.-::::::::::::::::://///////odNs---:/+/-------::::::::::::-------------------------------::::///:::////::::-:o+:`             " << endl
			<< "                                            `.-:/-.-:::::::::::::::::::::::::/smm+``.-:++/:------:::::::::::::::::------------------:::::://///::://///::::-:so:.             " << endl
			<< "                                             `--:-.-::::::::::::::::::::::::::+hNNs.`.-:/++/:-----:::::::////+oosssoo+//:::::::::::::///////:::://////:::--/ys:-        " << endl
			<< "                                             `..-:---:::::::::::::::::::::::::/ohNMd/..::--/++/-----:::::://+osyyhyyysso++///////////////::::://////::::--oys+-`     " << endl
			<< "                                              `.-:/--::::::::::::::::::::::::-:/shNMNmy+.``.-/oo+:----::::::///++oo+++////////////////::::////////::::--/yyso-.        " << endl
			<< "                                               `..::--::::::::::::::::::::::::-:+shNNNMm+` `.-:/oso/:--::::::::::::::::://///+//////:://////////::::--/shyss/.           " << endl
			<< "                                               ```-:--::::::::::::::::::::::::--:+shNNNNNs.``.-:///oso/:-::::::://////+++++oo++++/////////////::::--/yyyysso-`     " << endl
			<< "                                               ````::.-:::::::::::::::::::::::---/osymNNNNms-.-:-.-:/+sso/::::::////++++///+++++//::+sso++///:::--+yhysssoo:`        " << endl
			<< "                                               ``` --.-::::::::::::::::::::::::---/osydNNNNMNhs+.`.--::/osyo+/:////+++++++//////:::ossoo++//::-:oyysyyso++/`       " << endl
			<< "                                                `` .-``-/:::::::::::::::::::::::--:/osyhmNNNNNNm+..---:://+oyyso+////////////:::-/ooo+++//::-:oyhsosys+/:/.     " << endl
			<< "                                                `  `.``-///:::::::::::::::::::::::-:/osyyyhNNNmNNmy/---:::++//+ooo++////:::::::/++++++//:---:+syy++ys+/.--`      " << endl
			<< "                                                    ```-/////::::::::::::::::::::::--/+syyyhmmmmmmNNmyo+oo:::::::------ohyo///++++////-..--.:oyyo-os:--`-`      " << endl
			<< "                                                      `-/+++///::::::::::::::::::::::-:+osyyyooshmmmmNNNNmyo+//:/+oooyhho/:////////:.`  `..`:syo.:y+```..     " << endl
			<< "                                                      .:/+oo++////::::::::::::::::::::::/ossyyyo//sdddmNNNNNNmddmNNmdyo/:://///::.`     `.``:ss.`oo`` `.     " << endl
			<< "                    ``...-----------..`              `.://+oo+++/////::::::::::::::::::::/+ossyyyyss+++oydhhyhmmmdyo+/:::::::-.`        `` .os- -o.   .`    " << endl
			<< "                `....------------:::::::-.`          `:///+oooo+++//////:::::::::::::::::::/+ossyyyyyyyyhhhhhdhyo++/::::::-.`           `  .+- `+-   `          " << endl
			<< "             `..........----------::::::///:`      `.-/:-:/+ooooo++++///////////::///////////++osssssssyssssoo++/:--::-.``             `  `:-  --      " << endl
			<< "          `.............-----------:::::://++:`  `.--..:////+oooooo+++++//////////////////+++//++ooossssooo++/:----..`                    `-  `.           " << endl
			<< "        `................-----------::::://+oo+-`..``-oso///++ooooooo++++++++///////+++++++++++++///+++///::---..`                            `       " << endl
			<< "       `.................-----------::::://+oos+-.-.-ohy+///++++oossoooooo+++++++++++++++++++++++////::::-..``                     " << endl
			<< "     `.-................-----------:::::://+oossoo+::oys++/++++++ooossooooooooo+++++++++++++++/////////:.`               " << endl
			<< "    `.--..............------------:::::://++oososhyo++sso++++++++++ooooooooooooooooooo++++++++oooossssso+/-`               " << endl
			<< "   .-----...........-------------::::::///++oooooymyooooso+++++++++++oooooooosssssooosshdddhyyyyyyyyyssssso+:.         " << endl
			<< "  .:------.-.....--------------:::::::////++++oooymdyooosso+++++++++++++//o+/yhyssooosshdmmdhyyyyysssssssssso+:`               " << endl
			<< " ./:-------------------------:::::::://///++++++osmNhso++ssoo++++++++////+ys+shyssoooosshmmmdyyyssssssssssssooo/- " << endl;

		break;
	case 11:
		fontSize(10);
        std::cout << "..............................................................-.............---::/++/+++++/:----------.......................................................... " << endl
			<< "....................................................-:/+ooosyyyyssyysoo++++osssssssso++//+osyyyssoo+//:----..................................................... " << endl
			<< "..............................................--:/+syddddmmmmdddddddddddddddhhhhhyysso++oo++oyhhddddhhhyso/:-----............................................... " << endl
			<< "...........................................-:+syhhddddmddmmddddddddddddddhhyssysyysooo+osyyyyyyyhddddmmmmmddyo/------........................................... " << endl
			<< "......................................-:/osyhdddddddddddddddhhhhhhyhhhhyysyyyosyssooossssyddddhhdhdddmmmmmmmmmdho+/:--.......................................... " << endl
			<< "...................................-/syhddddhhhhhhhhhhhhhhhhyyyyyysyyyyyyssyyyyhyyysoyhhdhdddmddddddmmmmmmmmmmmmmmdhyo/:--...................................... " << endl
			<< "................................-/oyhhhhhhhhyyyyyyyyyyyyyyyyssysssssyssyyyyhddddhhhhhhdddddddmmmmdddmmmmmmmmmmmmmmmmmmmdy+--.................................... " << endl
			<< ".............................-:osyhhhyyyhhhhhyyyyyyyyyyyyyyyysyyysyyyyyhhhhddddddddddddmmmmmdmmmmmdmmmmmmmmmmmmmmmmmmmmmmmho:................................... " << endl
			<< "...........................-/syyhhyyyyhhhhhhhhhyyyhhhhyyyyyyyhhhhhhhhhddddddddddddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmds:................................. " << endl
			<< ".........................-+yhhhhhhhhhhdddddddddhhhdhhhhhhhhhhddddddddddddmmmmmmmmmdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmds:............................... " << endl
			<< "........................:sdddddddddddddmmdddddddddddddddddddddddddmdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmh/-............................. " << endl
			<< ".......................+hdmmmmmmmdmmmmmmmmmmmmdmmmmmddddddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdo-............................ " << endl
			<< ".....................-odmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmo-........................... " << endl
			<< "....................-smmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmo........................... " << endl
			<< "...................-smmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/.......................... " << endl
			<< "...................ommmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmh:......................... " << endl
			<< "................../dmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmo......................... " << endl
			<< ".................-hmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmd:........................ " << endl
			<< ".................ommmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmms........................ " << endl
			<< "................-hmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmd:....................... " << endl
			<< "................+mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmms....................... " << endl
			<< "................smmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmh-...................... " << endl
			<< "...............-ymmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmd:...................... " << endl
			<< ".............../dmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmd:...................... " << endl
			<< "...............ommmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNNNNNNNNNNmmmmmmmmmmmmmmmmmmmmmmd/...................... " << endl
			<< "..............-smmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdddddhhhhhhhhhhdddddddmmNmNNNNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm+...................... " << endl
			<< "..............-ymmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNNNmmmmmdyyyyyyssyyyyyyyyyhmdmmmmmmmddhhhhhhhhhhhhhhhddddmmmmmmmmmmmmmmm+...................... " << endl
			<< "...............ymmmmmmmmmmmmmmmmmmmmmmmmmmmdhhyssoooooosssyyyyhhhdddmmNmmNhsoooooooosssssssdmmmmmdhhhhhhhhhhhhhhyyyyyyyhhhhhdmmNmmmmmmmmd/...................... " << endl
			<< "..............-ymmmmmmmmmmmmmmmmmmmmmmmmho+///////+oosssyyyyyyyyhhhhhdmmmNmysooooooooooooosdmmmmdhhhhhhhdddddddddhhhhhhhyyhhhhdNmmmmmmmdo-...................... " << endl
			<< "..............-ymmmmmmmmmmmmmmmmdmmmmmh+/::://+oosssssyyyyyyyyhhhhhhhhdmmNmhyssosssssssssssmmmmmddmmmmmmmmmmmmmmmmmmmmmmddhhhhhmNmmmmmm+........................ " << endl
			<< "..............-ymmmmmmmmmmmmmmmdmmmmmh/:/://+ossyyyyyyyyyyyyhhhhhhhhdddmmmmmddddddmmmmmmmddmmmmmmmmmmmmmmmmmmmmdmdddddmmmmmdhhhdmmmmmms-........................ " << endl
			<< "...............smmmmmmmmmmmmmmmmmmmmmo:::/+osyyhdddddddddddhddmmdmddmmdmmmmmmmmmmmmmmmmNNNNmmmmmhhhhhhhhhyhhhhhhhhyyyyyhhhddhhhdmmmmms-......................... " << endl
			<< ".............../mmmmmmmmmmmmmmmmmmmmm+://oyhddmmmmmdddmmmmmmmmmmmmmmmmddmmmmmmdhhhyyyyyhhddmmmmmhhhhhhhhhhhhhhhhhhhhhhhhhyhhhhhhmmmmd:/++++/:-.................. " << endl
			<< "...............-smmmmmmmmmmNNNmdhmmmm+/+sdmmmdhyyyyyyyhhhhhhhhhddhhdddddmmNdhhhyo+//////+shdNmmmhhhhhhddmmmmmdyosyyhhhhhhhhyyhhydmmNdsyssssssso/-............... " << endl
			<< "...........-----:/+syhdmmNNmmdysommmmooshdhhhyhhhhhhddmmmmmmmmmmdhddddddmNmhhyo+/:::::://+oymNmmdhhddmmmNNNNmmh+/++oshdhhhhyyyyydNmNhsssssyyyyyso/.............. " << endl
			<< "........-::///:::::://osyhmmdyyssdmmmyyhhhhhdddhhysshmmmNNNNmmmmhyhdddddNNdyyo/::::::::://+oymNmdhyhdmmmNNNNmdy:-:/++shdhhyyyyyydNmmyssyyhhhhhhhys+-............ " << endl
			<< "......-/+osyyysso+///////+o++++ooyNmmhyyyhhhdddhs+:-+hdmmmmdddhyosyhhhymNNhyo//::::::::://++oymNmhyyddmmmNNmdy+-://+oyhhhhhyyyyymNNmssyhhhhhhhhhhys/............ " << endl
			<< ".....:/syhhyyyssssso///:::::::::/+dmmmsssyyhhhhyso/:-+yhhhhysso+ossyssyNNmhy+/::::::::::///+oshNNmhhhhdddddhs+//+oosyhhhhhhyyyyhmmNhsyyyyyyyyhhhhhys:........... " << endl
			<< "....:+shhyso++++++ooo+/::::::::::/sNmNyyyyyhhyssssoooossssssssosssssssdNNdhs+/:::::-::::://+ooymNNdhhhhhyyyysssyyyyyyyyhhhyyyyydNmmysyyyyyyyssyhhhys/........... " << endl
			<< "...-/syyyo+////++++++++/::::::::::+mmNdsyyyyysooooooooooooooooooooooohNNmhy+//:::----:::://+oosdNNNdhhhyyysssssyyyyyyyyyyyysyydmNNdyyyyyyyyyysyhhyys/........... " << endl
			<< "...:+yyso+//+ossyyssooo/:::::::::::ymmmyssyysooooooo+oooooooo++++++oyNNNyo/::::-------::://+osshNNNNdhhyysssssssssssyyssssssydmNNdyssyyyyyyyyssyyyys/........... " << endl
			<< "...:/sso++/+osyyyyssss+::::::::::::/hmmmhyso++++++++++++++++++++++oymNms/:::----------::://+ossydmNNNmhyssssssssssssyyyyhhdmmNNmhysssssyyyyyyssyyyso-........... " << endl
			<< "...-/ooo+++ossyssoooo/:::::::::::://+hmmmmdhso+++///////////+++ooydNNmo::-------------::://+ossyhdmNNmmmddhhhhhddddmmmmmNNNmmdhyyssssosyyyyysssyyss/............ " << endl
			<< "....:/o+++++oooooooo/:::://:::::::////oydmmNmmmdddhhhyyyyhhhhhddmmNmdo::--------------:::/++oosyyhhddmmmmmmmmmmmmmmmmddhhyyysssssssssssyyyyysssssso-............ " << endl
			<< "....-:/+/+++++o+++++/::////////////////+osyhddmmmmmmmmmmmmmmmmmmmdhhyo/:::-----::-----:://++oossyyhhhhhhhhhyyyyyssssssssssssssssssssssyyyyysssssso:............. " << endl
			<< ".....-:////++++++++++/////+////////////++osssssssssssssssssyyyyyyssssso+/::::--:-----::://++oosssyyyyyyyyssssssssssooooossssssssssssssyyyysssssoo:.............. " << endl
			<< "......-:://////////++o+//+++//////////++++ooooo++++++++++++++++oooooooooo+/::-------:::///+ooossssyyysssssoooooossooooossssssssssssssyyyyssssso+:............... " << endl
			<< ".......-:::::///////++o+++o++++++++++++++++++++++++++++++++++++++++++++++oso/:::::::::///++oooossssssssssooooooooooooossssssssssssssssssssssoo/-................ " << endl
			<< ".........-:::::://///////+oo++++++++++++++++++++++++++oo++++++++++//////++ossoo++++++++++ooooossssssssssssoooooooooooooosssssssssssssssssso+/-.................. " << endl
			<< "...........-::::::://////+ossoooooo++++++oo+ooooooooooooooooo+++++////////+osssssssooooooosssssssssssssooooooooooooooooossssssssssssssoo+/-..................... " << endl
			<< ".............-++///////++osysoooooooooooooooooooooooooooooooooo+++///:::////+osssssssssssssssssssssooooooooooooooooooooosssssssss+////:--....................... " << endl
			<< ".............-osssooooosssso++ooooooooooooooooooooooooosssssssoo++//:::::///++oossssssssssssssssssoooooooooooooooooooooosssssssso:::::::::--.................... " << endl
			<< ".............-/osssooooo+++++/+ooooooooooosssssssssssssssssssssoo++///////+++ooossssssssssssssssooooooooooooooooooooososssssssso/:::::::::::--.................. " << endl
			<< "...............+ossssoooo+++++/+osoooooosssssssssssssssssssyyysssoooooooossssssssssssssssosoooooooooooooooooooooooossssssssssso/:::::::::::::::--............... " << endl
			<< ".............../+oossssooo+++++/+ossssssssssssssssssssssssssyysooooooooooooooosssyyyyssssooooooooooooooooooooooooosssssssssss+/:::::::::::::::::::-............. " << endl
			<< "...............:++oossssooo+++++//osssssssssssssssssssssssssssosssssssssssssssssssyyyyyyssssoooooooooooooooooooossssssssssss+//:::::::::::::::::::---........... " << endl
			<< "...............-//+oooosssooo++++//+sssssssssssssssssssssssssssssssssssssssssssssssssssyyyyssssssooooooooooooosssssssssssso+////::::::::::::::::::::::--........ " << endl
			<< "..............-.://++oossssooo++++//+ossssssssssssssssssssssssssssssssssssssssssssssssssssssssssssoooooooooossssssssssssso////////::::::::::::::::::::::--...... " << endl
			<< "..............-.-////++ooosssoo+++++//+sssssssssssssssssssssssssssssssssssssssssssssssssossssoosssssoooooossssssssssssso+///////////:::::::::::::::::::::::--... " << endl
			<< "...............-:::////+ooosssoo+++++///osssssssssssssssssssssssssssssssssssssssssssssssooooossssssssssoossssssssssssoo+////////////::::::::::::::::::::::::::.. " << endl
			<< "................:so/:///+ooooosooo+++++//+ossssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssso+///////////////:::::::::::::::::::::/++/.. " << endl
			<< ".................-/so/:://+oooosoooo+++++//+ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssoo+////////////////:::::::::::::::::/++/:-.... " << endl
			<< "...................-+so/:://+oooosoooo++++++/osyssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssso+////////////////////:/:::::::://+++/-........ " << endl
			<< "---..................-+so/:://ooooosoooo+++++++osyssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssso+////////////////////////://://+++/--........... " << endl
			<< ".......................-/so/::/+ooooooooooo++++++syyssssssssssssssssssssssssssssssssssssssssssssssssssssssssso+////////////////////////////+++/:-............... " << endl
			<< ".........................-/oo/::/+oooooooooooo++++osyyyyssssssssssssssssssssssssssssssssssssssssssssssssssso+//////////////////////////+o+/:-................... " << endl
			<< "............................:+o+::/+ooossooooooo++++syyyyyysssssssssssssssssssssssssssssssssssssssssssssoo+++//////////////////////+o+/:-....................... " << endl
			<< "..............................-+oo/:+oooosoooooooo+++oyyyyyyyyyysssssssssssssssssssssssssssssssssssssso+++++++////////////////++o++:-........................... " << endl
			<< "................................-/oo+/+ooooossoooooo++oyyyyyyyyyyysssssssssssssssssssssssssssssssssso++++++++++++/////////++o++:-............................... " << endl
			<< "...................................:+o+++oooosssoooooo+shyyyyyyyyyyyyyyssssssssssssssssssssssssssoo+++++++++++++++/+/+++++/:--.................................. " << endl
			<< ".....................................-:+o++ooossssssoooohhyyyyyyyyyyyyyyyssssssssssssssssssssssoo+++++++++++++++++++o+/:-....................................... " << endl
			<< "........................................-/oooooosssssssohdhyyyyysyssyyyyyssssssssssssssssssssooo+++++++++++++++o+//:-........................................... " << endl
			<< "....-.--...................................:+osooosssssshdhhhyyyysssssyyssssssyssssssssssssooooooo+++++++++++/:--............................................... " << endl
			<< "....-.--...................................-.-/osoosssssyddhhyyyyyyyyysssssssssssssssssssoooooooooo++oo++/:-.................................................... " << endl
			<< "..........-................................-...-:+ssssssydddhhyyyyyyyyysssssssssssssssssoooooooooooo+/:-........................................................ " << endl;

		break;
	case 12:
		fontSize(7);
		std::cout << "																														   `.                                            `" << endl
			<< "																											`  `` `        -`" << endl
			<< "																						  ``               `.   -::``  `  :-  ``                                      `" << endl
			<< "																						   `   `       .   `..::.+s-`  .`-:` ..       `.   `          `              ``" << endl
			<< "																							`  `.`     -.  .///ossh+  -.-/.-.-        .`.  `.         ..           ``" << endl
			<< "																							   ``.`    `/. `-:+yhdds:--.+/.--``      `:`-`` `-       `.` `       `.." << endl
			<< "																							  `.``-`    :-` -`-+hddhs+/ss/:+/.- .    .-`--. `-` .``  ...``      ``.         `" << endl
			<< "																						   `` `:`..:`   -/.`-``:sdddhdhhs+++.:. -   `-...:. ..:`:`. .-`-.  `  ` ``       ```" << endl
			<< "																							`` ::`..:   .+.--.`/hdddddyso/+o--`.-   .:-:./- `//.-:`.-`./` `- .--``      `.``      ``" << endl
			<< "																							 ```:-`.-: ``//./.+yddhyyyosy+ss:``.: ``-//:-+/.`++:::.:` ::  -.`-+.`       :-`      ``" << endl
			<< "																							  .`.::`.+:. .+::shhdy++ooo/++ss.  -/``:-//:-+:::oo++/:.`.+- ./.--+-`   `  :/`     `.`" << endl
			<< "																							   ..-::`/o-  /oyddds:::++++o+ss-` :+: /:+o+/+:++o+soo. -//..-:.-+//.  `.`:/`    ``-`" << endl
			<< "																					   ``       .-`-/:so.`+ydddy::::++o+soss+-.::+.++osoo/:+ssoyo+:.++--/+:.:o///..-`:+```   .-`" << endl
			<< "																					`  .`       `--`.+ss//yhdhs+::::/ooyo+os+:-:-/oooosy+:++ysoss+oo+o/:++.-/o::/+-`/+-`````.-.      `" << endl
			<< "																				   `.  -       ` `-.`:syshyhdh+//-:/:osyo/+soo:-::oyoosy/++osyosssoso++++/./o+::o/::o:..```-:..    `.`          ```" << endl
			<< "																				   `:  -      ``  .:-:+yhdhmhoso//:+:oyys/ooos:-//oyssyss/ossyssyssyo+oo/:+oo:+/+:+s+-..`.-/..` `.-.  ``      `.`   ``" << endl
			<< "																				   `:``-    `.:   `//++yhdddo/so+////syysssoos+:++syyyyoh+yssssysosysooo::so+++:++yo:.-..-+-.-`-:.    .-    `..   ``" << endl
			<< "																				 `  :.`/.  `.:.   -.ooshhddy+/o+s++//ssyyyyssos++osshyyshhys+syhsohyso++-+sos:/:osy/..---+/-/-:-..  ``/.```.-````." << endl
			<< "																				 -` .+.:/ `--/ ` `:.+shdddds+os/sso+:oyyyhyss+ooossoyyhyyhho+yyhsshhsso/:ysy+:/+yss:.////o+//-. .- ``-+``.---``.." << endl
			<< "																		  -      -.  //.o``::/```-:/+yddddys+osossyo/osyyyyysossoysyyyhyyhy/oyyyyhyhyyo/ssss//+syso/+/++s+://. `::``.++--/-...`" << endl
			<< "																		  -`     .:  `o:o:`//+:..-+/yddddhyyo+yyssyo++ssysyhhsyssyyyyyhyhds/syyhhyhyys+oy+so/+syyyo++oooo//+- `-//-:/o-:/----`        `" << endl
			<< "																		  `:`    `/`  :soo:/o+o..:sohdddhdyssoyysyhssooshyyhhyyysyyyyyhyhhyosyhhyyhsssoso/yo+osyyyo++oos+/:/.--+o/++s+++/:-`      ```" << endl
			<< "																		   -:     :-  `ossoosoo:-.shdddhddosysyyyyyyys+syhyhhyyysyyydyhhyhhyshdhsyyyyyyssoy++ssyyso++sso/:/+++oo+o+ssoo/:.`    `..`" << endl
			<< "																		  ` :/`   `+`  .ossossss:.+hddddddsshsyyhhyyhy+ohhyhhhysyyyhdyhhyhyyhhhhyyyyyhssoys/osyyyosooso+:/sooosoo+sys+:- `..--.`" << endl
			<< "														  ```             ```//.`  :/`  -yysssyyo-sdhdhdddyohyyyhhhhyysoyhyhhhhyyshdhyhhhyhddhhhhyhyyhyssy++shhysyooyoo/ossssyooshyso:-:::-." << endl
			<< "												 ..://oosyyyysssooo/:..`  ...`+-.. `+:.`-/yyssyyyyhddhddddyyhhyhhhhhhyyshhyhhydyyyhddhhhhyhdhhhhyyyyyhyssyosyhhyys/yhssyssssyoshyyss+++:-`" << endl
			<< "											.:oyhddddddddddddmddddddhhhhyo/-:--o-`.`.++-.:syysyyyhddddddddhyhhyhhhhhhyyyhhyhyyysyhhddhhhyhyhhhhhhhyyhyssyysyhyhhso+yhys+yysysyhysooys/.` `.`" << endl
			<< "										`:oyhhdhyys+//:----:/+osyddddddddhdhss//+- .--+o-`ooyyyyyhddhdddddhyhdhyhdhhhhyhdyyhhssyyhdhdhyyhhhhhhhhhyyyyhhsyhhhhyyys+ydysyyyssyhhhsysys/----.   `       `````..`" << endl
			<< "									  -+yhhyo/-.`               ``:oydddddddddhyyo:..::++:ossyhhhdddddmddhhhhdhhhhdhhhhdhhhhysyyhddhhhyyhhhhhhhyyhhhhhssydhhhyyyshhhsyysoyhhyyyyyys/::-`..-.``   `.-:....     `   ``" << endl
			<< "								   `/shhy/.`                       `./+shdmddddddhy+/-/osossssyhhdddddddddhhddhdhhdhhyhhhyhyyyyyhddhdhyyyhhhhhhyhyyhhhy+ydhsohyhhhhysyssyhhyyhhyys//-.--.`````.--:...```    `..``" << endl
			<< "							  ```:oydhs/.                          ``.:/+sdmmddddddhhhosssoyyysyhdddhmddddhhdddhdhhdhhhhhhhyyhsyhdhhhyyyyhhhhhhyhyhhhyssdds+yhhhyyyyyyyyhhhyhhyyo++:/:....`.::-::-..`   ``--.`    ````" << endl
			<< "							 `:osyhhy-`                          ``    .:+shmmmdddmdddhyyyyhhyyyhddddddddddhhdddhhhhyhhhhhhyyhyyhhhhdyyyhhhhhyhyyhhhyhhhdysyhhhyyyyyyyydhyhhhyysoo/..--..://--/+:-` `..---```....``" << endl
			<< "							-/shhhhhy/`                          `.-.   --:+hmmmddddddddhhhhhhhhdddddddddddhhdhhhhhyhhhdhhhyhhyhhhhhhyyyhhhhhyhyhhhhhdhddyyyhhyyhhyhhyhhyhhhyhyyo:::.`-://///o/-.--:-::-.`...``" << endl
			<< "							:+sdhhhhys-                      `.`   .//.``-/:/ydmmmdddddddhhhhhhhddddddddmdddhhhddhhhhhddhhhhhhyhhhhhhyhhhhhhhyyhhhhhddhddhhhhhyhhhhdyyyyyyhyhyys+:..-/+ooosss+///::/:---.``.``   `.`" << endl
			<< "						   `oshhhhhhhy/-`                     `-`  `./+::--/+ohdmmmddddddddhyhhdddddddddmmddhhdddhhhhddhdhhhyyyhhhdhyhhhhhhhhhyhhhhddhdddhhhhhhhyhdhyyyyhhhyysso/+osssyssyyo/-.``-::--.`.-`` `.-::.`         `" << endl
			<< "						 `:+sysyyhsyhys/-                 `    `:`  `:oo+::///yddddddhdddmddydhhdddmddddddddddddhhhdhddhhhhhyyhhhhhyyhhhhhhhhhyhhhddhhddhhhyhhhyhdhyyyyhhhyyyyyysssyyysyyo:.`.-/oo+/---:.` .:///:.```.``` `" << endl
			<< "					  ``-::/-+oyss-/sso+/.                 .-`  ./`  -ososoooooddmmddddddddmydhddddddddddddddddmdddddddhhhhhyhhhhhhhhhdhhhhhhhhhhhdhhddhdhyhyhhdhhhhyhddhsyhhhyyyhhyysyyo:.-+sso+/-.-/.`-://://-..-....-`" << endl
			<< "					`--.``` `///s+  .ooo:..`                `:.  ://oyhdddddddddddmmmmmdddddhhddddddddddddddddddddmmmmddddddhhhdddhhddhhhhhhhhhhhhhhhhddyyhyhdddhhhhhdhhyyhhhhhyyyyyyyyo++osso/-.../+:/++////:--....-.`" << endl
			<< "				   ``       `--.+/   .//::-.``               `/:/ydddddddddddddddddddmmdddddhddmdmmmddddddddddddddmdmmmmddddddddddhddddhhhdhhhyhhhydhdhyyhhhddddhhdddhhhhhhyhyyhhhhyyyssyyys+-.-::osoo+//++:-.``.--.`" << endl
			<< "							 ```+-     .:.````               -sdmmmmmmmmmdmddddddddddddmmmddddmmmmmmmddddddhhhhhhdddddmmmdddddddddddddddhddhhhhdhhyhhhyyyhhhddhhhhhhhhhdhhhhyhhhhyhhyyyhhys+++oooyyoo+oo/-.```-:-`" << endl
			<< "								/.       ``                `+hmmmmmmmmmmmmmmmmmmmmddddddmmdmmmmmmmmmdys+/::----:://oshdmmmmdddmddddddddddddddhdddhyhhyyyhdhdhhhhhhhhhdddhhhyyyhhhhdhhhhhyyyyyyyyhyooo+/:---:/+:.`` ``" << endl
			<< "								-`                         /dmdhhyyyyyhhddmmmmmmmmddddmmmdmmmmmmdyo:-.```````````...-:+ymmmmmmmddddmdmddddddddddhyhhyyhdddhhhhhhhhhhddhhhyyhhhhhhdhhhhyyyyyhyyyyysssso++++os+-```````````````" << endl
			<< "														  `yds/--.......-:/+oydmmmmmdmmmmmmmmmh+-.`````.....```````..--/hmmmmmddddmmmmddddddhhhhyyhsydddhhhdhddhhhhhddhyyyhhhdddhhhhhhhhhhhyssyyssoo++osssoo++++/:-.````" << endl
			<< "														  -do.``````````````..-/oydmmNmmmmmmh/..`````-/osssoo/.````..--:hmmmmmmmmmmmmmddddddhdhhyyshdhhhddhhdddhhhhhhyyyhhddddhhhhdhhhhhhyyysyysossossyysoo+/:..---::-.`" << endl
			<< "														  /y-```````````````....--:+sdmmmmms-...```.+++ssoyyyys:`...---:dmmmmmmmmmmmmmmmmddddhhhyyyhhdddhhhhdhhhhhhyyyhhdddhhhhhhhhhyyyyyyyyyhhhhhhyyyyyso/-..``.```````" << endl
			<< "														 .ys.`````````````-/+sssso+::+shmNd:.......osoymNNNNhyss:...--:ommmmmmmmmmmmmmmdddddddhyyhhddddhhhdhhhhhyyhhdddhhhhhhhhhhyyyhhhyhhhhhddhhyysyys+oooooo++:-.`" << endl
			<< "														 `hs......`......+hhhhhhyhhs//osymh:-......ssshNMNNNdsos/..--:/hmmdddddmmmdmmmdddddddhyhdhdddhhhhhhhyyyhhdddhhhhhhhhhhhhhhdddddhhhyhhhhyyyyhysoooo+/:---:///:-..`" << endl
			<< "														  sd-...........+hyhmNNNmhyys+ossdm+--.....+sssydmmhs++o:--::/hddmmmmdmmmmmmmmmddddddhdhhdhhhhhhdhyyhdddddddddhhhyhhddddddddddhhhddddhhhhhhhhysoo++:--....````" << endl
			<< "														  /ds-..........yhydNNNNmyyyyoosymNd+---....+sooooo++oo:-::/+hddmmmmmmmmmmmmmmmddddddddddhdhhdhhyyhddddddddddhhhhhddddddddddddhdddddyhhhhyysossoo+/:::-.`" << endl
			<< "														  `omy--........ohyyddmdyyyysoshmmmNmo:::-----/+ooo++/:::/+sdddmmmmmmmmmmmmmmmdddddddddddddddhhhhhdddddddddhhhhhddddddddddddhddddhdhhyyyyso++++++++//:::-``......`" << endl
			<< "														   `smdo:--------oyyyyyyyhhssydmmmmmmmho+//::::::::::://oydddmmmmmmmmmmmmmmmmmmmmdddddddddddhddhhddddddddhdhdddddddddhdddddhhhhhhhhhdddhhhhhyyysso+/++/+//:.``  ```" << endl
			<< "															`/hmdyo/::::::/+osyhddddhhdddddmmmmNmhso+++/++++osyddddddmmmmmmmmmmmmmmmmmmddmdddddmddddddhhhdhhhhddddddddddhhhhhhhddddhhhhhddhhddddddddhhhysssssso+/::::---.``" << endl
			<< "															  .ohdmmdhyyssssyhhhhhhhhhdddmmmmmmmNNdddhhhhdddddddddmmmmmmmmmmmNmmmdddddddddmmmmddddmdddddhhddddddddddddddddhhhhhhhhhhhhdddddhhdddhhhhdddhhhhyssoo+++////-.``" << endl
			<< "																`:sdmmmmmmdddmdddddddddmmmmdmmmmmNNmmmmmddmmmmmmmmNmmmmmmNNmmmddddddddmmmmmddddmmdddddhhdddddddddddddddddddddhdddddddmmmdddddddddddddhdddhhyyyysooo++/:..-.`" << endl
			<< "																  `//ymmmmmmmmmmmdddddmNmhhddmmmNNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmddddddddddddddmddddddddddddddhhhhhhhdhhddddddddddddddddddddddmmddddmddddhhhhhhyysso+////:..``" << endl
			<< "																	-++odmmmmmmmddmmmmmdhhddmmmmmmmmmmmddddddmmmmmmddmmmmmmmmdddmmmddddddddddddddddddddddhhhhhhhhhhhddhdddddddddddhdddddddddddhhhhddhhhyyyyyysossooo+/-.`               ``" << endl
			<< "																   .:`-.odmddmmmmddmmmmddmmmmmmmmmmddmmmmddmmdddmmddddddmmmmmmmmmmmmddmdddddddddddddddddddhdddddddhhhhhhhddddhddddhddhhhhdddddddddddhhhyyysssssso+///::/:.`     :      `-" << endl
			<< "																   `   .sddmmmmmmmmmmmmmmmmmmmmmmmmmmmdddmmmmmmddddddddddddmmmmmmmmmmddddddddddddddddddhhddhhhddhdhhhhhddhhhhhhhhhdddddddhdddhdddddhhhhhhyyhhyyyyysso++/:::---./+.-`   -`" << endl
			<< "																`.....:shhhdddmmmmmmNNmNmmmmmmmdddmmmmddddddddmmmdddddddddddmmdddmmdddhddddddddddddddddhdhdddddhhhhhhhhhhhhhhhddhhhhdddddmmmmmmmddddddddddhyo/-..:+/+/-....  `/+ys+-``.." << endl
			<< "																 ```.+yhhhhdddmdmmmmNmNNmmmmdddddmmddddddddddddddddddddddddddmmmmmmmdddddddddddddddhdddddddhhddhhhhhddhhhhhhhhddddddddmdddmmmmmmmmmmmmmdhhhhhyso:-...--.``::-.oyyhh+:-:``" << endl
			<< "																	`ohhhhddddmmmmmNmmNNmmmmmmmmmdddddddddddddddddddddhddddhhmmmdddddddmdddddddddddddddddddddhddddddddddddddddddddddddddmmmmmmmmmmmmmmmdhyyssssssso+:.``  `/yshdhddys/-.`" << endl
			<< "																   `+hhhhdddmmddmmmNmNmmmmmmmmmmdddddhddddddddddddddddhhddddddmdddddddddddddddddddddddddddddddddddddddddddddhhhdddddmdmmddddddmmmmmmdddddhyysso++++/////:-..sddddddhho//`.-" << endl
			<< "										  .`                   .:/:.yhhdddmmmdddmmNmmmmmmmmmmmddddddhhhddddddddmdddddddhdddddmmmmmddddddmdmmmddddddddhddddddddhddddddddddddddddhhhhddddddddddmdddddddddddhhhsoo++:-::::...--odddmmdmdso+//." << endl
			<< "										  ```              `-:/syhs.+dddddmmmmdmmmmmmmmmmmmmmdddddhddddhdddddddddddddddddmddddmmmmmddddmmmmmddmddddddddddddddddddhhhhhhhhhhhhhhddddhhddddddddmdddmdddhhhhhhhyooso/-`` `..``-+dddmmdmdyss/-`" << endl
			<< "										   ``          `.-:osyhhhho..ydddmdddmmmmmmmmmmmmmmddddddddhhshhhhhhhddddddddddddddddmdmmmmmmdddddddmmddddmdddddddddddddddhdddddddhhhhhhhhdddddddddddhddddddmddhyyyyys+/://:-.   ``/ydmmmddmdhs/-`" << endl
			<< "										  ``.`       ``/oyyhhhhhhdo../dddddddmmmmmmmmmmmdddddddhhhhds-hdhdhhhhhyhhhdddddmmmddddsmmmmmmmdddddddddddddddddddddddddddddddddddddhhddddhhhhhdddddddddddddddmdhysoo+++:..--.``  -hddmmdmmmdy/-`" << endl
			<< "								 `         `.``---:/oo.ohhhhhhhhhdo...hmdddmmmmmmmmmmmmmmdddddddhhdd:`sddddhhhhhhhhhddddddmmmd/+mmmmmmmmdmddddddddddddddddddddddddddddhdddhdhdhhdddddddhhddddddddddhdddhddhs/-..``.`` ``.:sddddmdmmdhy/:." << endl
			<< "								 ``       `..../yyhhhh:-ohhhhddddms.../ddmmmddddmmmmmmmmmmdddhdddddy``+dhhhdhhhhhhhhdddddddmmo`ommmmmmmmmmmdddddddddddddddhdddddddhhdddddddddddhyddddddddhhdddddddddhyysosyhhy+-` `     ./hddddmdddhho+." << endl
			<< "								.``     .-::...-yhhhhh+.-sdddmmmmms....hNmmdddddddmmmmmdmddyhddhhhh/`.:hhhhhhhdhhdhhhhdhddddy..ommmmmmmmmmmmmmmmddmdddddddddddddddddhhhddddddhdddhhhddddddhhdddddhdddhhhyyoooyys+:.`  `-/hdmmmmmmmdhso/`" << endl
			<< "				  `             `.``.:/osyhs....:yhhhdy-.-hmmmmmdmo..../mmddddmddmmmmmmmddd/+dddhdy...-hdddddhdhdddddddddddh:..smmmmmmmmmmmmmmmddmmddddddddddddddddddhhyhddddddddddhhddddddhhhhdmmdddmmddhhyo+ooo::::::+ymmmmmmmmmddys:`" << endl
			<< "				  ``           ``../yhhhhhhy-..../hhddd:..:dmmmddmo.....yddmmddmmdmmmmddddh-:dddhh/....sddddddddddddddddddd/...yddmdmmmmmmmmmmd/hddmdddddddddddddddddddhyyhddddddddddddhhddmdddhhddmddmmddddhyyooo+.``/sdmmmmmmmmmmhs+:-`" << endl
			<< "				  ``    ```..-/o:../hhhhhhhh/.....odmmm+...+ddddmNo...../dmdmddddmmmmmmddms.-hdddy-....oddddddddddddddddddo...-ydddmdmmmmmmmmm:-dmddmddddddddddddddddddddhhhhdddhdddddhhhhhdmddmmddddmddmddddyoooooo+::sdmmmmmddy+:-`" << endl
			<< "				 ```   `..-:/oyh/..-yhhhhhhd+.....-ymmms....sddmNN+.....-ymmddmmmmmmmmmmmm/..smmm+...../mmdddddddmmdddmmmy....:hddddddmmmmmmm+`/mmmmmdmdmmddmdddddddddddddhhhhhhhhhdddddhhhhhdddmmmmddddddddhhhy+/...-:/hmmmdhs+-" << endl
			<< "				 `.`     ./oyhhh+.../dddddddy-.....:hmmh-...-hmNNN+....../dddmdddddddddddh...+ddh-.....:ddddddddddddddddh-...-/mmmmddddmmmmm+`.ommmmmmdmmmmmmmmmmdddddddhdddhhhhhhhhhhddddhddddddmddddmdmmdddhyyso+-`  `smdh+." << endl
			<< "				 ..``  `/shddddd+...-hmmmmmmd:....--/dmd:..../mNmm+-.....-smmmmmmmmmmmmmms..-/dNo-.....:hmmmmmmmmmmmmmmd:....:odddmmmmmmmmm+..-hmmmmmmmmmmmmmmmmmmmddddddhhdhhyyhyyhdhyhhdddhdmdddddhddmddhddysysso+/:-sddy-" << endl
			<< "				 .... /ohdddmmmmo..../dmddmdm+-...--:omm+-----sNNNs:-----:+dmddddhhhddddmo/:/+hm+/:---:/hmmmmmmmmmmmmNm+-...-/ymmmmmmmmmmm+..-+mmmmmmmmmmmmmmmmmmmmmmmddddddddddhdhyhhhyhhdddhddddddddhhhhhhyhs+o+++++dddo`" << endl
			<< "				 ..../ydmmdddddds....-hmmmmmmy::-:/+oshdyo+++oshhhyyyssyyyyhhyyhyyhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhdhso++++odmmmmmmmmmd/---:ymNmmmmmmmmmmmmmmmmmmdmmmmdddddddddhhhhddhyhhhmdhdmddddddhhhhhyoosoo+/sdmh:`" << endl
			<< "				 .../hdddddmmmmmd::/+oyyyyyyyhyyyyhhhhhhhhhhhhhhhhhhhhdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddmmm+/:::+ddmmmmmmmmmmmmmmmmmmmddmmmmmddddddmmhhhhddhydhhmmdddddhhddhhhhhhs+/+shmdy/`" << endl
			<< "				 .../dmmmmmmdddhhyhhhhhhhhdddddddddddddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdyo+hdmmmmmmmmmmmmmmmmmmmmmdddmmmdmddddmmmmhhdhdhhmhydmmdmdhyyhyhyshyoshdmmdo``." << endl
			<< "				 --:+hhhhhhhhhhddddddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNNNNmNmddddddddddddmmmmmmmmmmdmdmmmdmdmddmmmmdhmddhhdhhddmdmhhyssosssydmmmds." << endl
			<< "				 /shddddddddmmmmmmmmmmmmmmmmmmmmmmmmmdmddmdmdddddddddddddddddddddddddddddmmmdmmmmddmmddhdmddddddddddddddddddddmddmmddmmmmmmmmNNNmdmmmmddddmmmdmmddmdmddddmdmmmmmddmmmmmdmdmddhhhmddddmmdyo/ohhmmmy:-." << endl
			<< "			  `-sdmmmmmmmmmmmmmmmmmmmmmmmmmmmmddddmddddddddddddddddddddddddddddhdhhddhddddddddddddddddddddddddhddhhddhddhhdhhdddhhdhhhhddmdddmmmmmmmdmmmddddmddddddddddddddddddddddmmmmmmddddmhddmdhdhyhdddmmmdd+.`" << endl
			<< "			-ydmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdddddddddddddddddhddhddddhhddddddhddhddddhhddddddddddhhdhhhhdhhddddhhdhhhhhdhhdhddhhhddhdddddddmddddmNmddddmmdddmdddddhddhddhhdddmmmddmdmmdddmdddhddmdhddmmmddmdys+-." << endl
			<< "			smmmmdmdmmmmmmmdmmdmmmmddddmmmdmmmdddddddddhdddhhddhddhddhhhhhdddddddddddhddhddddddddddydhyhddddddddddhhdhhhhdyhdhdhhhhhddddddddddddmmmmNyydddmmmdddddddddddhhhdhdmdmdmddddmmdmmmdddddddmmmmmmddoso/:/+:.`" << endl
			<< "			odmddmddmmdddmddddddmmdddddddddddddddddhdyhhhddyhdhhhhhhhhyhhhhhhdhdddhhdhhhydhhdhhddhdyhhhhhdhdhhhhdddhdyhhddhhdddddddhddddhdddddddddmmmmmddddddddddddmddmmmddhydmdddmmddddmddmmdddddmmdmNmmho+/++/-``---.`" << endl
			<< "			sddmmmmmmdddddhddddddmddddddddhhdddddhhhhyhhhhhhhhdhhhhhyhyhhhhhhdhyhhhddhdhdhhddhhdhdhhdhhdhyhhhyhhhhddhydhdhhhdhddhdhhhhhddmdddddhddmmmmmmmmddmddddmdmmmmmmmmmdhdmdmmmddddddmmmmdmddmmddddy/o+/::-:-   ` ``" << endl
			<< "			oddmdmddddddhhhhdddhddddhhddddhhddddhhhyhyddhhyhhhddhhhhhyhddhhhhddydhhdddhhdddddhdhhdhddhddhhdhhyhdhhdhhhhhhddhhhhdhhhhhhhddddddmdddddmmdmmmmmdmmmdddmmmmmmmmmmmdhdmmmmmddmmdddmmdddmmmmhsss:-://-`.:`" << endl
			<< "			.sdddddhhhhhhhhhhdhhdhhhhhddddhhdhddyhhhhhdhhhhhyhddhhdhdhhdhddddhdhddddddhddhddhhdhhdddhhddhhddhhhdhddhhyhdhdhhhhhddhdhhhhdhddhddddddddmmmmmmmdmmmmdhdddddmmmmdmddddmmmmddmmmmddmmmmdddhhsos:--.::. .." << endl
			<< "			 :hdhhhhhhhyhhhhhhdddddhhhdhdddddddhhyhdhhdhhhddyhhyhddhdhdhddddddddhddddhdddhhdhdhdhhddhddhhdhdhhhhddhhhhhdhhdhdhddhddhhdhdhddyhhdddddddmmmmmddmmmmmddddddddmmmmmddhmddmddmmmmmddmmddyhhhhoss+--`.-.``" << endl
			<< "			 .shhhyyhhhyhhhhhhhddddhdhdddddddddhhhhhdhdhhhhdhhhyhhdddddhddddmdddhhddhyhddhhhhhhdhhhhdhhhhhhdhddhddhdhhhddhhdhdddhhhhhhhhhdddhhhdddddmmmmmmmdddmmddddddmdmdmmdmdddmddddmmddddddmdddyssshh//+o-` `." << endl
			<< "			 `+hhhyyhyhyydhhhhhhdddddddddddddhdhdhhhhhhdhhdhhhhhhdddhdhhdhdddddhhhhdhhhddhyhdhdhddhhhhhhhdddhhhhhhhdhhhhdhhyhdddhhdhhhhhhddhhdyhhddddmdddmdddddddddddddhmdmmdmddddmdhmmdmddhhddhyyhyyysss:-:/-.`" << endl
			<< "			  -shhhydhhhydhhhhdhdhdddddddddddhdddhdhhhhhdddhhhhdhhddhdddddhddhdhhhhhhhhddhhhhddddhhhhhyhhddhhdyhhhdhhhddhhdyhdddhhhyhhhdhdhdhdyhhhmddmdmdddddddddddmdddhdddmmddhddmdddmmddhyyhdhosys++soyo:.-.``" << endl
			<< "			  `+yhhhhhhhhddhhhhdhhddddddddddhddddhhhyhhhhhhdhhdhhhhddddhhdhdddhddddhhddddhddhddhhdhhhhyhdddhhdhhhhhhhdhddhhhhdhdhhhhhhhdddhdhddyhhddhddddddmhddddddddhdhddmmmddhhddddddmdddssyyhyos+o++/+s+/:-.`" << endl
			<< "			   -ohhhhyhhhdddhhhddhddddddddddhddhdhhhyhhhhdhdhhdhdhhhdhdddhhdddhdhdddhddddhhddddyhhddyhhhhddhhdhhhhhhhhhhdhdhhdhhdhhhdhhdddhdhhddhhdddddddddmhdddmddddddhddmmdddhydmddddmdddy+oysys//:://:+.-::-.`" << endl
			<< "			   .-yhhhhhhhddddhhddhddddhddddddddhddhhhhdhyhdhhdhhhhhhdhdddhdddddhdddhdhddddhhdddyhhddydhhhdhhhhdhdhhhhddhdhdhdddhhhhdhhddddhhhyddhhhdddmmdmddddhdmdmddddhdddmhddhhhhhdddddddhyos/+oo:/` .:/.  `.`" << endl
			<< "				`ohhyhhhhddddhhdddhdddhddhhhhdhdddhhhhdhhhdhddhhhhhhhhdddhdddddhddhhdhddddhdhddhhdddhdhhhddhhhdddhhhddddhhhhhdhhhyddhhhdddhhdhhdddhdddmmmmddddddmdmdddmdhddmhdmhhdhyyyhhhhhhsos+//+:/.`  .-" << endl
			<< "				 .shhhhhdddddhddhdhddhdddhhddhhddhhhhhddhhddddhhdhyhhydddddddddhhddddddhhmhdhddhddddhdddhdddhhhdddyhdddhhyhhhdhddhhhhdhddddhddhddddddddmmmmddmmddmdhmdddhddmhmmhddhyhyh+hhhssoo+::/.-```  `" << endl
			<< "				  :ohhdhdddddhddhhdddhhdddhddhdhddhhhdddhhdhddhddhhhyhdddddddhhdhdddhdhhhhhhhhdhdhddddddhhdddhhdddhddddyhhdyhdhdhhhhhdhhdhdhdddhhdhdddddmmmdhddddmdddddhdhddhddhdddysyy+shs+-s++-`-``" << endl
			<< "				  --sddhshdddhhdhddhdhhdhddddddhdddhhddhhyhhdddddyhhydhdmddhdhhdhdddhhdhddyhdhhdhdddddddhyhdddddddhdddhhdhhhdhddhhhdhhhhdhhhhddhddddmdmmmmmddddddhddddddmddddhdyhhdysooosoo+.-/---." << endl
			<< "				  ` /shhosddddhhdddhdddhhhddhdddhdhdyddhyyyhhhdddhhhhhdddddhdhdhddddhydhdddhhdhdhddddddddhhhddhdhdhhhddddhddhhddhhhdddhhdddhhddhhddddmdmmmdmddmdmhddddddmdhdhdhhyydhyys/o/-::-/`  .`" << endl
			<< "					..so--yhdhhhhddhddddhhdddddddhhdhhdhhshhhhdddhhhdhdddddhdddhdddddhdhhddhhhhhdddhdhhdddhdddhddhhhdmdddhddhhhdddhddhhhdddhddddhmdddmdddmdmdmmmmdddddmddhshoho+yssh+sso//..../.`" << endl
			<< "					 `/+/.:odyshhhddhdddhdhdhddhdhdddhhddyhhhhddhhhhhddhhddddddhddmdhdhhhddhdyddhhhdddddddhdddmhddhhdddmdddhdhdhdddddhhdddhdddhddmdddmmdddddmNmmmmdmddddh+ohoh/:oo+ss:os--.``.-" << endl
			<< "					  `:-+/-oy+yhyyhdhdddhhdddddhhdmdhdddhhhdhdhyhhhhdddhddddddddhmmddhhddhhhyhdhhddhdddhmdddddhddhhhdddddhhhhdhddddddhddmhymmdddmddhdmhyyhdmNmmmmddmdhso+syos.-+o//o+:y/`   .`" << endl
			<< "					   ``.:+:-+-yhssdddddhhdhddddhhddhmdhdhdhddhhddhddhhhddhddmdddmmdddhhddddyhhhhddhhddhmddhdddddhhdddhdddyhdhhhddmdhddhddhmmmd+hmhohhhs:-ydmmmmmmmdho.--os++-:++/:.+:s-" << endl
			<< "						   `-/:--hdssdddddddddddddhhdhdddddmddhydhddddhhdmddhdmdhddddhddhhddddyhhhddhdddddddddhhdhhddddhddyhddhhhddmdddhdmddmmddo/hhohoss/`odmmdmmmmd+.-`.o://``--/-`-+o." << endl
			<< "							  .+/:/+++hdhddddddddddhhhddmdddddyyhhhddddhdddmdmdhddddddmmhhmmddhhdhdddddhhddddddhyhhdddhhmhhdhhhddddddmddmmdmmmmd+++yso+:o-:odmdmmmdmy`  --: ./.   -.../:" << endl
			<< "							   .o/+:/--hddddmmdddddddhhdddmddddhdhhddddmddhdmdddddddhddhddddhdhhhhdddddddddddddhhdddddhdhhhhddddhdddmdmmmmddmmdds+s--/+`-``sdmmmmmdm+   `:-  `-   `  .:" << endl
			<< "								/:-:-:.-+ydddddddddddhhhdddmdddhdddhdmddmddydhdddddhddhhmdddhdhdhdddddddhdhdmddhdddmddddhdhmddhdyydydmmmmmmdmmd//o+``.-.   +dmmmmdmy.   `:`   -     `." << endl
			<< "								`:`.-.:+::/++hddddhdddhhhdddmdhdddmmddddddddydddmdhhdhhddddmdddddddddddmddhhhdddddmmddddddddmd++:/symmmmmmmdmdd:..:.       +ddmmmmd+.    `    `" << endl
			<< "									  .:```-+//sys+oyhhshdddddddddddmhddddddyhddddhhdhhddddddddddddmdddmmhhhdhddddhdddydh+yddms::/hmmmmmmmmdmmh`           oddmmmdmo`" << endl
			<< "									   .` `  --:+/.-:o++oshddhsddmdddddddddddydddddddhdhdmdddddddddddhmddhdddddhdh:os:os` :ssyy: `sdmmmmmmdmmmo            :mdmmmdh." << endl
			<< "											   `:...`.+/+/:sddy+ymdddddddddddhhddddddhdhdddddddddhdhdddddmddmmdo-` ..+/`  `y-.`/- :mdmmmdddmmm:            -ydddmdy" << endl
			<< "												`` ` ``-`--.:+yyoosy/sdmmmddddhhddmdmdhddhdmddmmmddmyshhdmdmmmho. `.``    `s`   ` -ddddmddmmdy             .+dmdmd/" << endl
			<< "														  ``` `/ss+:``-:ohdddhhdddddmdhyo/yhyddddho-:.--hddmmmh-/-``      `/      -ddddmdddmd-             `sdmmmm:" << endl
			<< "														   `    -+//.`````+yd+.:sdh+sy+-..-:.-+:.-/.`/` +hmmmmo-.`         `       sddmmdmdmm:             `ymmdmd-" << endl
			<< "																 `:-`./-   `:o+`.+ds-:::::.-..s.   -``.`:hdmmdy`                   -hdmmdmmmm/             `smmddd-" << endl
			<< "																   `   `      .:.:y/+-`  `.-`--/-`     `.oddmms                     ydmmmmmmmo             `sdmddd:" << endl
			<< "																				 -+ `-`      ```.-`     `omddd:                     +ohmdddmmd.            `shdddd:" << endl
			<< "																				  `                     `+mddmh-                    `+hmddhddmy`           :yhdddh-" << endl
			<< "																										`odddmm/                   .shddddhddmh`         `:yhddddy" << endl
			<< "																									   `/hdddmmo.                 .ydhdddhdddmd`       .oydhdddddy" << endl
			<< "																									 `.ohdddmmmdy:`              -hddhhdddmdddh`      :hmddddddddh." << endl
			<< "																									 +hddddmmmmddds              `:odddddddddmy`    `+dmmdddddddddo`" << endl
			<< "																									`oyhdddmmdydddo              `-ohddddddddmy`    ommddmmdddmdddd+" << endl
			<< "																									  `-/////. .-.             /shddddddddmmmmd.    ydddddmddddddddy`" << endl
			<< "																															  .hhdddddddddmmmmd-    `-----/////-/s+." << endl
			<< "																															   .-/yhso+ddddyshy`" << endl;

		break;
	}
}