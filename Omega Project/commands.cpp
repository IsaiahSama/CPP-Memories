#include <string>
#include <fstream>

using namespace std;
//functions
int commandchk();
int pointschk();
int trophieschk();
int trophyview();
int shop();
int help();
//var
ifstream info;
ofstream infoex;
//var x 2
string resp;
int points;
int level;
//trophies
int trophy;
//begin
commandchk(){
	system("CLS");
	if(resp == "Help"){
		help();
	}
	else if(resp == "Shop"){
		shop();
	}
	else if(resp == "Points"){
		pointschk();
	}
	else if(resp == "Trophies"){
		trophieschk();
	}
}
help(){
	cout << kami << "\n" <<
	"1\t\tHelp-       Shows the list of Available Commands\n" << 
	"2\t\tPoints-     Shows the number of points a player has\n"<<
	"3\t\tTrophies-   Shows the number of trophies a player has and which ones they are\n" <<
	"4\t\tShop-       Displays the shop where the player can purchase items.\n"<<
	"5\t\tExit-		  Saves your location and exits the game\n";
	cout << "Press any key to continue\n";
	getch();
	system("CLS");
}

shop(){
	cout << kami << "The shop is currecntly empty.\n";
	cout << "Press any key to continue\n";
	getch();
	system("CLS");
}
trophieschk(){
	info.open("Omega\\TrophySection.txt");
	info >> trophy;
	info.close();
	cout << kami << "You have " << trophy << " trophies so far. Would you like to view them?y/n\n";
	cout << name << ": ";
	string respx;
	cin >> respx;
	if(respx == "y"){
		trophyview();
	}
	else{
		cout << "Ok then.\n";
	}
	cout << "Press any key to continue\n";
	getch();
	system("CLS");
}
trophyview(){
	system("CLS");
	info.open("Omega\\TrophySection.txt");
	info >> trophy;
	info.close();
	cout << kami << "Enter the number of the trophy you would like to view\n";
	cout << kami << "You currently have " << trophy << ".\n";
	cout << name << ": ";
	int respx;
	cin >> respx;
	system("CLS");
	if(respx <= trophy){
		switch(respx){
			case 1:
				cout << kami << "Your first trophy, New Challenger is awarded for Clearing the Tutorial successfully.\n";
				break;
			case 2:
				cout << kami << "Your second trophy, 5 time champion, is awarded for successfully clearing the first 5 levels.\n";
				break;
			case 3:
				cout << "You third trophy, Additive Adept, is awarded for successfully clearing the first Mathemetic section\n";
				break;
			default:
				break;
		}
	}
	else{
		cout << kami << "You haven't yet unlocked that trophy\n";
		cout << "press any character to return\n";
		getch();
		system("CLS");
		trophyview();
		return 0;
	}
	cout << kami << "Would you like to view another trophy in your collection? y/n\n";
	cout << name << ": ";
	string resps;
	cin >> resps;
	system("CLS");
	if(resps == "y"){
		trophyview();
		return 0;
	}
	else{
		return 0;
	}
	return 0;
}
pointschk(){
	info.open("Omega\\MathOmegainfo.txt");
	info >> level >> points;
	info.close();
	cout << kami << "You have " << points << " points.";
	cout << "\nPress any key to continue\n";
	getch();
	system("CLS");
}
