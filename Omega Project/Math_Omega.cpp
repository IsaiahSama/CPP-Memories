//Include Headers
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <windows.h>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <conio.h>
#include <typeinfo>
#include <io.h>
#include "UniVariables.cpp"
#include "commands.cpp"

//using namespace std
using namespace std;

//functions
int main();
int welcome();
int firsttime();
int returningplayer();
int tutorial();
int gamestart();
int gameresume();
int anschk();
int proceed();
int update();
int level1();
int level2();
int level3();
int level4();
int level5();
int level6();

//txt data
ifstream details; 
ofstream timechk;
ifstream timechk2;
ifstream gameinfoin;
ofstream gameinfoex;

//gamedata files
//in commands.cpp
//variables
int mathtimeplay = 0;
int corans;
string coransy;

proceed(){
	cout << "\nPress any key to move on\n";
	getch();
	system("CLS");
}
//begin
int main(){
	system("CLS");
	//checks for fullscreen
	fschk();
	//good old verification time
	details.open("Omega\\Regkeycomp.txt");
	if(!details){
		cout << "The data file could not be found. Please either restore it to it's rightful position or create a new account\n";
		cout << "Press any key to go to Omega Registration to register a new account\n";
		getch();
		system("OmegaRegi.exe");
	}
	//Takes in the information
	details >> name >> passkey >> vericonf;
	if(vericonf != trueveri){
		cout << "Your verification key could not be verified. Please Create a new key or restore the original key to it's original state\n";
		cout << "Press any key to go to Omega Registration to register a new account\n";
		getch();
		system("OmegaRegi.exe");
	}
	details.close();
	
	timechk2.open("Omega\\timechk.txt");
	timechk2 >> mathtimeplay;
	
	if(!timechk2){
		welcome();
		return 0;
	}
	timechk2.close();
	welcome();
	return 0;
}
welcome(){
	mathtimeplay = mathtimeplay + 1;
	cout << kami << "WELCOME TO MATH OMEGA, A GAME DEVELOPED BY YOURS TRULY TO TEST THINE KNOWLEDGE OF MATH AND GET REWARDS\n";
	cout << "Press any key to continue\n";
	getch();
	system("CLS");
	cout << "Creating and Updating files part 1\n";
	//timeplay chk
	timechk.open("Omega\\timechk.txt");
	timechk  << mathtimeplay;
	timechk.close();
	cout << "IsaiahBot: Files created and updated succesfully\n Press any key to continue\n";
	getch();
	system("CLS");
	if(mathtimeplay == 1){
		firsttime();
		return 0;
	}
	else if(mathtimeplay > 1){
		returningplayer();
		return 0;
	}
	return 0;
}
firsttime(){
	cout << kami << "Ah, So this is your first time here. Well I, Isaiah, Officially welcomme you to my class. I'll host a tutorial for you shortly on the basics of this game.\n";
	cout << "Press any key\n";
	getch();
	system("CLS");
	cout << "IsaiahBot: Creating files... mhm yes... data... ah... feels nice...\n\nCompleted\n\n";
	cout << "Initializing tutorial...\n\nCompleted...\n";
	cout << "Press any key to begin tutorial\n";
	getch();
	system("CLS");
	tutorial();
	gamestart();
	return 0;
}
returningplayer(){
	gameinfoin.open("Omega\\MathOmegainfo.txt");
	if(!gameinfoin){
		firsttime();
	}
	gameinfoin.close();
	cout << kami << " AH, WELCOME BACK YOUNG PRODIGY.\n How have you been " << name << "?\n Ah... that's good to hear. I've been relatively ok myself. Now...\n";
	cout << "Would you like to have a look at the tutorial again? y/n\n";
	cout << name << ":";
	string resp;
	cin >> resp;
	system("CLS");
	if(resp == "y"){
		cout << name << ": Yea, I'd like to see the tutorial again please\n";
		cout << kami << "No problem\n";
		proceed();
		tutorial();
	}
	cout << name << ": I'm fine now. Let's get started\n";
	cout << kami << "Hoho. I like your enthusiam. Let us begin then, resuming from where you left off...\n";
	cout << "Absorbing your save data\n";
	//Insert data file here for taking in save points
	gameinfoin.open("Omega\\MathOmegainfo.txt");
	gameinfoin >> level >> points;
	gameinfoin.close();
	//Continue where left off based on switch statements containing lvl information
	cout << "Data absorption Complete.\n Press any key to return to your saved level\n";
	getch();
	system("CLS");
	gameresume(); 
	return 0;
}
tutorial(){
	cout << kami << "So the tutorial it is... ok.\n Math Omega is a game in which you progress by correctly answering Math equations.\nThere are different categories and also varying stages of difficulties.\n";
	proceed();
	cout << kami << "However, as this is still in the Beta stage... well... there isn't that much if any at all :)\n";
	proceed();
	cout << kami << "Right, you advance through different categories and gain points for correctly solving equations. These points can be used in the in-game store to acquire\ntrophies or something like that\n";
	proceed();
	cout << kami << "Well. It is that simple. Answer questions, learn, get points, get trophies, and then flex on your friends.\n\n Do you understand?y/n\n";
	string resp;
	cout << name << ": ";
	cin >> resp;
	system("CLS");
	if(resp == "y"){
		cout << name << ": Yea I understand\n";
		cout << kami << "Of course of course... never doubted you for a minute\n";
		proceed();
		if(mathtimeplay == 1){
			gamestart();
		}
		else if(mathtimeplay < 1){
			gameresume();
		}
	}
	else if(resp == "n"){
		cout << name << ": Nah... not really to be honest. Could you explain again?\n";
		cout << kami << "Of course of course. It's why i'm here\n";
		proceed();
		tutorial();
	}

	return 0;
}
update(){
	gameinfoex.open("Omega\\MathOmegainfo.txt");
	gameinfoex << level << " " << points;
	gameinfoex.close();
	return 0;
}
anschk(){
	stringstream coranst;
	coranst << corans;
	coranst >> coransy;
	
	if(resp == coransy){
		cout << kami << "Your answer is indeed correct...\n";
		proceed();
		points = points + 10;
		level = level + 1;
		update();
		gameresume();
		return 0;
	}
	else if(resp != coransy){
		cout << kami << "Sorry... your answer is not correct... try again\n";
		proceed();
		gameresume();
		return 0;
	}
}
gamestart(){
	trophy = 1;
	gameinfoex.open("Omega\\TrophySection.txt");
	gameinfoex << trophy;
	gameinfoex.close();
	cout << kami << "Welcome to Stage 1 of Math Omega... ADDITION\n";
	level = 1;
	points = 10;
	gameinfoex.open("Omega\\MathOmegainfo.txt");
	gameinfoex << level << " "<< points;
	gameinfoex.close();
	proceed();
	level1();
	return 0;
}
level1(){
	cout << kami << "Your first question is as follows:\n";
	cout << "What is 10 + 14?\n";
	cout << name << ": ";
	cin >> resp;
	corans = 10 + 14;
	anschk();
	return 0;
}
gameresume(){
	switch(level){
		case 1:
			level1();
			break;
		case 2:
			level2();
			break;
		case 3:
			level3();
			break;
		case 4:
			level4();
			break;
		case 5:
			level5();
			break;
		case 6:
			level6();
			break;
		case 7:
			level7();
			break;
		default:
			exit(1);
	}
	return 0;
}
level2(){
	cout << kami << "So level 1 was that easy? Well well well. Let's see you get past this...\n";
	cout << kami << "What number is the result of adding 30 and 60?\n";
	cout << name << ": ";
	cin >> resp;
	corans = 60+30;
	anschk();
	return 0;
}
level3(){
	cout << kami << "I see... you might be smarter than I first thought\n";
	cout << kami << "If you add 10 to 30 then add 5 followed by adding 20... What number do you get?\n";
	cout << name << ": ";
	cin >> resp;
	corans = 10 + 30 + 20 + 5;
	anschk();
	return 0;
}
level4(){
	cout << kami << "You continue to impress me ho ho.\n";
	cout << kami << "You have 2 numbers. When you add the 2 numbers you get 30. 1 number is 18... what is the other number?\n";
	cout << name << ": ";
	cin >> resp;
	corans = 30 - 18;
	anschk();
	return 0;
}
level5(){
	cout << kami << "My oh my... so you have made it to level 5. As a bonus... You now have the ability to use commands.\n";
	cout << kami << "You can type Help anytime to view the list of commands.\n";
	cout << kami << "Note, using a command will count as a wrong answer. However, think nothing of it. After the command you will just have to answer the question again correctly.\n";
	cout << kami << "Anyway. 4 + 4 is 8... and 4 + 1 is 5... If 8 + 5 is 13... what is 7 + 6\n";
	cout << name << ": ";
	cin >> resp;
	commandchk();
	corans = 7 + 6;
	anschk();
	return 0;
}
level6(){
	if(trophy == 1){
	cout << kami << "My my... no matter how I word them you are just too smart. As a reward... you get your third` Trophy. View it by typing the 'Trophies' command.\n";
	trophy = trophy + 2;
	gameinfoex.open("Omega\\TrophySection.txt");
	gameinfoex << trophy;
	gameinfoex.close();
}
	else{
		cout << kami << "NEXT!!\n";
	}
	cout << kami << "Welcome to Section 2, Multiplication.\n";
	cout << kami << "What is 3 X 10?\n";
	cout << name << ": ";
	cin >> resp;
	commandchk();
	corans = 3 * 10;
	anschk();
	return 0;
}
level7(){
	cout << kami << "Easy, wasn't it. Well... Next question\n";
	cout << kami <<" What number when multipled by 8 gives 64?\n";
	cout << name << ": ";
	cin >> resp;
	commandchk();
	corans = 64/8;
	anschk();
	return 0;
}
