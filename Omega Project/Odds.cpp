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

using namespace std;
//functions
void lb(){
	cout << "\n--------------------------------------------------------------------------------\n" << endl;
}
int nameregip1();
int nameregip2();
int oddsdef();
int mainTwo();

//variables
string player1;
string player2;
int rand();
int maxodds;
int p1move;
int p2move;
fstream details;
//Begin
int main(){
	//clears console window
	system("CLS");
	fschk();
	//opens txt file which should contain name and passkey
	details.open("Omega\\Regkeycomp.txt");
	if(!details){
		system("OmegaRegi.exe");
		return 0;
	}
	details >> name >> passkey >> vericonf >> numtimeplay;
	if(vericonf != trueveri){
		cout << "Invalid file... Your data could not be verified. Please Create a New Account, or restore data to previous correct state\n";
		getch();
		return 1;
	}
	details.close();
	mainTwo();
}
int mainTwo(){
	cout << "WELCOME TO ODDS THE APP" << endl;
	cout << "The rules are quite simple." << endl;
	lb();
	nameregip1();
}

int nameregip1(){
	cout << "Enter your name Player one" << endl;
	cout << "Player 1:";
	cin >> player1;
	cout << "So Player one's name is " << player1 << "... Correct? (y for yes and n for no)" << endl;
	string resp;
	cout << player1 << ":";
	cin >> resp;
	if (resp == "y"){
		nameregip2();
	}
	if (resp == "n"){
		system("CLS");
		cout << "That is your fault then. Let's try again then." << endl;
		nameregip1();
	}
}
int nameregip2(){
	system("CLS");
	cout << "Understood. Standby until i call you again " << player1 << endl;
	lb();
	cout << "Now... your turn Player 2. What name shall you be known by?" << endl;
	cout << "Player 2:";
	cin >> player2;
	cout << "So your name is " << player2 << "... Correct? (y for yes and n for no)" << endl;
	string resp;
	cout << player2 << ":";
	cin >> resp;
	if (resp == "y"){
		oddsdef();
	}
	if (resp == "n"){
		system("CLS");
		cout << "That is also your fault... but anyway, Let's try again then shall we?" << endl;
		nameregip2();
	}
}
int oddsdef(){
	system("CLS");
	cout << "Welcome " << player1 << " and " << player2 << endl;
	cout << "Prepare for battle. Enter the max number for which your odds will be on" << endl;
	cout << "Challenged:";
	cin >> maxodds;
	system("CLS");
	cout << "Odds on " << maxodds << endl;
	cout << "3" << endl;
	cout << "2" << endl;
	cout << "1" << endl;
	p1move = rand() % maxodds + 1;
	p2move = rand() % maxodds + 1;
	
	cout << player1 << ": " << p1move << endl;
	cout << player2 << ": " << p2move << endl;
	if(p1move == p2move){
		cout << "Well... Time to do the bidding of your master." << endl;
	}
	if(p1move != p2move){
		cout << "Congratulations challenged one... you can do as you please" << endl;
	}
	cout << "Completed. Would you like to play again? y/n" << endl;
	cout << "Type 'f' if you wish to start from name selection" << endl;
	cout << "User:";
	string resp;
	cin >> resp;
	if (resp == "f"){
		system("CLS");
		main();
		}
	if (resp == "y"){
		system("CLS");
		oddsdef();
		}
	if (resp == "n"){
		cout << "Goodbye";
		getchar();
	}
	}
