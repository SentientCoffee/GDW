#include "Characters.h"

void drawCharacter(int character) {
	switch (character) {
	case 0:
		std::cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmhyooo++yhmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdhs+osyyhhhhyo/:/smMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssso+++++////+oyhhs:-+NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdyys+::::-------::/+shdy/:yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNsyy+/--------------:://ohds/oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmshs/:---.....---------::/+ohdooMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMhyho:-----......-....-:+o++//+sdy+MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMhsdo:------.........-/ydmmNNmys++syodNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdod+:---...--......--omNMNNNNNNNdyo+ydhsydmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNod+------.---------/yNNmdhhhhhhhhyso+omNmhyooyhdNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNhsdo-----....--:://+hhydhyyysssssssoooo++yNMNNdhysosshyddmNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNy+shNy:------::/oyhddmNNdsyysoooooooooooooo++oymMMMMNNmmhysoo+ohdmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmhs+ohNMh::---:+yhdmNNNMMMNmyosoo+++++oooooo+++++++oymMMMMMMMNNmmhs++++hmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmh++ohmNMMh:---::/+syhddddmmddho+soo+ssyo--/oyso+++++++++sdNMMMMMMMmhysso+//+:mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmdhs+++ymNMMMNy:---::/+++++++yyhhsyh+/sy/-yhhy:-:/soo++////////+ohNMMNms//+ooosy+/:+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmyy//:/oydNNMMMMNs:---:::/+oo-.`/ydhs:sy///oo/ooo+//+/////////////////+ymNs//ooooooodh+//yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd/:--:ohdNNMMMMMMm+----:::://++::::o+o+++/::::::://///////////////////+++++shy+osoooo+ymds/:oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd/-::+sdNNMMMMMMMNh/------::::::::::::::::::::::::::::::://////:://///////+++++oyyoooooo+NNdy/-yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm/.-:+sddhyhdNMMMMmo:-----::::::::::::::--------::::::::::::://////////////++++/+++ossooo+/mMNmy//NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm-.-/oddo+//-:+hNMh/---:-::::::::::-::------------:::::::::::///+++++/+++///+++++++++++so+++NNNNms:oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm-.:+ymNo+////:-oms:-:::::::--------::----------------:::::::////++oo+++++++++++++++++++++++dMNNNMm+.NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm-.:ohmNm////+o:od+:::::::::---:::::::-----------------::::::////+++ossooooo+++++++++++++++++ymMNNNMh.sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN:`:+hmNMd://++/sy:::::::::::::::::///::::----------:::::::////++++oooyyyyyssssoo+++++++++++++++yNMNNN/NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNs.:ymNMMm::///so:::::::::::::::///++/:::::::::::::::::://///++++oooosNNNNmmmmddhysoo+++////+++++odNNMsMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy-odNMMMMo-:/o/:::::::::::////+++ooo//::::::::///////////+++oooosssymMMNNNNNNmmmmmdyso+++///+/+++/yNNsMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+-ymMMMMNmo:::::-::::::://++osyyhhdho//////////////++++++ooooosssyhNMMMMNMNNNNNNmNmmdyso+//////+++/od/MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+:dMMMNNNMNo::::::::://+oshdmmNMMMNNms+++++++++++++++ooooossssyyhmMMMMMMMMMNMMNNNNNNNmdy++/////++++++.dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+:mNMNNNNNo-:-::::://+oydmmNNMMMMMNNNNhsoooooooooooooosssssyydmNMMMMMMMMMMMNMMMMNNNNNNmds++/////+++++/+MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+-mMMNNNm+-:::::::/+oydmmNNNNMMNMNNNMNMNmdyyysssssssyyyhdmmNMMMMMMMMMMMMNMMMMMMMNNNNNNNmso++/////+++++/hMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNomMMNNm/--:-::::/+ydmmmNNNNNNMNNNNNNNNNNMMMNNNNNNNNNMMMMMMMMMMMMMMMMMMNMMNMNNMMMMNNNNNmyo++/////++++++:oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmyNMNm:--::::::/oymmmNmNNNNNNNNNNNNNMNNMNNNMNNNMMMMMNMNMMMMMMMMMMMMMMMMMMMMMNMMMMMNNNNNyo++/////+++++++:+NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+dMm:---:::::/ohmmNNNNNNMNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmmmNmmNNNMMMMMMMMMMMMMMMNNNNNmyo++////+++++oo++/:+yhydmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN/h/----:::::+ymmNNNNNNNNNNNNNNNNmNNNmmmmdddddmmmddddddddddmmNNMMMMMMMMMMMMMMMMNNNNNNdso+++//++++ooooo++++hmmdyoyhMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo------::::/odmmmNNNNNNNNNNMNNNNmmdddhdyssooooso+++//++oooshmmNMMMNNNMMMMMMMMMNNMMNmhso++++++++oooooooooooyNNdhhsodNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN-::----::::/ommmNNNNNNNNNNMMMMMNmmy+/:/---..--::-------::/+shdmmdddmNMMMMMMMMMNMNNmdyo+++//++++oooooossssssydhhhhhy+sNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+::::-::::::/ommmNNNNNNNNNNNNMMNdso--..-``````./....-:://+osyyyyyyyhdNMMMMMMMMMNNNmdys++++/+++ooooossssyysyyhhhhhhhhhy+sNMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs::::::::::::/omNmNNNNMNNmddhyyyhyso::-----::::/+/+++oooooooooooooshdNNMMMMMMMMNNmmdys++////+++oooossssyyyhhhhhhhhhhhhhhy+oNMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd-::::::::::::/ohNNNNMMMNmdhyo+//::////:/::::://////////////////+osydNMMMMMMMMNNmmdhso++//+++++ooooossyyyhhhhhhhhhhhhhhhhhhyohMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm/:::::::::::::/+sdNNNMMMNmhs+/::::-------------:::::::::::::///+oydNMMMMMMNNNNmdhyso+++//+++++oooossyyhyhhhhhhhhhhhhhhhhhhhhhooNMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmhyss/-::::::::::::::/ohmNNMMMNdyo/:-------------------------:::/+oshdNNMMMMMMNNmmdhysoo++///++++++oossyyhhhhhhhhhhhhhhhhhhhhhhhhhhhy+NMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNhhsssyyhy/::::::::::::::::/oydNMMMMNdyo/:::------------------:::/+oshmNNNNNNNNNNNNmmdhysoo+++/////+++osyyyhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh:MMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdysssyhhhhddh/:::::::::::---::::/+shNMNMNNmdhhys+///::-------:://+osyhmmNNNNmmmmmmmmdddhyyso+++//////+osyyyhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhsssmMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdhsssyhhhhhhdmmy:::::::::::-------:::/+odmmNNNmNmmmddhhhhysoossyyyhddmmNNmmmddddddddddhyyssooo++/////+osyyyhhhhhhhhhhhhhhhhhhhhhhhhhhhhddddmmmmmohNMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmyoosyyhhhhhhddmmho:::::::::::::--------:::/+ossysossyyddmmmmmddmmmmdmmdddddhhhhhhhhhhyyysooo+++/////+osyyyhhhhhhhhhhhhhhhhhhhhhhhhhdddmmmmmmmmddddddy+oMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdoossyyhhhhhhddmNyoo::::::::::::::----------::::///::::://+ooosssyhyyyyyyyyyyyyyyyyysssoooo+++/////+osyyyhhhhhhhhhhhhhhhhhhhhhhhhhddmmmmdddddhhhhhhhhhhhho+hMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmyosssyyyhhhhhhhdmmhoos/:::::::::::----------------:::::::::///+++oooossssssssssssoooooo+++++///////+syyyyyhyhhhhhhhhhhhhhhhhhhhhddmmmddhhhhhhhhhhhhhhhhhhhhhhyo+hNMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMNdsooosyyyyhhhhhhhdmNmso:oo::---------------------------------::::////+++++++++++++++++//////////::/+syyyyyyyyyyhhhhhhyhhhhhhhhhddmmmddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhyo+dMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMmhsosssssyyhhhhhhhhdmNNy+o/+o/:--------------------------------------:::::::::::::///////::::::::::+osyyyyyyyyyyyyyyhhhhhyhhhhhdmmmddhhhhyyyyyyyyhhhhhhhhhhhhhhhhhhhhhhhhyyshmMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMdyooossssyyyyhhhhhhhdmNNmh+/o:o/:--------------------------------------------:::::::::::::::::::::/+syyyyyyyyyyyyyyyyyyyyyhhhddmmddhhhhyyyyyyyyyyyyyyyyyyyyyyhhhhhhhhhhhhhhhhhhysodmMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMNNmhsoosssssyyyhhhhhhhhdmNmhs+:/+//+::-------------------------------------------------------------:/osyyyyyyyyyyyyyyyyyyyyhhhddmddhhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhhhhhhhhhhhhhyssdmMMMMMMMM" << std::endl
			<< "MMMMMMNmmmhdyso+++ossssssyyhhhhhhhhhdmmdyo/:/+/+:+/:----------------------------------------------------------:/+syyyyyyyyyyyyyyyyyyyyhhhdddddhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhhhhhhhhhhhhhhhysyhNMMMMM" << std::endl
			<< "hyysoosoosooossssssssssyyyhhhhhhhhdmmdy+/:--:+/o://:------------------------------------------------------:/+osyyyyyyyyyyyyyyyyyyyyhhddmddhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhyhhhhhhhhhhhhhhhhhhyosdNMM" << std::endl
			<< "sssssssssssssssyyssssyyyhhhhhhhhddmdy+/:----/:-o:+/:-------------------------------------------------://:oyyyyyyyyyyyyyyyyyyyyyhhddmddhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhhhhhhhddhhhhhhhyo+hN" << std::endl;

		break;
	case 1:
		std::cout << "		                                                                                                                    ` ````````                                                                              \n"
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
		std::cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmmdhyyyyysssssyyhMMMMMMMMMMMMMMMMMMmyyssssssssssssssyymMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmhhhhyso++////::::::/+hhhhyyhMMMMmhhhhhhs++:::::::--::::://shhhhNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNddddo::::::///::::::::::::::----/dddms::::::///:::::::-----:::::::::hdddmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNd::---:::::::::::::::::::::::-----:::::::::::::::::::::::------------::::/NNNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNd::---:::::::::::::::::::::::-----:::::::::::::::::::::::------------::::/NNNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm++//:--------------::::::::::::::-----------:::///////////::::::::::::::::::::----:::::++dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMho+----.....---------::::::::::::::::::::::::--:::////////////::::::::::::::::::::::::::::::+oyMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMyy/--.........-------::::::://///::::::::::::::::::://///++////:::::::::::::::::::::::::::::::--/hhMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdh--............-----::::://///////:::::::::::://:::::////+++////::::::::::::::---:::::::::::::::::::ddddmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNs``............-------:://////////::::::::://///////:::///++++////::::::::::::::::::::::::::::::::::::::::+NNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/:............-------::::///::::::::::::-::::::////////////++++///:::::::::::::::::://////////:::::::::----://mNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNoo:-..........---------:::::::::::::::::::::::::::::////////////++///:::::::::::::::::::///////////:::::::---------yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh//--............-------:::----::::://////////////::::::://///////////////:::::::///////////////////////:::::::-----..sMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs``..............--------------:://///++++++++++++++////////////+++///////:::://///////+++++++++++++++/////::::::-----oddMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmdo--............--------------::///++++++oooooooooooo+++/////////+++//////::://///++++++++++oooo+++++++/////:::::::----/+oMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNN/--..............------------::::///+++++++ooooooosssssso++/////+++++////////////+++++++++oooooooooooooo+++////:::::::----/NNMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm::--..............-------------:::://///++++ooosssossssssssss+///++++++++///////+++++++++++++++++++++ooooooo+++//:::::::::::/yyNMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm--..............--------------:::::++ossyyyyyyyyyyyysssssssyy++++++++++++///+++++++++++//////////////+++ooooooo////:::::::::://mMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMho+................------------::://ooyyyhhhhhhhhhyyyyyyyyyssyyysooooooooo++++oooooooossssooooooo+++++/////++ooooo++///:::::::::::mMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMhy+................------------:::/+ooyyhhhhhhhhhhhhyyyyyyyssssssssssssssooooooosssyyyyyyyyyyyyyysssssoooo+++//+++oooo///:::::::::::mMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdd:----..............----------::::++syyhhhhhhhhhhhhyyyysssssooooooooooooooooooosssyyyyyyyyyyyyyyyyyyyyyyysssoo++//+++oo++//::::::::::mMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNd----...............-----------::://osyhhhhhhhhhyyyysssoooo++++++///////////+++++ooooooosssssssyyyyyyyyyyyyyyyysoo++//+oooo+//:::::::::mNMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/ `----...............-----.---::::/++yyhhhyyyyyssssooooo+++////////::::::::::///////++++++++oooooosssssssyyyyyyyyyyoo+//++oo+//::----::://yMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM//-..--.....................---::::://ssyyyyysssssoooo+++///////::::::::::::::--::://///////++++++++oooooosssssssyyyyyss+++//oo+++:::::--:://yMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmss-------.....--........--....--:::::/++yyyyyssssooo++++///:::::::::::::::::::::---::::::///++++++oooooooooooosssssyyyyyssoo+//ooo++:::::--:::/yMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmdy::----.....-----.......---..---:::://+osyyssssooo+++////::::::::--:::::::::::///----::::://+++ooooossssssssssssssssssyyyyysso//+ooo+//:::--::::yMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMddo+/----.....-----.........--...--::::://ossssoooo+++///:::::::--:::::::::////////+/::---:::://+oossssssssssssssssssssssssssyysso//++oo+//:::----::odmMMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM-------.....-------.......--...--:::::::++ossoo+++//::::::::::::::///////+++++oooo+++::---::::///++sssssssssssssssssssssssssssssss++++ooo///::::--:::/+MMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM..-----.....--................---::::///oooso++///::::::://///++++ooooooooooooooooo++::---::::///++oooooooooooooooooooooooooosssssoo+++oo++//:::----::/MMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/.-::----......-...........----..---::::::/++ooooo++++++++++++ooooooosssssssssooooooooo+/:-----::::///++++oooooooooooooo++++++++++++ooooo+++++++///::::----:MMMMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN//-..-----....---.........------------::::::/ooosooooooooooooooooooossssssssssssooooo++//:--..---::::///++++oooooooooo++++++++++++++++++++++++++++///::::----:ssmMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmys..-----.....----.....---.-----------:::::://+ssssooooooooooooooooosssssssssssooo+++++//::-....----::::////oosssssooo++++++++++++++++++ooo+++++++++/////:::---:::dMMMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy::-------..-------...----------------:::::::++ossssooo+++++++++oooooooooossssooooo++//:::---....-----::::///sssyyssoooo+++++++++++++++++ooooo+++++++/////:::::::::hmNMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNms::---------------------------------::::::://ossyysso++//////////++++++ooooossssooo//:::-----....-----::::///yyyyyyysoo++++++++++++++++++ooossoo+++++++/////::::://+ohMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNo//::-----------------------------::::::://::++syyyyoo++////////////+++++ooooosssssoo//:::-----....-----::::://yyhhhyyoo+///////+++++++++++oossssso++++++//////:::://++yMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm++:::------------------------------:::::///:///ssyhyssoo+++oooo++/::///////++ossyyyysoo//:::----.......-----:::::sshmdhh+/:....-------::///ooossyysssoo////++//////::///+yMMMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMho+:::----------------------------::::::://////+ooyyhhhyyoosyyhhhhs++..-------://oosssss++/:::---............---:::://yhhhh//-...........---::oosyyyyyysss++///++///////:://+ssMMMMMMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMhy+::------------------------------::::::://////+osshhhhhyyoosyhdddds+/.......--::/++ssooo//::---------..........---::::+ooss+/:....--------:://oosyyyyyyyyyss+///////////:://///yysoyMMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNhh/::----------------------------:::::-:::///:///+ooyyyyyyyssooooshhyys+/.....----://++oo++/::------------.........-------::/++++/:::::::::////+oooosssyysssssss+++//////////////////-./MMMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMMMmmmmh..-----------------------------::::----:////::/+++oo+++++++oo+++++++++++/:::::////+++++//:::--------------.........-------::://+++ooooooooooooooooooooooo+++++oooo+//////////////////++sNNMMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMMNN..-::-------:::::::------------::::::-----::://///////:::::::::::::://///////////////////:::-------:::::::-------.......-------::////////++oooooooooo+++++++//////////////////////////////+++++NMMMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMMMd++------------:::::::::-----:::::::::-----:::///////::---------------------------------------------:::::-:::-------.......-------::://///////////////////////////////::////////////++/////////+++mmNMMMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMyo+::::::------------------------::--------:::://///:::----.............................----------------::------------...---------::--::://///:::::::::::::::::::::::::::::::::::///////+++++///////ossshMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMMMo:::::::::::::--------------------------::::://///::----....................................-----------------::-------..----------::---:://///::::::::::::::::::::::::::::::::::://///////+++++/////++++sMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMMdd+:::::::::::::------------:::------::::::::///////::--..........................------................---------::-----------------:::::--/////:::::::::::::::::::::::::::::::::--://///////+++++////++++sMMMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMN::::::::::::::::---::::::----:------:---:://+++++/::---....................--------------....................------:::--------------:::::::///:::::::::::::::::::::::::::::::::::--:://////////+++++++++++sNNMM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMMMN:::::::----:::--------:--------::::::///++oo+++:::----.................------:::::---..........................-------::::----------::::://///::::::::::::::::::::::::::::::::-----::/++//++/////////////++++NM" << std::endl
			<< "MMMMMMMMMMMMMMMMMMh//:::::::--:::::---::::::///++////////////++///::-------..............-----:::////::---............................-------:::::-------:::::////:::::::::::::::::::::::::::::::::-----::/++//+++++////////////++++" << std::endl
			<< "MMMMMMMMMMMMMMMMso/:::::::::::::::::::::::/+ossyyoo+////:::::::::--------..............-----:://+++//----.............................---------::::::::--:::::////::::::::::::::::::::::::::::::::::-----:://////+++++//////////////" << std::endl
			<< "MMMMMMMMMMMMMNyy/::::::::::::::::::::::://oosyyyyso+//::---------------..............------:::+++oooo::---............................----------::::::::::::////::::::::::::::::::://:::::::::::::::------::::::////////////////////" << std::endl
			<< "MMMMMMMMMMMmhy:::::::::::::::::::::::///++ooooossoo+::------------------...............----:::+++oossoo/----............................----------::::::::::::::::::::::::::::::://////:::::::::::::-------------:::////////////////" << std::endl
			<< "MMMMMMMMMMMy--:::::::::::::::::::::///++++/////++++/::-------------------..............-----::////+sshho-------..........................---------::::::::::::::::::::::::::::://///////::::::::::::-------.......--::::::::::::::::" << std::endl
			<< "MMMMMMMMMMMy:::::::::::::::::::::::+++++////////////::-------------------..............-----::::///::yho:-...---------..............--..----------:::::::::::::::::::::::::::://////////::::::::::::::::---......```...----:::-----." << std::endl
			<< "MMMMMMMMM+::::::::::::::::::::::/++oo+//::///////:::---------------------................-----:::::--+++o+`````....-------------------------------:::::::::::::::::::::::::://+++++/////::::::::::::::::-----....````````..........." << std::endl
			<< "MM+//////:--:::::::::::::::://///++++/::::///////:::-----------------------..............-------:::--::/++::.``````.....------------::::::::::::::::::::::::://///::::::://+ss+++++/////::::::::::::::::-----....``````````........." << std::endl
			<< "oo-.......-----------::::://///++++///:::://///:::::------------------------..............-------------::/++:::--``........`......-----------::::::::::::///////:::::///++ooss+///////::::::::::::::::::-----....````````````......." << std::endl
			<< "..............-------:::://///+++/////::::::://:::::----.....-----------------.............---------------//+++oo::+++//::----------:::::::::::/++///////++++++++++++oosysss++///////:::::::::::::::::---.---....````````  ``......." << std::endl
			<< "..-------------------:::://///+++//::::::::::::::::-----.........---------------...........-------------.---//oyyyydmdddhhsooooooo++oosssooooosshhsssssyyhhyyyyyyhhhhmmddyoo///////:::::::::::::::::::---.--......``..```    `......" << std::endl
			<< "..-------:::---------:::::////++///::::::::::-:::::-----.....```....------------..---.......-----------.....--://yydmmNNNNNmmmmNNNmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNddso+/////////:::::::::::::::::--..---.....````..```    ```...." << std::endl
			<< "..-------:::::::::::::::::::///////:::::-----------------......`````.....--------------.....-----------.......---::++shhmmmNNNNNNNNNmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNdhyoo////////////:::::::::::::::--..----............`````   ``...." << std::endl
			<< "..-------::::://///////////////:::::/:---------------------....``````````....---------------------------........-----://oosyyddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdhhsso++//////////////::::::::::::::---------............```````  `...." << std::endl
			<< "---------:::::::////////////////:--::::----------------------.....```````````........-----------------------.......-----:://+++sssyyyyhhhhhhhdddddddhhhhhyysssoo++///////////////////::::://:::----------.........--..```````` ```.." << std::endl
			<< "-----------::::::://////++++++++/--:::::-----------------------.....``````````````..........------------------.......--------::::///+++++oooooosssooooooo+++////////////////////////////////:::---------.........---..```````` ```.." << std::endl
			<< "..------------::::://////++++++++::--:::::---....--------..-------.....``````````````````........--------------......----------::::::::::::::::://////////////////////////////////////////:::----:::::--.......-----..```````` ```.." << std::endl
			<< "----------------::::::://///+++++//-.---::---......-------.....-----.......````````````  ```````........--------------------------::::::::::://////////////////////////////////////:::::::-----:://:::---...---:::--`````````` ```.." << std::endl
			<< "-------------------::::::://///////---.-::::---.......-----.......-------.......````````````````````````.........---------------------::::::::://///////////::::::--------------...............--:::---------:::/:--.......``` ```.." << std::endl
			<< "---------------------::::::::::::::---.---::::---.......-----........-----------.......`````````     ``````````````.......-------------:::::::::::-----.........`````````````````````````````````...``.......:::::--...-...``` ```.." << std::endl;
		break;
	case 3:
		std::cout << "                                            `.-:/oyhhdmmddmmmmmmddhyysoo+:-.`              `````                                          " << std::endl
			<< "                                        `.-+sssooo+ooo+////+shddhdmNNmmmmmdhyo:.`   `-:+osyyyyyysso+/:-.`                                       " << std::endl
			<< "                                      .-+yhy+:-:/+o++//+osyysys/-:/oo+++++++oyy+-...:sdmmmmmmdddmmmmmdhyo+/-.`                                  " << std::endl
			<< "                                   `-/oyyo/.-:++/:--.-::/+/::-----------------:::----:///////:::://+oyhdhyooso+:.                               " << std::endl
			<< "                               `-/++oo/:.-//--.-------:----------------------------------------:::::::--...-:+o+:/os/.                          " << std::endl
			<< "                             `.-://+/-..-::---------------------------------------------........-----:::::-...:+o+:/sy/.                        " << std::endl
			<< "                           `.-::-//:..--:-----------------------------------------..............---------::::--.-+o+::sy/`                      " << std::endl
			<< "                          `-::-://-.----------------------------------------...```....--------:-------::::::::::--:+o/./yo-`                    " << std::endl
			<< "                          .-:-://:----------------------------------------..`...-----------..---...------:::::////::/++--+s:`                   " << std::endl
			<< "                          `------------------------------------------..-....--::----....-::///////::--.....---::-::::://:./o:`                  " << std::endl
			<< "                          `----------------------------------------:-....--::---...-/osyyhdddddddddhhyso/:-....--.-:::::/:.-/:`                 " << std::endl
			<< "                        `.--------------------------------------:---....----....:oyhdmmmmddddddddmmmmmmmdhyo/:-....-::::::-.-/:`                " << std::endl
			<< "                       .-------------------------------------::---....----.`.-oydmddhhhyyyyyyhhhhhhdddmmmmmdhyo/:-...-----::-:/-`               " << std::endl
			<< "                     `.------------------------------------::::--....---...:ohddhhyysssssssssssssssyyyhhddmmmmdyo+:-...--::--:--.               " << std::endl
			<< "                    `.------------------------------------:::--..``---...:ohhhyysssoooooo++++o++ooooooossyyhddmmhso+:-...----::-.               " << std::endl
			<< "                  `.-------------------------------------:::-..```.--.`.+hdhyysooooo++++++++++////////++++oosyhdmdys+/--...--::::.`             " << std::endl
			<< "                  `.-----------------------------------:::---.` `....`-+yhyysoo+++++++//////:::::::::://////+++oyhdhso/:-...-::::-.`            " << std::endl
			<< "                ``------------------------------------:::----```.....-ohhysoo++++++////:::::::::::::::::::::////+oshys+/:-.`.-::::-.`           " << std::endl
			<< "                `.------------------------------------::----.  `...`-ohhyoo+++++////::::::----------------:::::////oyys+/:-.`.-:::--.`          " << std::endl
			<< "               `.-----------------------------------:::---..` `...`./yhyso++++////::::---------------------:::::::/+osso//:-...-:::--.`         " << std::endl
			<< "              `.---------------------------::::--``-+yho:-.`  `..``:ydyso++++///:::::----------------------::::::////oso+/::.`.-:::---`         " << std::endl
			<< "              `.--------------::::/++ooossyhhhho- `:oddo:-`  `...`.ohdyso++++//::::------------------------:::::::////oo+///-...-::---.`        " << std::endl
			<< "             ``..--:://+ossyyhddddmmmmmmmmmmmmmy: `:ydy/-.`  `...`.oyyso+/////::::-----------------::---:::::::::::///+oo++/:...-:::--.`        " << std::endl
			<< "            `.:/osyhhddddmmmmmmmmmmmmmdddmmdmmms-`./hdo-.````....`-oso++/:::--..../oo++/////::::---------:::::::::://++ooo+/:.``.-::-..`        " << std::endl
			<< "           `:/osyhhddddddmmmmmmmmmmmddmmmmmmmmmy/-:sdy/``````.--..-oso+//::--.`` -sdhsooshdhhhhyyssooo+/:------:::://++ooo+/:.``.://:-..`       " << std::endl
			<< "           .:/+oyhdddddmmmmmmmmmmmmmmmmdddddmmms:.:sds:```..`.--.`.+so//:::-..`` -shhs:-+hddddddddyyyyhh+.``````...--:/oo+::-....:/+/:-.`       " << std::endl
			<< "          `-/+oshdddddmmmmmmmmmmmddddddddddddmd+` -ody/-.-....--.`./ss+/::-...`  .ohhyssyhdddddddhhyhhdh/`  ``````...-::/:---.`.-:/++yhs/.      " << std::endl
			<< "           -/+oyhhddddmddmmmmmmmmmddmmmmdmmmmmd+` -odho/::----::-..:oso+/::-..`` `:ymhyssyhddddhysoshdmy-  ```````...--:::--..`.-/++odmdho:`    " << std::endl
			<< " .: / +syhdddmmmmmmmmmmmmmmmmmmmmmmmNNd / ``:oddy + / :-- - ://:.`.+sso+/:-..``` `:hmdyssssysoosssyddy:` ```````....--:::--....-//+hmmmddo-`    " << std::endl
			<< "          `-/oshhhhhhyyssyyyssssssssssssssssyys:.-/sdmho+:---:+/:-..-+ss+/:-..````  -+hddhyyysssyhddh+.`````````...---::::-.``.-:/:+hddddddo.   " << std::endl
			<< "          `:syo++/::::::::::::::::::::::::::////://sdmho/:-..:/++:-.`:oso/:--..````  `./oyhhhhhyyyo/.` ````````...---://:--.`..:/::oddhyyyy+.   " << std::endl
			<< "           ./:-----------------------------:-::::/+shhs/:---..:+o+/-..:oso/---..````    ``------..`` `````````...-.-/++/:-.`.-:/::odmmdhyo+:`   " << std::endl
			<< "            ..---------------------------------::::/+oo/-----..-+oo/-..:oo+:---..`````````     `  ``````````.....--+so/:-.`.-:/:-/hmmmmmdhs:`   " << std::endl
			<< "            `.----------------------------------:::::///:-----..-/oo+:..-/+/:--...`````````````````````````.....-:oys+:-.`.-:/:.-+yhhdddmmds-   " << std::endl
			<< "            ..-----------------------------------:::::::::-----...:+so/-..-//:---..```````````````````````.....-/sys/-....-::-.-/oooooooshdo.   " << std::endl
			<< "           `.-------------------------------------::::::/::-----..`.:+oo/-..-:::-...`````````````````........-:+ss+:....--:-..-/++++++//::-`    " << std::endl
			<< "           `.---------------------------------------::::::::------.`.-:+o+/-..--:---...```````````........-:/oss+-....--::-..-/+++++////:.`     " << std::endl
			<< "           `.---------------------------------------:::::::::::------.`.:+++/:-..-----................--:/+sso/-....--::-..-:/++++++////:-`     " << std::endl
			<< "           `---------------------------------------::::::::://:::::::-...--:/++/:-..---------------:://+oo+/:-...------..-:/+++++++/////:-`     " << std::endl
			<< "           .--------------------------------------::::::::::::///::------....-:////::-----------:::://::--...-------....-:/+++++++/++////:.`    " << std::endl
			<< "          `.------------------------------------------::::::::::///:::------.....-:::::::------------..---------....-://///++++//+//+////:-`    " << std::endl
			<< "          `.------------------------------------------::::::::::::////::::::---...``..------------:-------.......-//+++++++//////////////:-`    " << std::endl
			<< "          `..---------------------------------------:--:::-::::::::://++++///:::::--.....`...............`..--:/+oo++++++++///////////////:.    " << std::endl
			<< "          `.--------------------------------------------:-:::::::::::://+oossssoo+++/::::-----......---://++ooooo+++++++/++///////////////:.    " << std::endl
			<< "          `.-------------------------------------------:----::::::::::::///+osyyyhhhyyyyyyo/-:+ssssssssssssoooo++++++++/////++/+++++//////:.    " << std::endl
			<< "          `.-------------------------------------------::---:::::::::::::::///+oosyyyhyyhhysosyyyssssssooooo+++++++++++/////+++++++///////:.    " << std::endl
			<< "          `.-----------------------------------------------------::::::::::::////+oosssssssysssssssoooooooo+++++++++++++////++++++++//////:.    " << std::endl
			<< "          `.------------------------------------------------------:::::::::::://///++ooossssoosssooooooo+++++++++++++/++///++++++++///////:.    " << std::endl
			<< "          `.------------------------------------------------------:::::::::::::::////++++ooooooooooooo++++++++++//////++++///////////////+/.    " << std::endl
			<< "          `.------------------------------------------:::-----------:::---:::::::::::////+++++++++++++++++++++++++++++++++//++++++///////++-`   " << std::endl
			<< "          `.-----------------------------------------------------------:----::::::::::////////+++++++++++++++////////++++////++++////////+oo/`  " << std::endl
			<< "          `------------------------------------:----:-----::-----------:::::--::::::::::::://///////++//+++////++++///+++////////////////+ymd/  " << std::endl
			<< "          .------------------:::-----------------:::::----:-----------------------::::::::::///////////////+oo+++///////+++//////////////ohmd+  " << std::endl
			<< "         `.-------------:::----------------------:::::/+//:::::::::::::::::::::::::::::://://::::::://:::/+ydho//////////++/////////////+sdmd+  " << std::endl
			<< "         `.------------:-----------------------------/sddyo/:::---:::::::--:::--------:::.......`.`./ssooyhmmho//////////++/////////++//ohmmdo` " << std::endl
			<< "          .-------::::-------------------------------:omNmdysoo++///+oyyo-.....`...--+hhs/:-:::://oydmmmmmmmmy+/////////////////////++/+sdmdho. " << std::endl
			<< "         `.--:::::////:----::::---:-------------------/hNNmmmmmmmmmmmmNNmhhyyyyyyhhhdmNmmmmddddmmmmmmmmmmmmmdo://///////////////////+/+ohddhhs. " << std::endl
			<< "         .---::://++++////::///::::-----------------:--/hmNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNdo::://///////////////////+oyddhhho` " << std::endl
			<< "        `------:////+//+++++++//::----------------------/ymNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdo:::::::://///////////////+shmhyhh+` " << std::endl
			<< "        `.------:/::::///+++++++//::::--:::-----------:--:ohmNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmmmNho:-:::::::::/::://////////+ohdhyyyy/  " << std::endl
			<< "        ./oo+/::::::::--::+++++++++//:::::::---------------:+ydmNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdo/--:::::::::::::://////////oydhysyys/` " << std::endl
			<< "       `/hh+:-::--:::::::::///+oo+++////:---::::::------------:/shmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmh+:-----:::::::::::::::://////+sddhyyyys/. " << std::endl
			<< "       .sdy:----------:::://////+++++/++/::-:::::::::------------:/+syhhddddddmmmmmmmdddddddddddhhs+/:---::--:::::::::::::::://///+shhyyyyyso/.`" << std::endl
			<< "       `/so:-----------:::::://///////+++//::--::::::----------------::/++ossyyhhhhhhhyyyyssso++/:----------:::::::::::::::://///+shhsosyyyo+/-`" << std::endl
			<< "      `.----------------:::::::://:::///+++//::::::::::::------------------:::::::////:::::::-------------::::::::::::::::::///++syysosyyyso++/." << std::endl;
		break;
	case 4:
		std::cout << "                                      `.`              ..`                      " << std::endl
			<< "                                        .:`           -.    ``                        " << std::endl
			<< "                                         ./-`       `:`  `..`` ```                    " << std::endl
			<< "                                  ``  `   `//`     `:.`.-.``.-:-.                     " << std::endl
			<< "                                  ``...-`  `//`    :-.:``.-//:`                       " << std::endl
			<< "                                     `.-:-  `+/`  -/:-`.:+/-`                         " << std::endl
			<< "                                       `-/:.`:+- `+/-`:++-`                           " << std::endl
			<< "                                         `++--++ -s:.+s+`                             " << std::endl
			<< "                                           ++/+o.s+-yh/                               " << std::endl
			<< "                                            ooos:d-ym/                                " << std::endl
			<< "                                            `shhosom/                                 " << std::endl
			<< "                                             :mmd+mo                                  " << std::endl
			<< "                                             `hNmdh`                                  " << std::endl
			<< "                                              oNNN:                                   " << std::endl
			<< "                                              :NNh`                                   " << std::endl
			<< "                                    `````.....:ss+.`````                              " << std::endl
			<< "                               ``...---------------------..``                         " << std::endl
			<< "                           ``..---....................--------..`                     " << std::endl
			<< "                         `..-............................-----:::-.`                  " << std::endl
			<< "                       `.-................................-----:::::-`                " << std::endl
			<< "                     `......................................-----:::::-`              " << std::endl
			<< "                   `.-.......................................----:::::/:.             " << std::endl
			<< "                  .----.......................................----::::://-`           " << std::endl
			<< "                 .--....``.....................................---:::::///:`          " << std::endl
			<< "                ..`````.........----:-------................--------:::////:`         " << std::endl
			<< "             `````.-:/++ooo++//::--://::::-----.```..--:::::--::::::-::////:-         " << std::endl
			<< "           ````.-/+osso+++++oooo++/:-:////::.```-:/++oooooooo+///:://::://:::.        " << std::endl
			<< "          ```.-/oss+///:::::::://+++/::://.``.:/+ssso++++++++ooo++//://://:::-`       " << std::endl
			<< "         ```-:+ys+//:-..````````.-:/+//::.`-:/oss++//::------::/+o++/::///::::.       " << std::endl
			<< "        `.`-/+yo/::-```````````````.-://:::/+ss+//:-..````````...-/++/:::+/:::-`      " << std::endl
			<< "        ..-:/ys/:-.````````..-.`````..://///ss+::-.``````````````..-///:-/+/:::`      " << std::endl
			<< "        --:/+h+:-.```````-+ossoo/.``.`-:///+y+::.````.-:::.````````..://:-oh+o:.      " << std::endl
			<< "        :::/oy+:.```````:oo++yysss.``..:///ss/:.```-+++ossoo-``````..-///-/hoso-      " << std::endl
			<< "        :///+y+:.```````+oohdddysy:``..////so/-.``.ooo+shysss``````...///-+yosyo:     " << std::endl
			<< "        :+///ss/.```````:sssyyo+o+.`..-////os+-.``-sooyhdhsss.`````..-///:ohsssy+     " << std::endl
			<< "        -/+///s+-.```````-+ooo++:.....//++//so:.```/ssssoooo:`````...-/+//yd+sso:     " << std::endl
			<< "         ./++//+/-.````````.........-/++o++/+o/-.```-/+++/:.`````...-/++/+ddoshy:     " << std::endl
			<< "          `:+++///-.....```........:/+oo++o+//+/-..```````````.....:/++//shs+++-`     " << std::endl
			<< "           .-/+++//:--.........--/+oo++oyo++o+///-.....``........-/+o+//+++++/:`      " << std::endl
			<< "           .---:/++++//::::::/++oo+++oyhhhy+/+o++/:--........--:/+oo//++++++//:       " << std::endl
			<< "           ..---::://++++++++++//+osyyyyyyyys+/++o+++///////+++oo+/++o++++++//-       " << std::endl
			<< "          `..---:://///++++++oosssssssssssssssso+///++++++++++++++oo++++++++//-       " << std::endl
			<< "          `..----::///++oooosssoooooooooooooooooooooo++++++ooooooo++++++++++//-       " << std::endl
			<< "          `...----:::///+++++ooooooo+++++++/////+++oooooooooooooo++++++++++///.       " << std::endl
			<< "          `...------::://///++++++++/////:::::::///+++oooooooooo+++++++++++///.       " << std::endl
			<< "          ....--------::::::://///:::::::----::::::///+++++++++++++++++++++///`       " << std::endl
			<< "          ....------------:::::::::---------------::::////++++++++++++++++////`       " << std::endl
			<< "          ....---------------------------------------:::://////++++++++++++///`       " << std::endl
			<< "         `.....--.-------------------------------------:::::///////++++++++///        " << std::endl
			<< "         `.....------------------------------------------:::::://////++++++//:        " << std::endl
			<< "         `....--------.----------------------------------:::::::://///+++++//:        " << std::endl
			<< "         .....-------...........-------------------------:::::::::////+++++//:        " << std::endl
			<< "         .....----..----............--------------------::::::::::////+++++//-        " << std::endl
			<< "         .....-----.----................---------------::::::::::::///+++++//-        " << std::endl
			<< "        `.......---------...............--------------:::::::::::::///+++++//-        " << std::endl
			<< "        `......----------...............-------------::::::::::::::///+++++//.        " << std::endl
			<< "        `.....-----.----------.........-------------:::::::::::::::///+++++//.        " << std::endl
			<< "        `.....----......-------.........------------:::::::::::::::////++++//.        " << std::endl
			<< "        ........--........--------.....-----------::://::::::::::::////++++//.        " << std::endl
			<< "        ......----............-----------------:::/::::::::::::::::////++++//.        " << std::endl
			<< "        ......----...............---:::::::::::::----::::::::::::::////++++//.        " << std::endl
			<< "        .....-----....................-------------::::::::::::::::////++++//.        " << std::endl
			<< "        .....-----....................-------------::::::::::::::::////++++//.        " << std::endl
			<< "        .....-----...................--------------::::::::::::::::////++++//-        " << std::endl
			<< "        .....-----...................----------------::::::::::::::////++++//-        " << std::endl;


		break;
	case 5:
		std::cout << "         `-:-.                                                                                                                                                     " << std::endl
			<< "        `yyyyyo.                                                        `````````````````                                                                                " << std::endl
			<< "        -dysyhdy-       `-::-                                   ```.....------------------.....```                                                                       " << std::endl
			<< "        `ydyyhhhy-    `+syyhho`                           ````....-----------....--.---------------...``                                                                 " << std::endl
			<< "  ````   -ydyyhddh/``.shyyhddh/                   ``````......------....---...............--------------..``                                                             " << std::endl
			<< " /oossso:--ydyyhhyyssyhdddmmmy.               `````````.....--------:::----------.....-...-..............---..`                                                          " << std::endl
			<< "`hhyhdmmhhhyyyyyhyyyhddmmmmh+.              ```  ``.--:/++++++++/::---:::::---------.-.-.......---:-:::::------..`                                                       " << std::endl
			<< " -shddmmdmmhyssyhyyddmmmdd+`              ``  ``.-:+osyyyyysssssssso+::::://::--------.......--:::://///:://::::---`                                      .-::.          " << std::endl
			<< "  `-/+shdmdhyyyhhhhdmmdhho               `` ``.:+syhysoo+++//////++oooo/::::///::---..``..-://+++ooooo++++////////::-.`                                 .+yyhdh:         " << std::endl
			<< "       `-/yhdhhhhdmdddddy:`            ``  `.-+shhso++/::--........--:/++/:::////-.```.-:/+osyyyyyyyssyyssso++///////:-`                   .--.`       .yyyhdmmo         " << std::endl
			<< "          `:shddmdhyyyhddy/`         `-`  `.:ohhso+/:-..``````````````..://::////.`..::/+syhysoo++++////+++osso+///////-.`               `oyyyhs-     -yhhhdmNd-         " << std::endl
			<< "             -/oydhyyydmddy/`        -.  `.:sdho+/:-.```          ``````..-::://:--::/+shyso++/::--.......--:/+oo+//////--.              +dhhddmd+` `:hhhhdmNd:          " << std::endl
			<< "                `hhyyyhdmmdh+`       -  `.:odhs+/:.``         ``..```````..-::::::://ohys++/:-..`````````````..-:++//////---`            :dmmmmNmhs+shhhhdmNd-``.:://-`  " << std::endl
			<< "                 hdyyyhhhyy:`        .  .-/hdy+/:.`         `:+ossso/.````..--://///shyo+/:-.```   `` `````````..-:///////:--`            :hNNNmdhhhhhdhhdmdyoshhhhhddo  " << std::endl
			<< "                 +++oo////+:        `. `.-+dho/:.``       `-.-+ssssssy/````.--:////odyo//:.````-::-.``  ````````..-://////:/::.             -yNNmmddddmhhddhhdddmddmmd+  " << std::endl
			<< "                    -----::/.       ..``.-+dy+/-.`        /s/+syhhhsosy-```.../////hho//-.``./ossssoo+.`  ```````..-:://///sso+.             `smNNmmdmddmmmmmmmmmddy+-   " << std::endl
			<< "                    `-----://`     `:-`..-+dh+/-```       oyoshhhhhs/+y/``....////+dy+/:.``:.`/+ssso+oy:  ```````..--://///oyoo:             `-dmmNmmmmmmmmmmdy+:.`      " << std::endl
			<< "                     .-..--:/:     :/:...-:yhs+-````      /hsoyhhhs/+sy.``...-////ohy+/-``-so+oyyhhho+os` ```````...--///+/oyosh:           .ymmddmmNNmmmmdho.           " << std::endl
			<< "                      .-.--::/.    ::::..-:+hyo:.````     `+hysso+++ss-``....:////+hy+/.``-yoosyhhhyo/+s`````````...--///++/s+smm+        `/dmmmmmmmNmmmhs/`             " << std::endl
			<< "                      `-..--:::`   `.-::---:+hs+-.```````  `./ssyso+:``.....://////hyo/-```oyo+ssyo+:+s/````````....--//++/osohdmd-       :hmmmmmmmmmmy-`                " << std::endl
			<< "                       .-..-:::-   ..--:/:--:+ys/..```````````````````.....:///////ohs+-.```+yyso++oso:````````....-.//++o/hsohddd:        .ohdmmmmmmd.                  " << std::endl
			<< "                       `-..--::/` `------//::::os/-.`````````````````....-//++o++///oys:.`````-/++/:.`````````...--.:/++o/hho+hddd+       .////+ydmmmo                   " << std::endl
			<< "                        ...--::/- .-------://:::://:-..``````````......-//+oo/:/++///oyo-.``````````````````....---:/+oo/sdh+ohhddd`     -+//:///+..-.                   " << std::endl
			<< "                        `-..--::/`----------:/+//::::----..........--:/++o+/:+y/:+++///so:..```````````````....---//+oo:+hso/+oooso`    -++//////.                       " << std::endl
			<< "                         .-.--::/:-------------/+++///:::-------:://++++/:/ohddds::+++////:--..`````````....---://+oo/:/++++++++oo:    -o++/////.                        " << std::endl
			<< "                         `-----:/:------------:---://++++++++++++++//::/oyhyyyyyyy+-:++++///::---......----:://++o+/:/+////////++o/   -oo++////-                         " << std::endl
			<< "                          .----:::-------.-------:::::::::::::::-::/+ossssssssssssss+::/++++////::::::::///+++++/::+++//////////+o/  :ooo++///-                          " << std::endl
			<< "                          `----:::-----...---------:://///+++++ooooooooooooooooooooooo+/:-://++++++++++++++++/::/+++/////////////++ :soo+++//-                           " << std::endl
			<< "                           .---:///----.....---------::://////////++++++++++++++++++////++//::--:::::::::://+/+o++///////////////++/ssoo++//-                            " << std::endl
			<< "                           `---:+///:---.......---:/:::::::///////////////////////////:::////+++++++++++ooo+++////////////////////sysoo++//:                             " << std::endl
			<< "                            .--://+++:---.......--oh/--:/:::::::::::::::::::::::::::::::::::::///////////////////:::::////////////syso++//:`                             " << std::endl
			<< "                            `---/+++++:---.......-/h/::/s/-.--::::////::::::::::::::::::::::::::::::::////////::::::::///////////+syso++/:`                              " << std::endl
			<< "                             .--:++++/+/---.......-smmmmmmdhysooooyy+/::::::::/o/::::::::::::::::://///:/::::::::::::////////+oooooso++//`                               " << std::endl
			<< "                             `---/+oo++//:--.......-yNNNNNNNNNNNNNNNmdddhhhhhdmNdyo++//////+s/::::/+oyh/:::::::::::///////+ossssoooso+//.                                " << std::endl
			<< "                              ...-++o++///:--.......-smNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmmmdmmNmdhhhhhdds::::::::::///////+syyssssoooo+//-                                 " << std::endl
			<< "                              ....:/++o+///:---......-/hmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmh+:::::::::://////+ssyyyysssooo++/:                                  " << std::endl
			<< "                              `...--/+oo+////---.......-+hmNNNNNmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNdy+:-::::::::::////osyyyyyyyyso+/+//:`                                  " << std::endl
			<< "                              `....--//+++////:--........-/shhhhyyyhhdddmmmNNNNNNNNNNNNNNNNNmmdy+:-----::::::::://+syyyyyyyyys+/::///.                                   " << std::endl
			<< "                              `....---:/++++/+/:--..........-:/++ooosssyyyhhdddddddddddhhhso+/:--------::::::::/+osssyyyyyyso//::::::                                    " << std::endl
			<< "                              `....----/++oo+////----...........----:::///+++++++++///::---------------:::::://+ssssssyysso///::::::.                                    " << std::endl
			<< "                              `.....----:/++o+/:/+//::::--------------------------------------------:::::::/+oossssssssso+////::::::                                     " << std::endl;

		break;
	case 6:
		std::cout << "                                                `````.....``                                                                    " << std::endl
			<< "                                             ```........-.....`                                                                       " << std::endl
			<< "                                           `...............----.`                                                                     " << std::endl
			<< "                                       ```........---------------`                                                                    " << std::endl
			<< "                                     ````......`.....`...----:---.                                                                    " << std::endl
			<< "                                      ```....``````````  ``..-----.                                                                   " << std::endl
			<< "                         `..--::///:-.......`````...--::::-.``..---.                                                                  " << std::endl
			<< "                       .:+osyssoooyhys/-........-/++ossooooss+:.----`                                                                 " << std::endl
			<< "                     `/+shhhhhyshyoshhho--....-/+oyhddhsshs+syys/:--.`                                                                " << std::endl
			<< "                     /+hdhhdNddhddy+shhdo-..-:o+ydhhmdyyhdho+syyy+/-..         ````                                                   " << std::endl
			<< "                    .oomhhhNNhyyhmdoohddhsssyhosdhhdNhsyhhmyo+hhhho/--`     ``..-::.                                                  " << std::endl
			<< "                    -oomddmNdyyhhdh/sddh+/+oyhosdddmmyosyhddoohhhmmhyso-   ...-:+///`                                                 " << std::endl
			<< "                    `++ymmmmdhhddho+ymo-..-:+ss+dmmmmhyyhddy+yhhhdhsso/-``-..-:++//+.                                                 " << std::endl
			<< "                     -+oosyyyyysooshms-..-://ohyosyyhyyyysoohdddddo++o+:.--.-:++++/+-                                                 " << std::endl
			<< "                     `.:+soossssyddmh-..-:///+yddysooooooshdmmmddho++oo/----:+++++/+-                                                 " << std::endl
			<< "                      .../yhdddddddh+...-://+ossoyhdhdddddmmmmmmhso++++/---:+o++++/+.                                                 " << std::endl
			<< "                      ...-/syyyyso+/:..-:/+oyyyo/:/oyyhddddmmdhsooo+////--:+sooo++++`                                                 " << std::endl
			<< "                      ....-:/::::--....-:+yhys+:---::/+++ooooooo++++////::/sysoo+/+:                                                  " << std::endl
			<< "                      ..-://+/:------..:+ssso:-------:://+oo++////////////ohhyo+:/+-``                                                " << std::endl
			<< "                     `..-----:ds:::::.-//++++////////++osymso+:--::////++/ssyo:-:/:////:-.`                                           " << std::endl
			<< "                     ........-+s+/:--.---+//+//////++ooo++/--....-::///+++yh+--://+o+++/::--.``                                       " << std::endl
			<< "                 `.......````````````............---------------:::///++/-//--.--:o--....................`                            " << std::endl
			<< "                `........``````````````...............------:::::::://+++---------+--...``..................`                         " << std::endl
			<< "               `...-.....``````````````............--------::::::::///++o:-...----+:-...````````............-..`                      " << std::endl
			<< "               `.--:-.....`````````````...........--------::::::::///+++s+:------:++--..``````````..........-----.                    " << std::endl
			<< "               ``-:/-.......``.`````............--------:::::////////+++os+:--::/+s/.-..``````````````.......------`                  " << std::endl
			<< "              `  ```............................------::::::////////+++oosyhs++oso/-.:..``````````````......--------.`                " << std::endl
			<< "             ````.``..........................------:::::://///////++++ooohmo++/:-.../..```````````````.....----------`               " << std::endl
			<< "            `````.``.........................------:::::://///////+++++ooyd/-......../-.``````````````........---------.              " << std::endl
			<< "            `````.``........................------:::::::////////+++++oosd/.....````./-.``````````````..........--------.             " << std::endl
			<< "           ``````.``.......................------::::::::///////++++++ooh/......````.+:.```````..````............--------.            " << std::endl
			<< "          ```````.........................------::::::::::://///+++++ooh/.....```````/:...```...```................-------.`          " << std::endl
			<< "          ````````.`....................------::::::::::::://///+++++oy/.....`````` `//.........`...................--------`         " << std::endl
			<< "         `..`````````...............------:::::::::::::::://///++++ooy/....```````  `//-.............................--------`        " << std::endl
			<< "         `...````````.........--------::::::::::::::::::::////+++++sy:.....```````  `//:..............................--------`       " << std::endl
			<< "         `.....``````...........------::::::::::::::::::://///+++osy:....``````   `.-:::-.......--........---..........--------`      " << std::endl
			<< "         `........````...............-------------:::::://///+++oyh:....``````..-:::::::--.....----.......----............------`     " << std::endl
			<< "         ..........-.``-..............-----------:::::::////++oohy:.......-://////:::::::---...------.....----.............------`    " << std::endl
			<< "         .........---``.--............---------:::::::////++++sho-...````-+o+///::::::::::::--..-::----...---......```.....----::-    " << std::endl
			<< "         .........-.````.---..........-------:::::::////++++oyh+-....``````.---------:::::::/:-..-::----...--.............------::-   " << std::endl
			<< "         `.........``````----........-------::::::////++++oohh:......`````   `.......---:::////:.--::----..--.............-------::.  " << std::endl
			<< "         `.....-.````````.-----....--------::::://///++++oyds-.....```````     `.....----::///++:.--::---..--...............-----:::` " << std::endl
			<< "         `......``````````.--------------::::://///++++osdd/-......`````        `.....-----:://+o/---::::-.---................----::-`" << std::endl
			<< "          .----.```````````.------------:::::////++++oshmh:.......``````       `......-------:::/++:--::::.---................-----::-" << std::endl
			<< "          `..--..``````````.-----------::::////++++oohmms-......````````   ``-://:--..----------::/o+:://+-.--.................----:::" << std::endl
			<< "          `.......``````````./:-------::::///++++oshmmd+.....``````     `-:///////::--------------::+o+/:+/.----...............----:::" << std::endl
			<< "           .......``````````.+/::---::://///+++oyhdddh:.....``````  `-:/++///////::::--..-----------::+oo++-----.......`.......---::::" << std::endl
			<< "           `....-.```````````:+//:::::////++oshdddhhs-...````````-:/++++////////:::::::-.....----------:+ss+-:-................----:::" << std::endl;

		break;
	case 7:
		std::cout << "                                                 ``.-:/++oossoo/:.`                            " << std::endl
			<< "                                           `-/+oyyhhhyhhhhyyyyyyyyyo/-`                              " << std::endl
			<< "                                       `.+ydmdddhyyyyssyyyyyyyysyyyyyys:.....```                     " << std::endl
			<< "                                    `-ohddddddhhysssssyhhddmdddddhhyssossyhhdhhys+:.`                " << std::endl
			<< "                                   :ydmmmddddhhyyysyyhddmmmmmmmmddhyssyhddmmmmmmmmddy+-`             " << std::endl
			<< "                                 -sdmmmddddhhyyssssyhddmmmmmmmddhhyssyyhdmmmmmmmmmmmmdhs:.           " << std::endl
			<< "                               `+dmmmmmmdddhhysssyhdmmmmmmmdmmmdhysssyyddmmmmmmmmmmmmmmmdo:.         " << std::endl
			<< "                              .ymmmmmmmddhhyysssyhddmmmmmmmmmmdhyssyyhddmmmmmmmmNmmmmmmmmdy+:`       " << std::endl
			<< "                             `ymmmmmmdddhhyyssyyhhddmdysymmmdhyssyhhddmmmmmmmmmmmmmmmmmmmmdho:`      " << std::endl
			<< "                             /mmmmmmmmddhhyssssyhhhyo/-:ydddhsssyyddmmmmmmmmmmmmmmmmmmmmmmmmhs:`     " << std::endl
			<< "                            :dmmmmmmdddhhyysyysss+/:---:ydhysssyhdmmmmNmmmmmmmmmmmmmmmmmmmmmdho:`    " << std::endl
			<< "                            smmmmmmdddddhyssoo+:--...---oyssysyhdmmmNNNNNmmmmmmmmmmmmmmmmmmmmdh+-    " << std::endl
			<< "                            smmmmmmddhyyss+/:-.......---+ssyhhhdmmmmNNNNNNNmmmmmmmmmmmmmmmmmmmds/`   " << std::endl
			<< "                          `:dNmddhhysso+/:-..........---:shhddmmmmmmmNNNNNNNNmmmmmmmmmmmmmmmmmmho``  " << std::endl
			<< "                          /mNmhyyyyso+:-............-----ohdmmmmmmmmmmNNNNNNNNmmmmmmmmmmmmmmmmmhs.`  " << std::endl
			<< "                          :mmhyyyyyyssso:.......-.-------/yddmmNNmmmNmmNNNNNNNNNmmmmmmmmmmmmmmmds.`  " << std::endl
			<< "                          -hhoo+/::::::::-...----//::-----+hddmmNNNmNNNNNNNNNNNNNNmmmmNmmmmmmmmds-`  " << std::endl
			<< "                          .so/:::::::::---.-----:/+ossso+/:/ydddmmmNNNNNNNNNNNNNNNNNmmmNmmmmmNmhs.`  " << std::endl
			<< "                         .+o/::::///:::--------:::::://+ossooyddddmmNNNNNNNNNNNNNNNNNmmNNNmmmmmy+`   " << std::endl
			<< "                         /y:/+++o+++//::------::://////////++oshdddmmmNNNNNNNNNNNNNNNNNmNNmmNmdy:`   " << std::endl
			<< "                         .y./+.``-shhhs/:----::/++++++/++++++++oshdmmmmmNNNNNNNNNNNNNNNNmNmmmmy+`    " << std::endl
			<< "                         `s./:...hdhmmdos+::::/+ooooooo+++++oo+oosyhddmmmmmmNNNNNNNNNNNNmmNmmds-     " << std::endl
			<< "                          o:..```hdmmmh::ysosssssooo::oyhyyssysssssyyhhddmmmmmNNmNNNNNNNNmNmmy:`     " << std::endl
			<< "                          .+::.``-osys+-:y::/osho++-`:dyNNNmy:/yyhhyyyyyyssshdmmNNNNNNMNNNNmy/.      " << std::endl
			<< "                          `.-/+/:---:-::o/:-::+yss/-.:dmmmmds.-/oysssoooooooooymNNNNNNNNNNmy+.       " << std::endl
			<< "                          `.--:://+///+/:---::/sss+.``:syys+---/ssoooooo++++++smNNNmdyssymh+.        " << std::endl
			<< "                          `-------:::::-----::::+so+:--.-----:/oyoooooo++++//+ymmhyooo++/y/`         " << std::endl
			<< "                          `-------..---::///::::::/+ooooo+++oooo+oooooo++++//odmhoooo+/o/:`          " << std::endl
			<< "                           .------..----:/+++/::----:://++++++++++oooo++++///ymh+osso++/.            " << std::endl
			<< "                           `------.----::/+oo+::------:::://+oooooooo++++///+dmo+ssoo+:`             " << std::endl
			<< "                             .---:--.-:/+oosoo+/:::::::::::://++oooo+++++///+ymy+oooo/.              " << std::endl
			<< "                             `------..--::///////++++++//++++ooo++++++///+odms:.`                    " << std::endl
			<< "                              `----------::://+++oooo+//+++oooo++++++///+oymd.                       " << std::endl
			<< "                               `.---://+++ooosssssoo/::/+oooooo++++++++osdNNy`                       " << std::endl
			<< "                                `.---:/++oooooooo++////+ooooooo+++++ooydNNNNdo-                      " << std::endl
			<< "                           `     `::::://+++ooooo+++++ooooooooo++ooshNNNNNNNmdy:`                    " << std::endl
			<< "                           .`  `.:../+++++ooooooooooooosooooooooshmMMMNNNNNmNmdy:                    " << std::endl
			<< "                            `..--`  `:oooosssssssssssssssssss+/ymNMMMMMMMNNmmNmhs-                   " << std::endl
			<< "                                      `-+syyyyyyyyyyyyyhhys-` :dmNMMMMMMMNNNmmNdh+`                  " << std::endl;


		break;
	case 8:
		std::cout << "                    ```````    `.  `` ``                                               " << std::endl
			<< "                 ` ``..`....````:.`..``.``                                                   " << std::endl
			<< "            ``````.`..--.:----:.:+-::..-.````                                                " << std::endl
			<< "           ```.....:--///:o//://:o+/+--:-...````                                             " << std::endl
			<< "        `````..--:::++++oo+yoo+y/sy+s+/+:---`````                                            " << std::endl
			<< "        ```....::/+oosyyyyyyhyyyyshyysos+/::-..`                                             " << std::endl
			<< "       ````..---:+syyyhhhdhdhddddhdhhhyys++/:-.```                                           " << std::endl
			<< "         `..--::/+oyhdhdddddddddddddddhhyso+/-..``                                           " << std::endl
			<< "       ````.-:/+osyyhdddmmmmmdddmdmmmdddhyoo/:.``                                            " << std::endl
			<< "     ```..-:://+osyhddddmmmmmmmmmmmmmmmmmdhy+:.``                                            " << std::endl
			<< "       ```..-/+osyyhhdddmmmmmNNNNmmmNmmmmmdh+-``                                             " << std::endl
			<< "       ````..-:/+syyhdddmmmmmNNNNNmNmNNNmmdho.``                                             " << std::endl
			<< "          ```..--/osyyhddmmmmmNNNNNNNNNNmmdho.``                                             " << std::endl
			<< "             ``...-:oyyhddmmmmNNNNNNNNNNNmmds..                                              " << std::endl
			<< "                  ````-oyhdmmmmNNmNNNNNNNNmmy..                                              " << std::endl
			<< "                     ````/yhdmmmNNmNNNNNNNNmy.``                                             " << std::endl
			<< "                        ```-ohdmmNNNNNNNNNNmh-``                                             " << std::endl
			<< "                         ```.ohdmmNNNNNNNNNNd-``                                             " << std::endl
			<< "                           ``.ohdmmNNNNNNNNNd:``                                             " << std::endl
			<< "                            ```+dmmmNNNNNNNNm/`                                              " << std::endl
			<< "                             `.`/dmmNNNNNNNNmo`                                              " << std::endl
			<< "                               `./hmmNNNNNNNNy`                                              " << std::endl
			<< "                                `./hmNNNNNNNNh`                                              " << std::endl
			<< "                                  ./dmNNNNNNNm.                                              " << std::endl
			<< "                                   `/mNNNNNNNN-                                              " << std::endl
			<< "                                    `smNNNNNNNsssso++/.                                      " << std::endl
			<< "                                `/osyymmNNNmmdhhyhhyyyy/.                                    " << std::endl
			<< "                               .shhhhhhhhdhhhyyyyyhhyyyys`                                   " << std::endl
			<< "                               ohhddhhhhdddddhhhhhhhhyhhy...--.````                          " << std::endl
			<< "                              `sddmdddhmmddmNmmddmdddmmNNmmmmmddhs+/-.`                      " << std::endl
			<< "                              `odmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNmmmmmdho/.`                   " << std::endl
			<< "                         .-:+oyhmNNNNNNNNNNNNMNNNNNNNNNNNNNNNNNNNmmmmddhyo:``                " << std::endl
			<< "                     `:+syyyhdmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmdddhhhys:`               " << std::endl
			<< "                  `:shddhyyyhdmmmmmNmNNNNNNNNNNNNNNNNNNNNNNmNNmmmmmdddhhhhddho.`             " << std::endl
			<< "                `/ymmmddhhhhhdddmddmmmmmmmNNmNNNNNNNmmmNmmmmmmddddmdddddddmmmmy:`            " << std::endl
			<< "               -ymmmmmmmdddhddddddddddddmdmmmdNmmmNmmmmmmmmNNNNNNNNNNNNNNNNNNNmd/`           " << std::endl
			<< "              +dmmmmNmmmmNmmNmdmmdmdmdmmmmddNdmmmmNNNNNNMMNNNNNNNNNNNNNNNNNNmmmmdy+.         " << std::endl
			<< "            `+dmmmmNNNmNNNNNNNmNNmNmNNNNNNNmNNNNNMMNNNNNNNNNNNNNNNNNNNNmNmmmmmdddhhyo.       " << std::endl
			<< "            :dmmmmNNNNNNNNNNNNNNNNNNNNNNMMMNNNMNNNNNNNNNNNNNNmNNmmmmmmmddddddddhhhyyhh:`     " << std::endl
			<< "           `hmmmmmNmNmNNNNNNNNNNNNNMNNNNNNMNNNNNNmNNNmmmNmmmmdddddhddhhhhhhhhhhhhhdddmd:`    " << std::endl
			<< "           /ddmmmmNNNNNNNNNNmdmmmNNNNNNNNNNNmmNNmmmmdmdddddhhdhhhhhhhhhhhhdhddddddmmmmmd-`   " << std::endl
			<< "           sddmdmmNNNNNNNNNNmmdddmmmmmdmmmmdddddddddddhhhdhdddddddddddddddmmmmmmmmmmmmmmy`   " << std::endl
			<< "          `yhdddmmmNNNNNNNNNNNmmmmmmmmddmdmddmddddddmddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm-   " << std::endl
			<< "          `yhdddmNNNNNNNNNNNNNNNNNNNNNNmNmmmmNmmmmmmmmmmmNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmo`  " << std::endl
			<< "           yhhddmNNmmmmNmNNNNNNNNNNNNNNNNNNNNNNNmmmmmmmmmmNmmmmmmmmmmmmmmmdddddddddhdddddh`  " << std::endl
			<< "           +hdddmmmdmmmmmmNNNNNNNNNNNNmmmmNNNNmmmmmdmmmmmmmmmmmmmdddhhyyyyhhhhhhhys+//yyss`  " << std::endl
			<< "           .hdmmmdddddmmmmmNNNmNmNNmmNmmdmmmmmmdddddddddhhhyysssoo++//:+hddmdhyssooo/-ss`    " << std::endl
			<< "            /dmmmddddmmmmmmmmmmmmmmmmmdddddddhyyyyyhhddddddhy/::::::----::::--------..yy`    " << std::endl
			<< "             ommmhdddmmdddmmdddddddddhysooooooyhdddhhhysso+//:::---------:://///:--...dy`    " << std::endl
			<< "              omdhdddmdddddddhhysso+++////+syso/:::::::::::::::----....-ohdyo-``.::...dh`    " << std::endl
			<< "              .sdhhddmdddhyo++////////::/+/::::::://++//:::::::----...-ydmh:yh/```::..dh`    " << std::endl
			<< "             ./+osyhhdddds++/////:/::::::::::::/shdddhhyoo+::::----...ohNNNNdys```.-..dy`    " << std::endl
			<< "             -+://+oyhhddso+////:::::::::::::/:sddmNhohhy:o/:::----...yhdmmdhh:```-...hs     " << std::endl
			<< "             `:+:////ohddso+///::::::::::::/:--hhdNNNNdhy.:+::::----../shhhyo-`..-....s+     " << std::endl
			<< "              `./+/++/odmsso+///::::::::::/:--./hyhhddhh:.-/::::-----..---------......::     " << std::endl
			<< "                `-/++++hmooo+/////::::::::/----.-+osso/...::::-------...-----........--.     " << std::endl
			<< "                  `:++/ymo+oo+/////////////:::---.---..--------------.......-..-------.`     " << std::endl
			<< "                   `-//sdy:/o++//////////:::::::::::::---------:::----......-..-------.`     " << std::endl
			<< "                     `-+dh--/o++///++/////:::::---------------://:--..-........-------.      " << std::endl
			<< "                       :hd.`./++///+++//////::::::------..----:///::---.....---------o.      " << std::endl
			<< "                       -yd.  .:+////+++//////:::::------------:////::-...---::::---.:o       " << std::endl
			<< "                       -yh`   `-//////////////:::::-----------::::-------::/:::-.`` -+``-    " << std::endl
			<< "                       .yy`     .://///////////::::::::::::::::::--------:::--.`     `..`    " << std::endl
			<< "                       .yy`      `.:://///////:::::::://///////::::::::---.``                " << std::endl
			<< "                       .ys``       ``-////////:::::::::::://////////::-.``                   " << std::endl
			<< "                       `ys:.         .+sysooo++//////////::://////+os:`                      " << std::endl;

		break;
	case 9:
		std::cout << "                                                   ```...........`                        " << std::endl
			<< "                                             ```.....----.----::--.``                           " << std::endl
			<< "                                          ```.....---...-------:-----.``                        " << std::endl
			<< "                                       ```.....---.....-----------::----..`                     " << std::endl
			<< "                                ````````.....---......-----------:/:--::-::.                    " << std::endl
			<< "                              ``------......---....--.----------://:--:::-:/-                   " << std::endl
			<< "                           ```..-:::::::-----......------------://:---::::-//.                  " << std::endl
			<< "                        `.------:::::////:::------------------::/:----:::::-//.                 " << std::endl
			<< "                        `.---:::::::://:::::://///::::-------::/::----:::::--/:`                " << std::endl
			<< "                      `````..-:::///::::-::::::////////:::::-:/::-----::::::-:/.                " << std::endl
			<< "                     ````......--::::::::::/::///////+++++//////:-----::::::--/:`               " << std::endl
			<< "                `..`````.........-----::::/://///////++/+++oo++/:::::::::::::-:/.               " << std::endl
			<< "                `----................------::://///////++/++oo++/++/////:::::-./:`              " << std::endl
			<< "               `.--:::::--------....-----------::://////+++++//////++++++///:-./+.              " << std::endl
			<< "            ``.----:-:::::::::::---------------------:::///+///////++++oooo++/::/:`             " << std::endl
			<< "           `.--------::::::::::////::::----------------::::::://///+++++ooo+++/:/+:.`           " << std::endl
			<< "           .----:::::::::::::::::::///+////::::-:::-----:-------::///+++++++++///oo+/-.`        " << std::endl
			<< "           `...---:::::::::::::::::////////++/+////::::::::---:--:::://////////::+o+://:.       " << std::endl
			<< "           ```.....-----::::::::://///////////+++/+++////:::::::-::::::///:::::--:+o/.-:/.      " << std::endl
			<< "          ```............---:::::::///////////////+/+++++++/////:/:::::/:////::-.-/:+.  ``      " << std::endl
			<< "        ````.``.........-...-.----:::////////////++/++++/+++o++o+o+++++////////:::/.``          " << std::endl
			<< "        .--...................---------::::://///+//++++++++++++oooooooooo+++++/:-.`            " << std::endl
			<< "        `-::::---.............-.-------------:::////++/+++++++++++++++oooo++++//:..`            " << std::endl
			<< "        `--:::::::::::------.------------------:::::://///++++++++++++ooo+++++//:::`            " << std::endl
			<< "       `----::::::::://:/::::::------------------::::::::://///+/+++++++o+oooo+++/-`            " << std::endl
			<< "       `.---::::::::::::://///////::::------------::::::::::::::///////+++++++//:-`             " << std::endl
			<< "        `-:+::::::::::::/::/:://////+/////:::-----:::::::::::::::::/::::///::::--`              " << std::endl
			<< "        `-++-::/o+////:::::/://///////++++++//////:::::::::::::::::::/::::::::--.`              " << std::endl
			<< "        `:o:..-/+--:+soos+///::////////////+++++++++++////:::::::::::::::::::---...             " << std::endl
			<< "        `:o-...-:```+ssdmdy+///////////////+/++++++++oo++++++////:/://:::::::::--:-             " << std::endl
			<< "        .:/.....--.`.osyyyyo//////++++///+/+++++++++++++ooooooo++++++/++++//////:-`             " << std::endl
			<< "        `::.....------:/+++/-::///+++oso+osooo++/+++++++oooooooooo+o++++++/////:-.`             " << std::endl
			<< "         `........------...--::////+oso/::ohhhyys//oo++++++++++ooooo++++++++++//:.`             " << std::endl
			<< "          `........--------::///////////::::/+//:/+oo++++++++oo++/+/+++++////:--..`             " << std::endl
			<< "          `..----------....--:/os+/::::::::://+++ooooo+++++++oss//::::::::::---.-/:.``          " << std::endl
			<< "           .--:::/:--.....--::/+oo/::------::::///++oooo+++++ooy+:::::::::-----.//:.`           " << std::endl
			<< "            .-::///:....--:::/+++++:--------:::::////++++++++ooys/::::::::------/:.``           " << std::endl
			<< "             .--:::/+-...--:///////::------::::://///++++++++osyy+::::::::-----://:..``         " << std::endl
			<< "             `.-----/s+-.----:://///::::::::::://///////+++++osyhs::::::::-----://:-.```        " << std::endl
			<< "             `-:-----:oo:----:::://////+os/:::://///////++++osshhh+:::::::::---///:-.``         " << std::endl
			<< "             `-:.`.----:/:::/::///::++ohhs+/:://////////+++osyhhhhs/::::::-----:/:--..``        " << std::endl
			<< "             `-:.  `.----:::///+oooosso+///:::////////+++osyyhhyhyy/::::::::---//:-.```         " << std::endl
			<< "             `-:`     `.-::::::////////////::///////+++ossyyyyyyyyso/::::::-----:::-.``         " << std::endl
			<< "             `-:`     ``-:://///////////////////++osso+oosssssysssso//::::::--.....`````        " << std::endl
			<< "              --     `.---.:+sso++++++oooooooosyyyyhhyy+/+ooooosoos++/::::::--..````            " << std::endl;
		break;
	case 10:
		std::cout << "                    ```.-:-`.---..``                                   " << std::endl
			<< "                ``-.`.:++oo/+oo++/-.``                                       " << std::endl
			<< "              `.-/++/:+syyhyysooos+:-.``                                     " << std::endl
			<< "             `.-+ssssssyyyyyyyyssyysso+:.`                                   " << std::endl
			<< "         ```.-::+ssyysooooosyhhyyhdyooso/. `                                 " << std::endl
			<< "         `/+o++ooosyysoosssyhddddddysyyyo/.`                                 " << std::endl
			<< "         .+oo++ossyhhhyyyhhhdmmdyyhhdhysoo/`                                 " << std::endl
			<< "         `:+oososyhhhdhhyhddddddyoosyhyyso/``                                " << std::endl
			<< "         `-+osyyssyyyyyyyyyyyyyyyssssyyyys+:/+ooooo+/::-.``                  " << std::endl
			<< "         `.:osoossssoo+///:::/+osssyssssysoyysoo++++oossoo+/-.``   `         " << std::endl
			<< "          ``:+ooso/:------:/++ossyyysssssyysossyyso+/:---:/ooo+:.`           " << std::endl
			<< "           .:+oo+//////+++oosyhhhhhhhyyyhyhhsyhhhdddhyso+//::/+o/-`          " << std::endl
			<< "          `-/ossoo++++oooooosyyyyhhhhddhysssyhhdhhhhdhdhhhyso++o+-`          " << std::endl
			<< "          `-/ossoo++++oooooosyyyyhhhhddhysssyhhdhhhhdhdhhhyso++o+-`          " << std::endl
			<< "          `.:ohyosssoossssyyyyyhdmmmddhhhhhyyyyhhhhhhyhhhhhyysyo:``          " << std::endl
			<< "           `-oyooshyssssyyhhhhhhddhhyyhhhyyhyyyyysssssssss+o/oh+.`           " << std::endl
			<< "            -oyoooysssssssysssssssssssssssssssssssooosoo++:.`+y/`            " << std::endl
			<< "           `:syoooosssssoo+ooooo+++ooooooo+ooooooooooooo+o+//+/.             " << std::endl
			<< "           `/yso+ooooo++oo+ooooooooooooooooooooooooooooooosooo/-```          " << std::endl
			<< "           .oysooooo++++++ooooooooooooooooossssssooooosssyyyyys+:.`          " << std::endl
			<< "           .sysooo+++++++osossoooosoooooooossssssssssssssyyyhhhyo:``         " << std::endl
			<< "           .sysoo++oooosyyyssssooooooooosssyyyyyyysssssssyyyyyhdhs-`         " << std::endl
			<< "           -osoo++oyyysooo++++ooooosooooossyyyyyyssssssyyssssoyddy/ `        " << std::endl
			<< "          `-+oso+syhs+/:---:/+osyyyhyysooooossyyssyhhhhhhhysso+ydh+`         " << std::endl
			<< "         ``-+soosyys/-....-/ooo+///osyyyo+ooosssyhyso+//+sydyo+ohhs`         " << std::endl
			<< "         --:+oosyys/-....-/o/.`.-:/::-/ss++++ossyy/////:-.-+hy++ydy.         " << std::endl
			<< "        `-:/oosshs+-.....-s:` -+oydyy/-/o+:/::/oyso+hhys+-.`syo+sdh-         " << std::endl
			<< "         .-+ossyhs/-.....-+.` :oymmhy+::+/-----/oshhmmdy+-.`+yo+ohh:`        " << std::endl
			<< "          .:ossyys/-......`.-:///////+o+/-.....-:osoo++/+oshss+/ohds `       " << std::endl
			<< "          `-ossyys/--...-......----:-:-...-......-+o//////++++o+ohdy``       " << std::endl
			<< "          `.+ssyyy+:-----.-----.--------..........-/////////++++sdds.        " << std::endl
			<< "          ``/osyyys/:--------------------...........-:/++++o+o++sddo.        " << std::endl
			<< "          ``-+syysso:--------------::::---..........--/++oooo++ohmd+`        " << std::endl
			<< "            `:oyys/o+::----------::::::::--......---//+oooooo+oydmh+         " << std::endl
			<< "            `-+syy.-++/:--:----::::::::::-------:://+oooooooo+yhddyo         " << std::endl
			<< "             `:+sy/..///:::::::::::://::::/++++//++ooooooooo+:osyso/         " << std::endl
			<< "             `.:+os-``-//:::::::///:/::----/ooo+ossssooooooo-./+//:-         " << std::endl
			<< "               `.-:/.``./////////+o+/:------:/+osssossssss+``.--..`.         " << std::endl
			<< "                `.`.`` `.-/+///////////+//::://+ossssssso:`` ````  `         " << std::endl
			<< "                    `    `./++++++//:/+ossyssssyyyyssso/.`     ``            " << std::endl
			<< "                           `:+ooo++++++++ooossssssyyo/.``   `     `          " << std::endl;

		break;
	case 11:
		std::cout << "...........................................................-.............---::/++/+++++/:----------................................................" << std::endl
			<< ".................................................-:/+ooosyyyyssyysoo++++osssssssso++//+osyyyssoo+//:----............................................" << std::endl
			<< "...........................................--:/+syddddmmmmdddddddddddddddhhhhhyysso++oo++oyhhddddhhhyso/:-----......................................" << std::endl
			<< "........................................-:+syhhddddmddmmddddddddddddddhhyssysyysooo+osyyyyyyyhddddmmmmmddyo/------.................................." << std::endl
			<< "...................................-:/osyhdddddddddddddddhhhhhhyhhhhyysyyyosyssooossssyddddhhdhdddmmmmmmmmmdho+/:--................................." << std::endl
			<< "................................-/syhddddhhhhhhhhhhhhhhhhyyyyyysyyyyyyssyyyyhyyysoyhhdhdddmddddddmmmmmmmmmmmmmmdhyo/:--............................." << std::endl
			<< ".............................-/oyhhhhhhhhyyyyyyyyyyyyyyyyssysssssyssyyyyhddddhhhhhhdddddddmmmmdddmmmmmmmmmmmmmmmmmmmdy+--..........................." << std::endl
			<< "..........................-:osyhhhyyyhhhhhyyyyyyyyyyyyyyyysyyysyyyyyhhhhddddddddddddmmmmmdmmmmmdmmmmmmmmmmmmmmmmmmmmmmmho:.........................." << std::endl
			<< "........................-/syyhhyyyyhhhhhhhhhyyyhhhhyyyyyyyhhhhhhhhhddddddddddddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmds:........................" << std::endl
			<< "......................-+yhhhhhhhhhhdddddddddhhhdhhhhhhhhhhddddddddddddmmmmmmmmmdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmds:......................" << std::endl
			<< ".....................:sdddddddddddddmmdddddddddddddddddddddddddmdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmh/-...................." << std::endl
			<< "....................+hdmmmmmmmdmmmmmmmmmmmmdmmmmmddddddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdo-..................." << std::endl
			<< "..................-odmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmo-.................." << std::endl
			<< ".................-smmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmo.................." << std::endl
			<< "................-smmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm/................." << std::endl
			<< "................ommmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmh:................" << std::endl
			<< ".............../dmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmo................" << std::endl
			<< "..............-hmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmd:..............." << std::endl
			<< "..............ommmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmms..............." << std::endl
			<< ".............-hmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmd:.............." << std::endl
			<< ".............+mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmms.............." << std::endl
			<< ".............smmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmh-............." << std::endl
			<< "............-ymmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmd:............." << std::endl
			<< "............/dmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmd:............." << std::endl
			<< "............ommmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNNNNNNNNNNmmmmmmmmmmmmmmmmmmmmmmd/............." << std::endl
			<< "...........-smmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdddddhhhhhhhhhhdddddddmmNmNNNNNmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm+............." << std::endl
			<< "...........-ymmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNNNmmmmmdyyyyyyssyyyyyyyyyhmdmmmmmmmddhhhhhhhhhhhhhhhddddmmmmmmmmmmmmmmm+............." << std::endl
			<< "............ymmmmmmmmmmmmmmmmmmmmmmmmmmmdhhyssoooooosssyyyyhhhdddmmNmmNhsoooooooosssssssdmmmmmdhhhhhhhhhhhhhhyyyyyyyhhhhhdmmNmmmmmmmmd/............." << std::endl
			<< "...........-ymmmmmmmmmmmmmmmmmmmmmmmmho+///////+oosssyyyyyyyyhhhhhdmmmNmysooooooooooooosdmmmmdhhhhhhhdddddddddhhhhhhhyyhhhhdNmmmmmmmdo-............." << std::endl
			<< "...........-ymmmmmmmmmmmmmmmmdmmmmmh+/::://+oosssssyyyyyyyyhhhhhhhhdmmNmhyssosssssssssssmmmmmddmmmmmmmmmmmmmmmmmmmmmmddhhhhhmNmmmmmm+..............." << std::endl
			<< "...........-ymmmmmmmmmmmmmmmdmmmmmh/:/://+ossyyyyyyyyyyyyhhhhhhhhdddmmmmmddddddmmmmmmmddmmmmmmmmmmmmmmmmmmmmdmdddddmmmmmdhhhdmmmmmms-..............." << std::endl
			<< "............smmmmmmmmmmmmmmmmmmmmmo:::/+osyyhdddddddddddhddmmdmddmmdmmmmmmmmmmmmmmmmNNNNmmmmmhhhhhhhhhyhhhhhhhhyyyyyhhhddhhhdmmmmms-................" << std::endl
			<< "............/mmmmmmmmmmmmmmmmmmmmm+://oyhddmmmmmdddmmmmmmmmmmmmmmmmddmmmmmmdhhhyyyyyhhddmmmmmhhhhhhhhhhhhhhhhhhhhhhhhhyhhhhhhmmmmd:/++++/:-........." << std::endl
			<< "............-smmmmmmmmmmNNNmdhmmmm+/+sdmmmdhyyyyyyyhhhhhhhhhddhhdddddmmNdhhhyo+//////+shdNmmmhhhhhhddmmmmmdyosyyhhhhhhhhyyhhydmmNdsyssssssso/-......" << std::endl
			<< "........-----:/+syhdmmNNmmdysommmmooshdhhhyhhhhhhddmmmmmmmmmmdhddddddmNmhhyo+/:::::://+oymNmmdhhddmmmNNNNmmh+/++oshdhhhhyyyyydNmNhsssssyyyyyso/....." << std::endl
			<< ".....-::///:::::://osyhmmdyyssdmmmyyhhhhhdddhhysshmmmNNNNmmmmhyhdddddNNdyyo/::::::::://+oymNmdhyhdmmmNNNNmdy:-:/++shdhhyyyyyydNmmyssyyhhhhhhhys+-..." << std::endl
			<< "...-/+osyyysso+///////+o++++ooyNmmhyyyhhhdddhs+:-+hdmmmmdddhyosyhhhymNNhyo//::::::::://++oymNmhyyddmmmNNmdy+-://+oyhhhhhyyyyymNNmssyhhhhhhhhhhys/..." << std::endl
			<< "..:/syhhyyyssssso///:::::::::/+dmmmsssyyhhhhyso/:-+yhhhhysso+ossyssyNNmhy+/::::::::::///+oshNNmhhhhdddddhs+//+oosyhhhhhhyyyyhmmNhsyyyyyyyyhhhhhys:.." << std::endl
			<< ".:+shhyso++++++ooo+/::::::::::/sNmNyyyyyhhyssssoooossssssssosssssssdNNdhs+/:::::-::::://+ooymNNdhhhhhyyyysssyyyyyyyyhhhyyyyydNmmysyyyyyyyssyhhhys/.." << std::endl
			<< "-/syyyo+////++++++++/::::::::::+mmNdsyyyyysooooooooooooooooooooooohNNmhy+//:::----:::://+oosdNNNdhhhyyysssssyyyyyyyyyyyysyydmNNdyyyyyyyyyysyhhyys/.." << std::endl
			<< ":+yyso+//+ossyyssooo/:::::::::::ymmmyssyysooooooo+oooooooo++++++oyNNNyo/::::-------::://+osshNNNNdhhyysssssssssssyyssssssydmNNdyssyyyyyyyyssyyyys/.." << std::endl
			<< ":/sso++/+osyyyyssss+::::::::::::/hmmmhyso++++++++++++++++++++++oymNms/:::----------::://+ossydmNNNmhyssssssssssssyyyyhhdmmNNmhysssssyyyyyyssyyyso-.." << std::endl
			<< "-/ooo+++ossyssoooo/:::::::::::://+hmmmmdhso+++///////////+++ooydNNmo::-------------::://+ossyhdmNNmmmddhhhhhddddmmmmmNNNmmdhyyssssosyyyyysssyyss/..." << std::endl
			<< ".:/o+++++oooooooo/:::://:::::::////oydmmNmmmdddhhhyyyyhhhhhddmmNmdo::--------------:::/++oosyyhhddmmmmmmmmmmmmmmmmddhhyyysssssssssssyyyyysssssso-..." << std::endl
			<< ".-:/+/+++++o+++++/::////////////////+osyhddmmmmmmmmmmmmmmmmmmmdhhyo/:::-----::-----:://++oossyyhhhhhhhhhyyyyyssssssssssssssssssssssyyyyysssssso:...." << std::endl
			<< "..-:////++++++++++/////+////////////++osssssssssssssssssyyyyyyssssso+/::::--:-----::://++oosssyyyyyyyyssssssssssooooossssssssssssssyyyysssssoo:....." << std::endl
			<< "...-:://////////++o+//+++//////////++++ooooo++++++++++++++++oooooooooo+/::-------:::///+ooossssyyysssssoooooossooooossssssssssssssyyyyssssso+:......" << std::endl
			<< "....-:::::///////++o+++o++++++++++++++++++++++++++++++++++++++++++++++oso/:::::::::///++oooossssssssssooooooooooooossssssssssssssssssssssoo/-......." << std::endl
			<< "......-:::::://///////+oo++++++++++++++++++++++++++oo++++++++++//////++ossoo++++++++++ooooossssssssssssoooooooooooooosssssssssssssssssso+/-........." << std::endl
			<< "........-::::::://////+ossoooooo++++++oo+ooooooooooooooooo+++++////////+osssssssooooooosssssssssssssooooooooooooooooossssssssssssssoo+/-............" << std::endl
			<< "..........-++///////++osysoooooooooooooooooooooooooooooooooo+++///:::////+osssssssssssssssssssssooooooooooooooooooooosssssssss+////:--.............." << std::endl
			<< "..........-osssooooosssso++ooooooooooooooooooooooooosssssssoo++//:::::///++oossssssssssssssssssoooooooooooooooooooooosssssssso:::::::::--..........." << std::endl
			<< "..........-/osssooooo+++++/+ooooooooooosssssssssssssssssssssoo++///////+++ooossssssssssssssssooooooooooooooooooooososssssssso/:::::::::::--........." << std::endl
			<< "............+ossssoooo+++++/+osoooooosssssssssssssssssssyyysssoooooooossssssssssssssssosoooooooooooooooooooooooossssssssssso/:::::::::::::::--......" << std::endl
			<< "............/+oossssooo+++++/+ossssssssssssssssssssssssssyysooooooooooooooosssyyyyssssooooooooooooooooooooooooosssssssssss+/:::::::::::::::::::-...." << std::endl
			<< "............:++oossssooo+++++//osssssssssssssssssssssssssssosssssssssssssssssssyyyyyyssssoooooooooooooooooooossssssssssss+//:::::::::::::::::::---.." << std::endl
			<< "............-//+oooosssooo++++//+sssssssssssssssssssssssssssssssssssssssssssssssssssyyyyssssssooooooooooooosssssssssssso+////::::::::::::::::::::::-" << std::endl
			<< "...........-.://++oossssooo++++//+ossssssssssssssssssssssssssssssssssssssssssssssssssssssssssssoooooooooossssssssssssso////////:::::::::::::::::::::" << std::endl
			<< "...........-.-////++ooosssoo+++++//+sssssssssssssssssssssssssssssssssssssssssssssssssossssoosssssoooooossssssssssssso+///////////:::::::::::::::::::" << std::endl
			<< "............-:::////+ooosssoo+++++///osssssssssssssssssssssssssssssssssssssssssssssssooooossssssssssoossssssssssssoo+////////////:::::::::::::::::::" << std::endl
			<< ".............:so/:///+ooooosooo+++++//+ossssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssso+///////////////::::::::::::::::::" << std::endl
			<< "..............-/so/:://+oooosoooo+++++//+ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssoo+////////////////:::::::::::::::::/" << std::endl
			<< "................-+so/:://+oooosoooo++++++/osyssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssso+////////////////////:/:::::::://+++/" << std::endl
			<< "..................-+so/:://ooooosoooo+++++++osyssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssso+////////////////////////://://+++/--.." << std::endl
			<< "....................-/so/::/+ooooooooooo++++++syyssssssssssssssssssssssssssssssssssssssssssssssssssssssssso+////////////////////////////+++/:-......" << std::endl
			<< "......................-/oo/::/+oooooooooooo++++osyyyyssssssssssssssssssssssssssssssssssssssssssssssssssso+//////////////////////////+o+/:-.........." << std::endl
			<< ".........................:+o+::/+ooossooooooo++++syyyyyysssssssssssssssssssssssssssssssssssssssssssssoo+++//////////////////////+o+/:-.............." << std::endl
			<< "...........................-+oo/:+oooosoooooooo+++oyyyyyyyyyysssssssssssssssssssssssssssssssssssssso+++++++////////////////++o++:-.................." << std::endl;

		break;
	case 12:
		std::cout << "                                                                   ` ``     .                                                                    " << std::endl
			<< "                                                         `      `  .../:` `-.``    `                 ``                                                " << std::endl
			<< "                                                           `.   .. :/sys`.-:-.    `.. ``    ``     ``                                                  " << std::endl
			<< "                                                           .`-  `:`..odho+s//..`  .`-.`- .``..`   `.`    `                                             " << std::endl
			<< "                                                         ` -..-  /.-`odddhs/+-`. `:.--`/--`-`- . .`    `.`   `                                         " << std::endl
			<< "                                                          ``:.--`-/:+hhssosos.`: -/::/.+/:-`-.`-./`    :`   `                                          " << std::endl
			<< "                                                           `.--+: +ydh/:++oos`./`/+++:+oo+.-/.--:/- ``:.  `.`                                          " << std::endl
			<< "                                                      ``    ..-+o-ydh+::+osos:-:/oos+/soso++/:/.+//:./-```-`                                           " << std::endl
			<< "                                                    ````   ` -./yhhds/://ss+oo::+yoy++ssssso++//+/+/+/.`.:.````      `` `                              " << std::endl
			<< "                                                    `..`  .. `/+yddooo//+yysos+/oyysysssysyso+:s++/oo-..:--.-` `.  `.` `                               " << std::endl
			<< "                                                   . :.: .:` -/shdh+ooo++yyysooosyyyyy+yhshso/os//os/-:/+:-`-``-..-.```                                " << std::endl
			<< "                                              `.   - .:+`:/../+hddyossso+syyyssosyyhhy+yyyhyo+ss/oys+++o//``:.-+-:-.`                                  " << std::endl
			<< "                                               -`  .. /o/+o:-oydddsssyyyooyyhyysyhyhhyshhyyyssos+sys+os+/:-/++o++:.`  ``                               " << std::endl
			<< "                                               `:` `: `ososo-oddddsyyyyyy+yhhhysyhyhhhyhhyyyyos+oyysoso/+ooooss+:.`````                                " << std::endl
			<< "                                ``.--::---.``` ..:.`--`-yssyoyddddyhyhhhysyhhhhyydyhhhhhhyyyysyoyhysosoossssyyo::-.`                                   " << std::endl
			<< "                           `.:osyyyyyyhhhhhyys+/:::../:-oysyydddddyhyhhhhyhhhyyyhdhhhhhhhhyhysyyhhy+yysssyyysso:.``                                    " << std::endl
			<< "                         ./sys+:-..```..-/ohddddhss/.-///syhhdddddhhhhhhhhdyhyyhdhhyhhhhhhyhyshhhysyhyysyyhyys/-..``  ``..```                          " << std::endl
			<< "                      `:oyo-`              ./ohddddho++ssssyhdddddhdhdhdhhhhyyyhdhhyyhhhyhhhysdsyhhyyyyyhyhys+:-..`.---..`` `.``                       " << std::endl
			<< "                  -+yhs.                ` `-+ydmddddhyyyyydddddddddhhhhhhhyhyhhhyyhhhyyhhhhhhshhyyyyhhhhhyo/-..:::::.``...`````                        " << std::endl
			<< "                   :ohhhs-             `  .:.`-/sdmmddddhhhhdddddddhhhhhhhdhyhhhhhyhhhhyhhhdddhhhyhhhyhyhyyy+:-:+ooo/::::-.`.`  `                      " << std::endl
			<< "                  `oyhyhh+.             .` .+/::+ydmdddddhhhdddddmddddhhhddhhyhhhhhhhhhhhhddddhhhhhhhyyhhyys+osyyso:.-:/-...`.-:-``                    " << std::endl
			<< "               `.-::oso:so+`          .` -``+ssoosdmddddddhhddddddddddddddhhhhhhhhhhhhhhhhhhddhyhhdhhhhhyyhyyyyys/-/oo/-:--://:.....                   " << std::endl
			<< "              ``   `::/ .//-.          --/yhdddddddddmmddddddmdddddddddmmddddddddddhhhhhhhhhdyhhddhhdhhhhhyyhyyyssso:.-o++///-..-.`                    " << std::endl
			<< "                     .-   .. `        `odmmmmmmmmmdddddmddmmmmmdhyssssyhddmdddddddddddhhdhyhyyhhdhhhhhdhhyyhhhhyhysossyso+/-.-:-``                     " << std::endl
			<< "                     ``              `ydhyssyhdmmmmdddmmdmmmho:.``````..:odmmmmddmdddddddyhyhddhhhhhhdhhyhhhhhhhyyhyyysso++oo/`````````                " << std::endl
			<< "                                     -h-.``````.:+sdmmmmmms-```-/++/.``..-ommmmdmmmdddhhhyshhhhhddhhhhyyhhdhhdhhhhysyssoosso+/::--.`                   " << std::endl
			<< "                                     +:````````.-:/:/sdmm/..`.+oyhdys:..-:ymmmmmmmmmdddhhyhhddhhhhhhhhdddhhhhhyyyyhhdhhyyyso/:-.`  `                   " << std::endl
			<< "                                     s:.......+yhdhhs/oyd-...-ssNNNdoo.-:+dmdddmmmmddddhhhddhhhhyhhddhhhhhhhhddddhhhhyyyyso+//:::-.`                   " << std::endl
			<< "                                     +s......:hhNNNyyooyms--../osysoo:-:+ddmmmmmmmmdddddddhhhhhhddddddhhhdddddddhddhhhhysoo+:-..``                     " << std::endl
			<< "                                     `yy:-...-yyhhyysshmmmy/::-:/++/::+ydmmmmmmmmmmmdddddddhhhddddddhhddddddddhddhhhhyysooo+//::-..```                 " << std::endl
			<< "                                      `ohyo/::/+syhdhhddmmmmhso+++ooyhddmmmmmmmmmmmddddddddddhhhhdddddddhhhhhhhhhhhdddddhhsssso+::-.``                 " << std::endl
			<< "                                        .+hddddhddddhddmmmmmNmmdddddmmmmmmmNmmmdddddmmdddddddhhddddddddddhhhdddddddddddddddhysso+//-.`                 " << std::endl
			<< "                                          ./ydmmmmmdddmdhdmmmmmmmmmmmmmmmmmmmmddddddddmdddddddddhhhhdhddddddddddddddddddhhhhyysso+/-.`        `        " << std::endl
			<< "                                           -.:ddmmmdmmmdmmmmmmmmmmdmmmmdddmmmmmmmmdddddddddddddddddhhhhhddhdddddddhdddddhhyysyyso+//-.```.   .         " << std::endl
			<< "                                         ``..ohdmmmmmmmmmmmmmmmmdddmmdddddddmmmmmdddddddddddddddddhhhhhhhhhhhhddddmddddddddhyo+/++:-..`.+o:``.         " << std::endl
			<< "                                          `.shhddmmmmmNmmmmmmmddddddddddddddhdmdddddddddddddddddhddhhdhhhddddddddmmmmmmmmmhhyyo/::-. ./+yhy/-`         " << std::endl
			<< "                                         ``+hhddmdmmNmmmmmmmddddddddddddddddhdmdddddddddddddddddddddddddddhdddddddddmmmmdddhyso++//:-.+ddddh/-.`       " << std::endl
			<< "                            `         `-/s/odddmmdmmmmmmmmdddhddddddddddddddddmmmdddmmmddddddddddddhddhhhhddddddddddmddddhhhhso+-...../ddmmdso:        " << std::endl
			<< "                             ``     .:+syhh/-hdddmmmmmmmmddddddhshhhhhhhddddddddmmmddddddddddddddddddddddhhhhhhhdddddddddddhyys+::-.` .ydmdmds:`       " << std::endl
			<< "                      `     `..::++:hhhhhd/.oddmmmmmmmmmddddhd+:dddhhhhhddddmd/dmmmmddddddddddddddddddddddhhddddhhddddddddhhs/-.````.oddmmdh+-         " << std::endl
			<< "                     ``   `--..shhh-+hddmm/.-dmmdddmmmmmdhdddh-.hhhhhhhhddddd+-mmmmmmmmmmddddddddddddhdddddhhhddddhddddddhyssys:.` ./dmmmmdy/`         " << std::endl
			<< "             `       `../osys..:yhd/.smmdm/..omddddmmmddd:hddo..yddddddddddds.:mmmmmmmmmymmdddddddddddhhhdddddhdddddddddddddysoo/--+hmmmmmdy/`         " << std::endl
			<< "             `   `..:/.-hhhhy-../dms.-yddm/..-hmdddmmmmmy.ydd-..oddddddddddh-./dddmmmmmy:mmmdddddddddddhhhdhhdddhhdddddddddddhso+/-+dmmdho/.``         " << std::endl
			<< "             `   ./oyy..shddd:...smh..:dmN/...+dddddmddd+.ods.../dddddddddd:..oddddmmmy.ommmmdmmmmmddddddhhhhhhdddhdddmddddddhyo/.`.hdy:.              " << std::endl
			<< "            `.``:sdddh..:dmmmo..--yd:..oNm/-.-:hmmddddmm:-+m/-.-/mmmmmmmmm/..:ymdmmmmy--hmmmmmmmmmmmddddddhhhhhhhdddddddddddhhsso+:sd+`                " << std::endl
			<< "            `.-+dddddd---ymddh/:/+sds++oddysssyhhhhhhhhhyyydyyyyydhhdddddho++odmmmmmy:-/mmmmmmmmmmmmmmmddddddhhdhhhdddddddhhhyoo+ohh:                  " << std::endl
			<< "            `.:dmdmmmdssyhhhhhhhdddddddddddddddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmyo+hmmmmmmmmmmmmmdmmddddmddhdhdhddddhhhyyhsshds-`                  " << std::endl
			<< "            ./ohhhddddddmmmmmmmmmmmmmmmmmmmmdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdmmmmmmmmmmmmNmddddddmmmmmmdddmmmddmmdddddhddddhsosydmy/                     " << std::endl
			<< "          `:sdmmmmmmmmmmmmmmmmdddddddddddddddddddddhddddddddddddddddddhdhdhdhddhdhddddmmmmmmmdddddddddddddddddmmmdddddmddhdhdmdo.`                     " << std::endl
			<< "         .dmmmmmmmmmmmmmmmmmmmdddddhddhdhdddhhhddddddddhddddddhhhddhdddhhhhhhhdhhdhddddddmmmydmdddddddddhddmmmddmdmddddddmmdhyo//.                     " << std::endl
			<< "         .dmmmdmddddddmddddddddddhhhhhhhhhhhhhhhdhhhhhhhhdhhdhhhhhhhhhddhhdhhddddhddddddddmmmdddddddmdmmdhhddmdddddmdddmdmds+//:`..``                  " << std::endl
			<< "         .dmdddddhhdddddhdddhddhhhhdhhhhdhhhhdhhhhhhddhddddhdddhdhdhyhdhhhhdhhhhhhhhddddddmmmmmdmdddmmmmmmddmmmddmdmmmdmdss::/-..                      " << std::endl
			<< "          /dhhhhhhhhhddhhddddddhhhhhhdhhhhhddhddddddddddhdhhhdddhhdhhhdhhhhdhhdhdhddhdhdddddmmmdmmmddddmmmmdddmdmmmdmmdhhys+-.-``                      " << std::endl
			<< "          .hhyhhhhhhhddddddddddhhhhdhhhhhhdddhddddhhdhhdhhhdhhhhhhdhdhddhhdhhhdhdhhhhdhhdddddmmdddddddddmdmddddddddddddysys/+.``                       " << std::endl
			<< "          `+hhhhhhhhhdddddddddddhhhhdhhhhhddddddhhhdhhddhhdddhhhhhdhhhhhhhhhyddhhhhdddhdhhdddmddddddddhddmdddmddddhyhyssoos+--`                        " << std::endl
			<< "           .yhhhhddhhdhddddddhddhhhhhhhddhhdddhddhddhhddhddhhdhhhddhdhhhhhdhhdhhhdhdddhhhhdddddmddddddhdmmdhhdddmdhoyyo+///+::.`                       " << std::endl
			<< "           `/hhhhdddhddddddddddddhdhydhdhhhhhdhdddddhhddhddhhdhhhdhhddhhddhhhdhhhdhddhhhdhhdmmmdddmddddhdmdhhhhddhhss/o/: .:` `                        " << std::endl
			<< "            `ohhhdddhddddddhdhhdhhhdhdddhhhhhdddddhddddddhdhdddddhdhhdhhddhhhdhdhhhhdddddddddmmddmdmdddhdddddhyyshyso+:-.` `                           " << std::endl
			<< "             -odhhddhdhddhddddhdhhddyhhddhhyhdddddhddhddhhhhhddddhddhddddhhhhhdhhhhhdhhdhddmmmmddddddddddddhhdssoso-/:.``                              " << std::endl
			<< "             `.oy+hdhhdhddhhdddddhhhyyhddhhhdddhddhddhdddhhhhddddhhdhdhhdddhdhdhhddhddhdhdddmdmdddmdddddhhhsyhsy++--:` `                               " << std::endl
			<< "               ./:+hshhdhddhdddhddhhhyhhdhhhdhddddddddhddhydhdddddhddddhddddhhhdddhddhddddddmdddmmmddddhoys:oos+o-.`-`                                 " << std::endl
			<< "                .-:/++hsdddhddddhddddhddhhhddhddddddmdhhddyhhdhddddddddhddddhdhhdddddhdmdydydh+smmmmmdo:+o+-+/:/o`                                     " << std::endl
			<< "                  `.-:osshdddddddhhdddddhhdddhddddhddddhddhhhdddddddhhhddhdhhhhhddddddmmh+ysso:/dmmmm+`./-:`.:.:/                                      " << std::endl
			<< "                     :////ydddddddhdddddhhdddddhddddhddddddhhddddddddhdddddhdhdhdddmmdmmyo/:/-./mmmdd. `- .` ``-`                                      " << std::endl
			<< "                     `-.-:/+shddhddhddmdddddddddhdddhdhdddddddddddhddddmdddddds+yhmmmmmd/-:``  :dmmmo  ``  `   `                                       " << std::endl
			<< "                         `.`.:/s++ysyddhddddddddhdddhhhdddddddddmdhdddhyyss/hho.ommmmmmd.      :dmmd+                                                  " << std::endl
			<< "                              `-..-///yhshdhdddddhdddddddddddddddddmd+-.::` o--.-mdmdmmy       .hddh.                                                  " << std::endl
			<< "                                   ```.-+oo-/shddhddddhsyhhddy//+ddmd:.`    :   .ddmddm-       `ymmy                                                   " << std::endl
			<< "                                         :/..`./s//hoo/---:/.-.-`ymmy.`     `    sdmdmm-        hmdy                                                   " << std::endl
			<< "                                          ` ``  `-.++:``...:.    +dmy            -dmmmm/        ymdy                                                   " << std::endl
			<< "                                                   . `    ` `    :mdy`           `odddmh`      .ydds                                                   " << std::endl
			<< "                                                                `+ddm:           +hddhdm.    `:yddd/                                                   " << std::endl
			<< "                                                               .ohdmmh:`        +dhddddd.   -hdddddo                                                   " << std::endl
			<< "                                                               shdddhdd-       `.sdddddd.  :dddddmdd:                                                  " << std::endl
			<< "                                                                .---`..       -ydddddmmm:  /ssyhyhyh+                                                  " << std::endl
			<< "                                                                              `:osoyhhoy`          `                                                   " << std::endl;
		break;
	}
}