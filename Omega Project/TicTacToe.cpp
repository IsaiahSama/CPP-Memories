//include headers
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
#include <io.h>
#include "UniVariables.cpp"
#include <time.h>

//using namespace...
using namespace std;

//functions
int main();
int yoturn();
//Hard ai
int Isaiah1();
int vsiseh2();
int Isaiah2();
int Isaiah3();
int vsiseh4();
int Isaiah5();
int vsiseh6();
int Isaiah7();
int vsiseh8();
int Isaiah9();
int revenge();
int revenge2();
int mt3();
int mt4();
int rematch();
int mt1();
int mt2();
//Versus Player
int vsplayerintro();
int vsplayer();
int vsplayerin();
int pvpturn1();
int pvpturn2();
int pvpturn3();
int pvpturn4();
int pvpturn5();
int pvpturn6();
int pvpturn7();
int pvpturn8();
int pvpturn9();
//Versus Ai
int vsai();
int rand();
int vsaiez();
int vsIsaiah();
int vsai1();
int vsai3();
int vsai5();
int vsai7();
int vsai9();
//other
int boarddev();
int nittygritty();
int board();
int winchk();
int winchkfin();
int endgame();
int badgame();
//Versus Easy EZ
int aiez2();
int aiez4();
int aiez6();
int aiez8();
//variables
string player1;
string player2;
int turn1, turn2, turn3, turn4, turn5, turn6, turn7, turn8, turn9;
string space1,
space2,
space3,
space4,
space5,
space6,
space7,
space8,
space9;
string winner;
string ai = kami;
int hd5;
int hd4;
int hd3;
int hd2;

yoturn(){
	cout << "Isaiah: I have played. Your turn\n";
	return 0;
}
//begin
int main(void){
	system("CLS");
	srand(time(0));
	hd4 = rand() % 5;
	hd5 = rand() % 6;
	hd3 = rand() % 4;
	hd2 = rand() % 3;
	//makes exe fullscreen
	fschk();
	
	ifstream acc;
	acc.open("Omega\\Regkeycomp.txt");
	while(!acc){
		cout << "Passkey could not be found. Please generate one using the Omega Registration app before using this product." << endl;
		cout << "Press any key to be directed to the Registration app" << endl;
		getch();
		system("OmegaRegi.exe");
		return 0;
	}
	acc >> name >> passkey >> vericonf >> numtimeplay;
	if(vericonf != trueveri){
		cout << "Your file could not be verified" << endl;
		getch();
		exit(1);
	}
	acc.close();
	player1 = name;
	cout << "Welcome to TIC TAC TOE by Yours truly.\n Gameplay is simple. Simply enter the number of the square you would like to place your mark.Get three marks in a row and you win.\nTo begin, would you like to play against a friend? or against me?\n Enter the number of the option you want.\n";
	cout << "1\t\tVs Friend\n2\t\tVs Isaiah\n";
	space1 = "1",
space2 = "2",
space3 = "3",
space4 = "4",
space5 = "5",
space6 = "6",
space7 = "7",
space8 = "8",
space9 = "9";
	cout << player1 << ":";
	int resp;
	cin >> resp;
	switch(resp){
		case 1:
			system("CLS");
			vsplayerintro();
			break;
		case 2:
			system("CLS");
			player2 = ai;
			vsai();
	}
}
vsplayerintro(){
	cout << "\nHello " << player1 << ". \nPlease allow your friend to tell me their name\n";
	cout << "Player2:";
	cin >> player2;
	cout << "\nNice to meet you " << player2 << "\n";
	cout << "Press any key to begin\n";
	getch();
	system("CLS");
	cout << "Player 1 is " << player1 << " and Player 2 is " << player2 << "\n";
	vsplayerin();
}
vsai(){
	cout << "\nHello " << player1 << ". So you have chosen to fight me. Tell me the how I should play against you\n";
	cout << "1\t\tEasy\n2\t\tHard\n";
	cout << player1 << ":";
	int resp;
	string respt;
	cin >> resp;
	switch(resp){
		case 1:
			respt = "Easy";
			cout << "Easy I shall go then\n";
			boarddev();
			vsaiez();
			return 0;
			break;
		case 2:
			respt = "Hard";
			cout << "Hard I shall go then\n";
			boarddev();
			vsIsaiah();
			break;
	}
}
boarddev(){
	cout << "Testing Board Drawing...\n";
	cout << "\t" << space1 << "\t|\t" << space2 << "\t|\t" << space3 << "\n----------------------------------------------\n\t"<< 
	space4 <<"\t|\t" << space5 << "\t|\t" << space6 << "\n----------------------------------------------\n\t"<< 
	space7 << "\t|\t" << space8 << "\t|\t" << space9 << "\n";
	cout << "Completed\n";
	cout << "Preparing for Gameplay..." << endl;
	nittygritty();
	board();
}
nittygritty(){
	cout << "\nMhm yes... data and files... quite nice.\n ...Preparation complete\n Press any key to continue\n";
	getch();
}
board(){
	system("CLS");
	cout << "\n\t\t-------------------------------------------------\n\t\t|\t" << space1 << "\t|\t" << space2 << "\t|\t" << space3 << "\t|\n\t\t-------------------------------------------------\n\t\t|\t"<< 
	space4 << "\t|\t" << space5 << "\t|\t" << space6 << "\t|\n\t\t-------------------------------------------------\n\t\t|\t"<< 
	space7 << "\t|\t" << space8 << "\t|\t" << space9 << "\t|\n\t\t-------------------------------------------------\n";
}
vsplayerin(){
	boarddev();
	vsplayer();
}
badgame(){
	cout << "This has been a bad game and is now Scrambled. Would you like to play again? y/n\n";
	cout << name << ":";
	string resp;
	cin >> resp;
	if(resp == "y"){
		system("CLS");
		main();
		return 0;
	}
	else if(resp == "n"){
		exit(0);
	}
}
vsplayer(){
	cout << "Enter the number of the square where you would like to place your mark. Player 1 is x, Player 2 is O. Player 1 goes first.\n";
	pvpturn1();
	pvpturn2();
	pvpturn1();
	pvpturn2();
	pvpturn1();
	winchk();
	pvpturn2();
	winchk();
	pvpturn1();
	winchk();
	pvpturn2();
	winchk();
	pvpturn1();
	winchkfin();
}
winchkfin(){
	winchk();
	if(endgame() == 3){
		return 0;
	}
	badgame();
}
winchk(){
	if((space1 == "x") && (space2 == "x") && (space3 == "x")){
		winner = player1;
		endgame();
	}
	else if((space1 == "x") && (space4 == "x") && (space7 == "x")){
		winner = player1;
		endgame();
	}
	else if((space1 == "x") && (space5 == "x") && (space9 == "x")){
		winner = player1;
		endgame();
	}
	else if((space2 == "x") && (space5 == "x") && (space8 == "x")){
		winner = player1;
		endgame();
	}
	else if(( space3 == "x") && (space5 == "x") && (space7 == "x")){
		winner = player1;
		endgame();
	}
	else if((space3 == "x") && (space6 == "x") && (space9 == "x")){
		winner = player1;
		endgame();
	}
	else if((space4 == "x") && (space5 == "x") && (space6 == "x")){
		winner = player1;
		endgame();
	}
	else if((space7 == "x") && (space8 == "x") && (space9 == "x")){
		winner = player1;
		endgame();
	}
	
	else if((space1 == "o") && (space2 == "o") && (space3 == "o")){
		winner = player2;
		endgame();
	}
	else if((space1 == "o") && (space4 == "o") && (space7 == "o")){
		winner = player2;
		endgame();
	}
	else if((space1 == "o") && (space5 == "o") && (space9 == "o")){
		winner = player2;
		endgame();
	}
	else if((space2 == "o") && (space5 == "o") && (space8 == "o")){
		winner = player2;
		endgame();
	}
	else if(( space3 == "o ") && (space5 == "o") && (space7 == "o")){
		winner = player2;
		endgame();
	}
	else if((space3 == "o") && (space6 == "o") && (space9 == "o")){
		winner = player2;
		endgame();
	}
	else if((space4 == "o") && (space5 == "o") && (space6 == "o")){
		winner = player2;
		endgame();
	}
	else if((space7 == "o") && (space8 == "o") && (space9 == "o")){
		winner = player2;
		endgame();
	}
	else if((space1 != "1") && (space2 != "2") && (space3 != "3") && (space4 != "4") && (space5 != "5") && (space6 != "6") && (space7 != "7") && (space8 != "8") && (space9 != "9")){
		badgame();
	}
	else{
		return 0;
	}
	
}
endgame(){
	if(player1 == ai){
		return 3;
	}
	cout << "Congratulations. " << winner << " is the winner of this match.\n";
	cout << "Would you like to play again? y/n\n";
	cout << name << ":";
	string resp;
	cin >> resp;
	if(resp == "y"){
		system("CLS");
		main();
		return 0;
	}
	else if(resp == "n"){
		exit(0);
	}
	return 0;
}
pvpturn1(){
	cout << player1 << ":";
	cin >> turn1;
	switch(turn1){
		case 1:
			if(space1 != "1"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn1();
				exit(1);
			}
			space1 = "x";
			break;
		case 2:
			if(space2 != "2"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn1();
				exit(1);
			}
			space2 = "x";
			break;
		case 3:
			if(space3 != "3"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn1();
				exit(1);
			}
			space3 = "x";
			break;
		case 4:
			if(space4 != "4"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn1();
				exit(1);
			}
			space4 = "x";
			break;
		case 5:
			if(space5 != "5"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn1();
				exit(1);
			}
			space5 = "x";
			break;
		case 6:
			if(space6 != "6"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn1();
				exit(1);
			}
			space6 = "x";
			break;
		case 7:
			if(space7 != "7"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn1();
				exit(1);
			}
			space7 = "x";
			break;
		case 8:
			if(space8 != "8"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn1();
				exit(1);
			}
			space8 = "x";
			break;
		case 9:
			if(space9 != "9"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn1();
				exit(1);
			}
			space9 = "x";
			break;
		default:
			cout << "This is an invalid move. Please reconsider your move and play again\n";
			board();
			pvpturn1();
			exit(1);
			break;
	}
	board();
}
pvpturn2(){
	cout << player2 << ":";
	cin >> turn2;
	switch(turn2){
		case 1:
			if(space1 != "1"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn2();
				exit(1);
			}
			space1 = "o";
			break;
		case 2:
			if(space2 != "2"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn2();
				exit(1);
			}
			space2 = "o";
			break;
		case 3:
			if(space3 != "3"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn2();
				exit(1);
			}
			space3 = "o";
			break;
		case 4:
			if(space4 != "4"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn2();
				exit(1);
			}
			space4 = "o";
			break;
		case 5:
			if(space5 != "5"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn2();
				exit(1);
			}
			space5 = "o";
			break;
		case 6:
			if(space6 != "6"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn2();
				exit(1);
			}
			space6 = "o";
			break;
		case 7:
			if(space7 != "7"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn2();
				exit(1);
			}
			space7 = "o";
			break;
		case 8:
			if(space8 != "8"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn2();
				exit(1);
			}
			space8 = "o";
			break;
		case 9:
			if(space9 != "9"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				pvpturn2();
				exit(1);
			}
			space9 = "o";
			break;
		default:
			cout << "This is an invalid move. Please reconsider your move and play again\n";
			board();
			pvpturn2();
			exit(1);
			break;
	}
	board();
}
vsaiezin(){
	system("CLS");
	cout << "\n" << player2 << ":Let us begin now shall we...\n";
	cout << "\n" << player2 << ": Simply enter the number of the square you want to place your mark\n";
	cout << player2 << ": You can have first turn.\n";
	vsaiez();
	return 0;
}
vsaiez(){
	cout << player2 <<  ": Simply enter the number of the square where you want to place your mark. I will then play immediately after\n";
	vsai1();
	aiez2();
	vsai1();
	aiez4();
	vsai1();
	winchk();
	aiez6();
	winchk();
	vsai1();
	winchk();
	aiez8();
	winchk();
	vsai1();
	winchkfin();
}
vsai1(){
	cout << player1 << ":";
	cin >> turn1;
	switch(turn1){
		case 1:
			if(space1 != "1"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				system("CLS");
				board();
				vsai1();
				exit(1);
			}
			space1 = "x";
			break;
		case 2:
			if(space2 != "2"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai1();
				exit(1);
			}
			space2 = "x";
			break;
		case 3:
			if(space3 != "3"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai1();
				exit(1);
			}
			space3 = "x";
			break;
		case 4:
			if(space4 != "4"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai1();
				exit(1);
			}
			space4 = "x";
			break;
		case 5:
			if(space5 != "5"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai1();
				exit(1);
			}
			space5 = "x";
			break;
		case 6:
			if(space6 != "6"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai1();
				exit(1);
			}
			space6 = "x";
			break;
		case 7:
			if(space7 != "7"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai1();
				exit(1);
			}
			space7 = "x";
			break;
		case 8:
			if(space8 != "8"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai1();
				exit(1);
			}
			space8 = "x";
			break;
		case 9:
			if(space9 != "9"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai1();
				exit(1);
			}
			space9 = "x";
			break;
		default:
			cout << "This is an invalid move. Please reconsider your move and play again\n";
			board();
			vsai1();
			exit(1);
			break;
	}
	board();
}
aiez2(){
	turn2 = rand() % 10;
	switch(turn2){
		case 1:
			if(space1 != "1"){
				aiez2();
				return 0;
			}
			space1 = "o";
			break;
		case 2:
			if(space2 != "2"){
				aiez2();
				return 0;
			}
			space2 = "o";
			break;
		case 3:
			if(space3 != "3"){
				aiez2();
				return 0;
			}
			space3 = "o";
			break;
		case 4:
			if(space4 != "4"){
				aiez2();
				return 0;
			}
			space4 = "o";
			break;
		case 5:
			if(space5 != "5"){
				aiez2();
				return 0;
			}
			space5 = "o";
			break;
		case 6:
			if(space6 != "6"){
				aiez2();
				return 0;
			}
			space6 = "o";
		case 7:
			if(space7 != "7"){
				aiez2();
				return 0;
			}
			space7 = "o";
			break;
		case 8:
			if(space8 != "8"){
				aiez2();
				return 0;
			}
			space8 = "o";
			break;
		case 9:
			if(space9 != "9"){
				aiez2();
				return 0;
			}
			space9 = "o";
			break;
		default:
			aiez2();
			return 0;
			break;
	}
	board();
}
aiez4(){
	turn4 = rand() % 10;
	switch(turn4){
		case 1:
			if(space1 != "1"){
				aiez4();
				return 0;
			}
			space1 = "o";
			break;
		case 2:
			if(space2 != "2"){
				aiez4();
				return 0;
			}
			space2 = "o";
			break;
		case 3:
			if(space3 != "3"){
				aiez4();
				return 0;
			}
			space3 = "o";
			break;
		case 4:
			if(space4 != "4"){
				aiez4();
				return 0;
			}
			space4 = "o";
			break;
		case 5:
			if(space5 != "5"){
				aiez4();
				return 0;
			}
			space5 = "o";
			break;
		case 6:
			if(space6 != "6"){
				aiez4();
				return 0;
			}
			space6 = "o";
			break;
		case 7:
			if(space7 != "7"){
				aiez4();
				return 0;
			}
			space7 = "o";
			break;
		case 8:
			if(space8 != "8"){
				aiez4();
				return 0;
			}
			space8 = "o";
			break;
		case 9:
			if(space9 != "9"){
				aiez4();
				return 0;
			}
			space9 = "o";
			break;
		default:
			aiez4();
			return 0;
			break;
	}
	board();
}
aiez6(){
	turn6 = rand() % 10;
	switch(turn6){
		case 1:
			if(space1 != "1"){
				aiez6();
				return 0;
			}
			space1 = "o";
			break;
		case 2:
			if(space2 != "2"){
				aiez6();
				return 0;
			}
			space2 = "o";
			break;
		case 3:
			if(space3 != "3"){
				aiez6();
				return 0;
			}
			space3 = "o";
			break;
		case 4:
			if(space4 != "4"){
				aiez6();
				return 0;
			}
			space4 = "o";
			break;
		case 5:
			if(space5 != "5"){
				aiez6();
				return 0;
			}
			space5 = "o";
			break;
		case 6:
			if(space6 != "6"){
				aiez6();
				return 0;
			}
			space6 = "o";
			break;
		case 7:
			if(space7 != "7"){
				aiez6();
				return 0;
			}
			space7 = "o";
			break;
		case 8:
			if(space8 != "8"){
				aiez6();
				return 0;
			}
			space8 = "o";
			break;
		case 9:
			if(space9 != "9"){
				aiez6();
				return 0;
			}
			space9 = "o";
			break;
		default:
			aiez6();
			return 0;
			break;
	}
	board();
}
aiez8(){
	turn8 = rand() % 10;
	switch(turn8){
		case 1:
			if(space1 != "1"){
				aiez8();
				return 0;
			}
			space1 = "o";
			break;
		case 2:
			if(space2 != "2"){
				aiez8();
				return 0;
			}
			space2 = "o";
			break;
		case 3:
			if(space3 != "3"){
				aiez8();
				return 0;
			}
			space3 = "o";
			break;
		case 4:
			if(space4 != "4"){
				aiez8();
				return 0;
			}
			space4 = "o";
			break;
		case 5:
			if(space5 != "5"){
				aiez8();
				return 0;
			}
			space5 = "o";
			break;
		case 6:
			if(space6 != "6"){
				aiez8();
				return 0;
			}
			space6 = "o";
			break;
		case 7:
			if(space7 != "7"){
				aiez8();
				return 0;
			}
			space7 = "o";
			break;
		case 8:
			if(space8 != "8"){
				aiez8();
				return 0;
			}
			space8 = "o";
			break;
		case 9:
			if(space9 != "9"){
				aiez8();
				return 0;
			}
			space9 = "o";
			break;
		default:
			aiez8();
			return 1;
			break;
	}
	board();
}
vsai9(){
	cout << player1 << ":";
	cin >> turn9;
	switch(turn9){
		case 1:
			if(space1 != "1"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				system("CLS");
				board();
				vsai9();
				exit(1);
			}
			space1 = "x";
			break;
		case 2:
			if(space2 != "2"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai9();
				exit(1);
			}
			space2 = "x";
			break;
		case 3:
			if(space3 != "3"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai9();
				exit(1);
			}
			space3 = "x";
			break;
		case 4:
			if(space4 != "4"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai9();
				exit(1);
			}
			space4 = "x";
			break;
		case 5:
			if(space5 != "5"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai9();
				exit(1);
			}
			space5 = "x";
			break;
		case 6:
			if(space6 != "6"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai9();
				exit(1);
			}
			space6 = "x";
			break;
		case 7:
			if(space7 != "7"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai9();
				exit(1);
			}
			space7 = "x";
			break;
		case 8:
			if(space8 != "8"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai9();
				exit(1);
			}
			space8 = "x";
			break;
		case 9:
			if(space9 != "9"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsai9();
				exit(1);
			}
			space9 = "x";
			break;
		default:
			cout << "This is an invalid move. Please reconsider your move and play again\n";
			board();
			vsai9();
			exit(1);
			break;
	}
	board();
}
vsIsaiah(){
	player1 = ai;
	player2 = name;
	cout << player1 <<  ": Simply enter the number of the square where you want to place your mark. I however,"<< 
	" take first play making you, Player 2. >:)\n Good Luck " << player2 << "\n";
	
	//Isaiah Plays 1
	cout << "Press any key to begin\n";
	getch();
	Isaiah1();
	board();
	
	//Player plays 2
	vsiseh2();
	
	//Isaiah Plays 3
	Isaiah3();
	board();
	
	//Player plays 4
	vsiseh2();
	
	//Isaiah Plays 5
	mt1();
	board();
	winchk();
	
	//Player Plays 6
	vsiseh2();
	winchk();
	
	//Isaiah Plays 7
	mt1();
	board();
	winchk();
	
	//Player Plays 8
	vsiseh2();
	winchk();
	
	//Isaiah Plays 9
	mt1();
	board();
	winchkfin();
	//Option to Rematch
	
	cout << "That was fun. Would you like to go against me again?y/n\n";
	cout << name << ":";
	string resp;
	cin >> resp;
	if(resp == "y"){
		system("CLS");
		rematch();
		return 0;
	}
	else if(resp == "n"){
		exit(0);
	}
	return 0;
}
mt2(){
	//with 5 for Turn 5
	if((space1 == "x") && (space9 == "x") && (space5 == "5")){
		space5 = "x";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "x") && (space5 == "x") && (space9 == "9")){
		space9 = "x";
		board();
		winchk();
		return 0;
	}
	else if((space9 == "x") && (space5 == "x") && (space1 == "1")){
		space1 = "x";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "x") && (space5 == "x") && (space3 == "3")){
		space3 = "x";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "x") && (space3 == "x") && (space5 == "5")){
		space5 = "x";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "1") && (space3== "x") &&(space5 == "x")){
		space1 = "x";
		board();
		winchk();
		return 0;
	}
	else if((space7 == "x") && (space5 == "x") && (space1 == "1")){
		space1 = "x";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "x") && (space5 == "x") && (space7 == "7")){
		space7 = "x";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "x") && (space7 == "x") && (space5 == "5")){
		space5 = "x";
	}
	else if((space3 == "x") && (space5 == "x") && (space7 == "7")){
		space7 = "x";
	}
	else if((space3 == "x") && (space5 == "5") && (space7 == "x")){
		space5 = "x";
	}
	else if((space3 == "3") &&(space5 == "x") && (space7 == "x")){
		space3 = "x";
	}
	else if((space7 == "x") && (space5 == "x") && (space9 == "9")){
		space9 = "x";
	}
	else if((space7 == "x") && (space5 == "5") && (space9 == "x")){
		space5 = "x";
	}
	else if((space7 == "7") && (space5 == "x") && (space9 == "x")){
		space7 = "x";
	}
	//with 5 Backup
	else if((space2 == "x") && (space5 == "x") && (space4 == "x")){
		if(space8 == "8"){
			space8 = "x";
		}
		else if(space6 == "6"){
			space6 = "x";
		}
	}
	else if((space2 == "x") && (space5 == "x") && (space6 == "x")){
		if(space8 == "8"){
			space8 = "x";
		}
		else if(space4 == "4"){
			space4 = "x";
		}
	}
	else if((space4 == "x") && (space5 == "x") && (space8 == "x")){
		if(space2 == "2"){
			space2 = "x";
		}
		else if(space6 == "6"){
			space6 = "x";
		}
	}
	else if((space6 == "x") && (space5 == "x") && (space8 == "x")){
		if(space4 == "4"){
			space4 = "x";
		}
		else if(space2 == "2"){
			space2 = "x";
		}
	}
	//without 5 for turn 5
	else if((space1 == "x") && (space9 == "x") && (space7 == "7")){
		space7 = "x";
		board();
		winchk();
		return 0;
		}
	else if((space7 == "x") && (space9 == "x") && (space1 == "1")){
		space1 = "x";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "x") && (space7 == "x") && (space9 == "9")){
		space9 = "x";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "x") && (space3 == "x") && (space9 == "9")){
		space9 = "x";
	}
	else if((space1 == "x") && (space3 == "3") && (space9 == "x")){
		space3 = "x";
	}
	else if((space1 == "1") && (space3 == "x") && (space9 == "x")){
		space1 = "x";
	}
	else if((space1 == "x") && (space3 == "x") && (space7 == "7")){
		space7 = "x";
	}
	else if((space1 == "x") && (space3 == "3") && (space7 == "x")){
		space3 = "x";
	}
	else if ((space1 == "1") && (space3 == "x") && (space7 == "x")){
		space7 = "x";
	}
	else if((space3 == "x") && (space7 == "x") && (space9 == "9")){
		space9 = "x";
	}
	else if((space3 == "3") && (space7 == "x") && (space9 == "x")){
		space3 = "x";
	}
	else if((space3 == "x") && (space7 == "7") &&(space9 == "x")){
		space7 = "x";
	}
//Turn 7
	else if((space1 == "x") && (space3 == "3") && (space9 == "x")){
		space3 = "x";
	}
	else if((space1 == "1") && (space3 == "x") && (space9 == "x")){
		space1 = "x";
	}
	else if((space1 == "x") && (space3 == "x") && (space9 == "x")){
		if(space2 == "2"){
			space2 = "x";
			board();
			winchk();
			return 0;
		}
		else if(space6 == "6"){
			space6 = "x";
			board();
			winchk();
			return 0;
		}
		else if(space5 == "5"){
			space5 = "x";
			board();
			winchk();
			return 0;
		}
	}
	else if((space1 == "x") && (space3 == "x") && (space7 == "x")){
		if(space2 == "2"){
			space2 = "x";
			board();
			winchk();
			return 0;
		}
		else if(space4 == "4"){
			space4 = "x";
			board();
			winchk();
			return 0;
		}
		else if(space5 == "5"){
			space5 = "x";
			board();
			winchk();
			return 0;
		}
	}
	else if((space1 == "x") && (space7 == "x") && (space9 == "x")){
		if(space4 == "4"){
			space4 == "x";
			board();
			winchk();
			return 0;
		}
		else if(space5 == "5"){
			space5 == "x";
			board();
			winchk();
			return 0;
		}
		else if(space8 == "8"){
			space8 = "x";
			board();
			winchk();
			return 0;
		}
	}
	else if((space1 == "x") && (space3 == "x") && (space7 == "x")){
		if(space2 == "2"){
			space2 = "x";
			board();
			winchk();
			return 0;
		}
		else if(space4 == "4"){
			space4 = "x";
			board();
			winchk();
			return 0;
		}
		else if(space5 == "5"){
			space5 = "x";
			board();
			winchk();
			return 0;
		}
	}
	else if((space3 == "x") && (space7 == "x") && (space9 == "x")){
		if(space6 == "6"){
			space6 = "x";
			board();
			winchk();
			return 0;
		}
		else if(space8 == "8"){
			space8 = "x";
			board();
			winchk();
			return 0;
		}
		else if(space5 == "5"){
			space5 = "x";
			board();
			winchk();
			return 0;
		}
	}
	else{
		revenge();
	}
	board();
	winchk();
	return 0;
}
mt1(){
	if((space1 == "o") && (space2 == "o") && (space3 == "3")){
		space3 = "x";
		return 2;
	}
	else if((space1 == "o") && (space3 == "o") && (space2 == "2")){
		space2 = "x";
		return 2;
	}
	else if((space3 == "o") && (space2 == "o") && (space1 == "1")){
		space1 = "x";
		return 2;
	}
	else if((space1 == "o") && (space4 == "o") && (space7 == "7")){
		space7 = "x";
		return 2;
	}
	else if((space1 == "o") && (space7 == "o") && (space4 == "4")){
		space4 = "x";
		return 2;
	}
	else if((space4 == "o") && (space7 == "o")&& (space1 == "1")){
		space1 = "x";
		return 2;
	}
	else if((space4 == "o") && (space5 == "o") && (space6 == "6")){
		space6 = "x";
		return 2;
	}
	else if((space5 == "o") && (space6 == "o") && (space4 == "4")){
		space4 = "x";
		return 2;
	}
	else if((space4 == "o") && (space6 == "o") && (space5 == "5")){
		space5 = "x";
		return 2;
	}
	else if((space7 == "o") && (space8 == "o") && (space9 == "9")){
		space9 = "x";
		return 2;
	}
	else if((space7 == "o") && (space9 == "o") && (space8 == "8")){
		space8 = "x";
		return 2;
	}
	else if((space8 == "o")&& (space9 == "o") && (space7 == "7")){
		space7 = "x";
		return 2;	
	}
	else if((space2 == "o") && (space5 == "o") && (space8 == "8")){
		space8 = "x";
		return 2;
	}
	else if((space2 == "o") && (space8 == "o") && (space5 == "5")){
		space5 = "x";
		return 2;
	}
	else if((space5 == "o") && (space8 == "o") && (space2 == "2")){
		space2 = "x";
		return 2;
	}
	else if((space3 == "o") && (space6 == "o") && (space9 == "9")){
		space9 = "x";
		return 2;
	}
	else if((space3 == "o") && (space9 == "o") && (space6 == "6")){
		space6 = "x";
		return 2;
	}
	else if((space6 == "o") && (space9 == "o") && (space3 == "3")){
		space3 = "x";
		return 2;
	}
	else if((space1 == "o") && (space5 == "o") && (space9 == "9")){
		space9 = "x";
		return 2;
	}
	else if((space1 == "o") && (space9 == "o") && (space5 == "5")){
		space5 = "x";
		return 2;
	}
	else if((space5 == "o") && (space9 == "o") && (space1 == "1")){
		space1 = "x";
		return 2;
	}
	else if((space3 == "o") && (space5 == "o") && (space7 == "7")){
		space7 = "x";
		return 2;
	}
	else if((space3 == "o") && (space7 == "o") && (space5 == "5")){
		space5 = "x";
		return 2;
	}
	else if((space7 == "o") && (space5 == "o") && (space3 == "o")){
		space3 = "x";
		return 2;
	}
	else{
		mt1();
	}
}
revenge(){
	if(space2 == "2"){
		space2 = "x";
	}
	else if(space4 == "4"){
		space4 = "x";
	}
	else if(space6 == "6"){
		space6 = "x";
	}
	else if(space8 == "8"){
		space8 = "x";
	}
}
Isaiah1(){
	turn1 = rand() % 6;
	switch(turn1){
		case 1:
			space1 = "x";
			return 0;
			break;
		case 2:
			space3 = "x";
			return 0;
			break;
		case 3:
			space5 = "x";
			return 0;
			break;
		case 4:
			space7 = "x";
			return 0;
			break;
		case 5:
			space9 = "x";
			return 0;
			break;
		default:
			Isaiah1();
			return 0;
			break;
		
	}
}
vsiseh2(){
	cout << player2 << ":";
	cin >> turn2;
	switch(turn2){
		case 1:
			if(space1 != "1"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				system("CLS");
				board();
				vsiseh2();
				exit(1);
			}
			space1 = "o";
			break;
		case 2:
			if(space2 != "2"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsiseh2();
				exit(1);
			}
			space2 = "o";
			break;
		case 3:
			if(space3 != "3"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsiseh2();
				exit(1);
			}
			space3 = "o";
			break;
		case 4:
			if(space4 != "4"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsiseh2();
				exit(1);
			}
			space4 = "o";
			break;
		case 5:
			if(space5 != "5"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsiseh2();
				exit(1);
			}
			space5 = "o";
			break;
		case 6:
			if(space6 != "6"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsiseh2();
				exit(1);
			}
			space6 = "o";
			break;
		case 7:
			if(space7 != "7"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsiseh2();
				exit(1);
			}
			space7 = "o";
			break;
		case 8:
			if(space8 != "8"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsiseh2();
				exit(1);
			}
			space8 = "o";
			break;
		case 9:
			if(space9 != "9"){
				cout << "This is an invalid move. Please reconsider your move and play again\n";
				board();
				vsiseh2();
				exit(1);
			}
			space9 = "o";
			break;
		default:
			cout << "This is an invalid move. Please reconsider your move and play again\n";
			board();
			vsiseh2();
			exit(1);
			break;
	}
	board();
}
Isaiah3(){
	if(space5 == "5"){
		space5 = "x";
		return 0;
	}
	else if((space5 == "x") && (space1 == "1")){
		space1 = "x";
	}
	else if((space5 == "x") && (space3 == "3")){
		space3 = "x";
	}
	else if((space5 == "x") && (space7 == "7")){
		space7 = "x";
	}
	else if((space5 == "x") && (space9 == "9")){
		space9 = "x";
	}
	else if((space9 == "x") && (space1 == "1")){
		space1 = "x";
	}
	else if((space9 == "x") && (space5 == "5")){
		space5 = "x";
	}
	else if((space7 == "x") && (space3 == "3")){
		space3 = "x";
	}
	else if((space7 == "x") && (space5 == "5")){
		space5 = "x";
	}
	else if((space1 == "x") && (space5 == "5")){
		space5 = "x";
	}
	else if((space1 == "x") && (space9 == "9")){
		space9 = "x";
	}
	else if((space3 == "x") && (space7 == "7")){
		space7 = "x";
	}
	else if((space3 == "x") && (space5 == "5")){
		space5 = "x";
	}
}
rematch(){
		player1 = name;
		player2 = ai;
			space1 = "1",
space2 = "2",
space3 = "3",
space4 = "4",
space5 = "5",
space6 = "6",
space7 = "7",
space8 = "8",
space9 = "9";
	board();
		cout << player2 << ": You can play first this time\n";
		cout << player2 << ": However I warn you... I am at my best >:3\n";
		pvpturn1();
		Isaiah2();
		yoturn();
		
		pvpturn1();
		mt4();
		board();
		yoturn();
		
		pvpturn1();
		winchk();
		
		mt4();
		board();
		winchk();
		yoturn();
		
		pvpturn1();
		winchk();
		
		mt4();
		board();
		winchk();
		yoturn();
		
		pvpturn1();
		winchkfin();
}
Isaiah2(){
	if((space1 == "x")){
		space7 = "o";
	}
	else if(space3 == "x"){
		space9 = "o";
	}
	else if(space7 == "X"){
		space1 = "o";
	}
	else if(space9 == "x"){
		space3 = "o";
	}
	else if(space5 == "x"){
		turn2 = rand() % 5;
		switch(turn2){
			case 1:
				space1 = "o";
				break;
			case 2:
				space3 = "o";
				break;
			case 3:
				space7 = "o";
				break;
			case 4:
				space9 = "o";
				break;
		}
	}
	else if(space2 == "x"){
		space4 = "o";
		space6 = "o";
	}
	else if(space4 == "x"){
		space2 = "o";
		space8 = "o";
	}
	else if(space6 == "x"){
		space2 = "o";
		space8 = "o";
	}
	else if(space8 == "x"){
		space4 = "o";
		space6 = "o";
	}
	board();
}
mt4(){
	//with 5 for Turn 6
	if((space1 == "o") && (space9 == "o") && (space5 == "5")){
		space5 = "o";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "o") && (space5 == "o") && (space9 == "9")){
		space9 = "o";
		board();
		winchk();
		return 0;
	}
	else if((space9 == "o") && (space5 == "o") && (space1 == "1")){
		space1 = "o";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "o") && (space5 == "o") && (space3 == "3")){
		space3 = "o";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "o") && (space3 == "o") && (space5 == "5")){
		space5 = "o";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "1") && (space3== "o") &&(space5 == "o")){
		space1 = "o";
		board();
		winchk();
		return 0;
	}
	else if((space7 == "o") && (space5 == "o") && (space1 == "1")){
		space1 = "o";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "o") && (space5 == "o") && (space7 == "7")){
		space7 = "o";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "o") && (space7 == "o") && (space5 == "5")){
		space5 = "o";
	}
	else if((space3 == "o") && (space5 == "o") && (space7 == "7")){
		space7 = "o";
	}
	else if((space3 == "o") && (space5 == "o") && (space7 == "o")){
		space5 = "o";
	}
	else if((space3 == "o") &&(space5 == "o") && (space7 == "o")){
		space3 = "o";
	}
	else if((space7 == "o") && (space5 == "o") && (space9 == "9")){
		space9 = "o";
	}
	else if((space7 == "o") && (space5 == "5") && (space9 == "o")){
		space5 = "o";
	}
	else if((space7 == "7") && (space5 == "o") && (space9 == "o")){
		space7 = "o";
	}
	//with 5 backup
	else if((space2 == "o") && (space5 == "o") && (space4 == "o")){
		if(space8 == "8"){
			space8 = "o";
		}
		else if(space6 == "6"){
			space6 = "o";
		}
	}
	else if((space2 == "o") && (space5 == "o") && (space6 == "o")){
		if(space8 == "8"){
			space8 = "o";
		}
		else if(space4 == "4"){
			space4 = "o";
		}
	}
	else if((space4 == "o") && (space5 == "o") && (space8 == "o")){
		if(space2 == "2"){
			space2 = "o";
		}
		else if(space6 == "6"){
			space6 = "o";
		}
	}
	else if((space6 == "o") && (space5 == "o") && (space8 == "o")){
		if(space4 == "4"){
			space4 = "o";
		}
		else if(space2 == "2"){
			space2 = "o";
		}
	}
	//without 5 for turn 6
	else if((space1 == "o") && (space9 == "o") && (space7 == "7")){
		space7 = "o";
		board();
		winchk();
		return 0;
		}
	else if((space7 == "o") && (space9 == "o") && (space1 == "1")){
		space1 = "o";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "o") && (space7 == "o") && (space9 == "9")){
		space9 = "o";
		board();
		winchk();
		return 0;
	}
	else if((space1 == "o") && (space3 == "o") && (space9 == "9")){
		space9 = "o";
	}
	else if((space1 == "o") && (space3 == "3") && (space9 == "o")){
		space3 = "o";
	}
	else if((space1 == "1") && (space3 == "o") && (space9 == "o")){
		space1 = "o";
	}
	else if((space1 == "o") && (space3 == "o") && (space7 == "7")){
		space7 = "o";
	}
	else if((space1 == "o") && (space3 == "3") && (space7 == "o")){
		space3 = "o";
	}
	else if ((space1 == "1") && (space3 == "o") && (space7 == "o")){
		space7 = "o";
	}
	else if((space3 == "o") && (space7 == "o") && (space9 == "9")){
		space9 = "o";
	}
	else if((space3 == "3") && (space7 == "o") && (space9 == "o")){
		space3 = "o";
	}
	else if((space3 == "o") && (space7 == "o") &&(space9 == "o")){
		space7 = "o";
	}
//Turn 8
	else if((space1 == "o") && (space3 == "3") && (space9 == "o")){
		space3 = "o";
	}
	else if((space1 == "1") && (space3 == "o") && (space9 == "o")){
		space1 = "o";
	}
	else if((space2 == "o") && (space5 == "o") && (space4 == "o") && (space6 == "6")){
		space6 = "o";
	}
	else if((space2 == "o") && (space5 == "o") && (space6 == "o") && (space4 == "4")){
		space4 = "o";
	}
	else if((space4 == "o") && (space5 == "o") && (space8 == "o") && (space6 == "6")){
		space6 = "o";
	}
	else if((space1 == "o") && (space3 == "o") && (space9 == "o")){
		if(space2 == "2"){
			space2 = "o";
			board();
			winchk();
			return 0;
		}
		else if(space6 == "6"){
			space6 = "o";
			board();
			winchk();
			return 0;
		}
		else if(space5 == "5"){
			space5 = "o";
			board();
			winchk();
			return 0;
		}
	}
	else if((space1 == "o") && (space3 == "o") && (space7 == "o")){
		if(space2 == "2"){
			space2 = "o";
			board();
			winchk();
			return 0;
		}
		else if(space4 == "4"){
			space4 = "o";
			board();
			winchk();
			return 0;
		}
		else if(space5 == "5"){
			space5 = "o";
			board();
			winchk();
			return 0;
		}
	}
	else if((space1 == "o") && (space7 == "o") && (space9 == "o")){
		if(space4 == "4"){
			space4 == "o";
			board();
			winchk();
			return 0;
		}
		else if(space5 == "5"){
			space5 == "o";
			board();
			winchk();
			return 0;
		}
		else if(space8 == "8"){
			space8 = "o";
			board();
			winchk();
			return 0;
		}
	}
	else if((space1 == "o") && (space3 == "o") && (space7 == "o")){
		if(space2 == "2"){
			space2 = "o";
			board();
			winchk();
			return 0;
		}
		else if(space4 == "4"){
			space4 = "o";
			board();
			winchk();
			return 0;
		}
		else if(space5 == "5"){
			space5 = "o";
			board();
			winchk();
			return 0;
		}
	}
	else if((space3 == "o") && (space7 == "o") && (space9 == "o")){
		if(space6 == "6"){
			space6 = "o";
			board();
			winchk();
			return 0;
		}
		else if(space8 == "8"){
			space8 = "o";
			board();
			winchk();
			return 0;
		}
		else if(space5 == "5"){
			space5 = "o";
			board();
			winchk();
			return 0;
		}
	}
	else{
		mt3();
	}
}
mt3(){
	//Cheats
	if((space1 == "x") && (space3 == "x") && (space7 == "x")){
		space4 = "o";
		space2 = "o";
	}
	else if((space3 == "x") && (space9 == "x") && (space7 == "x")){
		space6 = "o";
		space8 = "o";
	}
	else if((space1 == "x") && (space3 == "x") && (space9 == "x")){
		space2 = "o";
		space6 = "o";
	}
	else if((space1 == "x") && (space7 == "x") && (space9 == "x")){
		space4 = "o";
		space8 = "o";
	}
	//Advance Cheats
	else if((space1 == "x") && (space2 == "x") && (space5 == "x") && (space8 == "8") && (space3 == "3")){
		space3 = "o";
		space8 = "o";
	}
	else if((space1 == "x") && (space2 == "x") && (space5 == "x") && (space8 == "8") && (space7 == "x") && (space3 == "3")){
		space8 = "o";
		space3 = "o";
	}
	else if((space4 == "x") && (space5 == "x") && (space8 == "x") && (space2 == "2") && (space6 == "6")){
		space6 = "o";
		space2 = "o";
	}
	else if((space4 == "x") && (space5 == "x") && (space2 == "x") && (space8 == "8") && (space6 == "6")){
		space6 = "o";
		space8 = "o";
	}
	else if((space4 == "x") && (space5 == "x") && (space7 == "x") && (space8 == "x") && (space9 == "9") && (space1 == "1")){
		space9 = "o";
		space1 = "o";
	}
	else if((space4 == "x") &&(space5 == "x") && (space7 == "x") && (space8 == "x") && (space9 == "9") && (space2 == "2")){
		space2 = "o";
		space9 = "o";
	}
	else if((space4 == "x") && (space5 == "x") && (space7 == "x") && (space8 == "x") && (space9 == "9") && (space3 == "3")){
		space3 = "o";
		space9 = "o";
	}
	else if((space6 == "x") && (space5 == "x") && (space9 == "x") && (space8 == "x") && (space3 == "3") && (space4 == "4")){
		space4 = "o";
		space3 = "o";
	}
	else if((space4 == "x") && (space5 == "x") && (space8 == "x") && (space9 == "x") && (space1 == "1") && (space7 == "7")){
		space7 = "o";
		space1 = "o";
	}
	else if((space1 == "x") && (space3 == "x") && (space9 == "3") && (space5 == "5") && (space6 == "6")){
		space6 = "o";
		space5 = "o";
	}
	//defense
	else if((space1 == "x") && (space3 == "x") && (space5 == "x") && (space7 == "7") && (space2 == "2") && (space9 == "9")){
		space7 = "o";
		space9 = "o";
		space2 = "o";
	}
	else if((space1 == "x") && (space2 == "x") && (space3 == "3")){
		space3 = "o";
		return 2;
	}
	else if((space1 == "x") && (space3 == "x") && (space2 == "2")){
		space2 = "o";
		return 2;
	}
	else if((space3 == "x") && (space2 == "x") && (space1 == "1")){
		space1 = "o";
		return 2;
	}
	else if((space1 == "x") && (space4 == "x") && (space7 == "7")){
		space7 = "o";
		return 2;
	}
	else if((space1 == "x") && (space7 == "x") && (space4 == "4")){
		space4 = "o";
		return 2;
	}
	else if((space4 == "x") && (space7 == "x")&& (space1 == "1")){
		space1 = "o";
		return 2;
	}
	else if((space4 == "x") && (space5 == "x") && (space6 == "6")){
		space6 = "o";
		return 2;
	}
	else if((space5 == "x") && (space6 == "x") && (space4 == "4")){
		space4 = "o";
		return 2;
	}
	else if((space4 == "x") && (space6 == "x") && (space5 == "5")){
		space5 = "o";
		return 2;
	}
	else if((space7 == "x") && (space8 == "x") && (space9 == "9")){
		space9 = "o";
		return 2;
	}
	else if((space7 == "x") && (space9 == "x") && (space8 == "8")){
		space8 = "o";
		return 2;
	}
	else if((space8 == "x")&& (space9 == "x") && (space7 == "7")){
		space7 = "o";
		return 2;	
	}
	else if((space2 == "x") && (space5 == "x") && (space8 == "8")){
		space8 = "o";
		return 2;
	}
	else if((space2 == "x") && (space8 == "x") && (space5 == "5")){
		space5 = "o";
		return 2;
	}
	else if((space5 == "x") && (space8 == "x") && (space2 == "2")){
		space2 = "o";
		return 2;
	}
	else if((space3 == "x") && (space6 == "x") && (space9 == "9")){
		space9 = "o";
		return 2;
	}
	else if((space3 == "x") && (space9 == "x") && (space6 == "6")){
		space6 = "o";
		return 2;
	}
	else if((space6 == "x") && (space9 == "x") && (space3 == "3")){
		space3 = "o";
		return 2;
	}
	else if((space1 == "x") && (space5 == "x") && (space9 == "9")){
		space9 = "o";
		return 2;
	}
	else if((space1 == "x") && (space9 == "x") && (space5 == "5")){
		space5 = "o";
		return 2;
	}
	else if((space5 == "x") && (space9 == "x") && (space1 == "1")){
		space1 = "o";
		return 2;
	}
	else if((space3 == "x") && (space5 == "x") && (space7 == "7")){
		space7 = "o";
		return 2;
	}
	else if((space3 == "x") && (space7 == "x") && (space5 == "5")){
		space5 = "o";
		return 2;
	}
	else if((space7 == "x") && (space5 == "x") && (space3 == "3")){
		space3 = "o";
		return 2;
	}

	else{
		revenge2();
	}
	board();
	winchk();
	return 0;
}
revenge2(){
	if(space2 == "2"){
		space2 = "o";
	}
	else if(space4 == "4"){
		space4 = "o";
	}
	else if(space6 == "6"){
		space6 = "o";
	}
	else if(space8 == "8"){
		space8 = "o";
	}
}
