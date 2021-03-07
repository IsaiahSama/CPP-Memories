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

//Functions
int charsel();
int numsel();
int agechk();
int sernum();
int convert();
int invalidnum();
int passkeycreator();
int registernew();
//variables
int rand();
//passkey
ifstream fileregc;
string charint;
int charint2;
//stores entered numbers
int num1, num2, num3, num4, num5;
//stores strings based on numbers from above variables
string onum, tnum, ttnum; 
int fnum, ffnum;
string nage, nnum, ofnum, offnum, charint2a;
int a = 10,
	b = 21,
	c = 17,
	d = 19,
	e = 51,
	f = 25,
	g = 45,
	h = 1,
	i = 15,
	j = 14,
	k = 52,
	l = 5,
	m = 3,
	n = 44,
	o = 39,
	p = 23,
	q = 20,
	r = 50,
	s = 20,
	t = 30,
	u = 40,
	v = 29,
	w = 31,
	x = 22,
	y = 11,
	z = 33,
	A = 2,
	B = 8,
	C = 13,
	D = 27,
	E = 32,
	F = 37,
	G = 24,
	H = 12,
	I = 18,
	J = 16,
	K = 4,
	L = 6,
	M = 26,
	N = 28,
	O = 7,
	P = 9,
	Q = 23,
	R = 24,
	S = 34,
	T = 35,
	U = 36,
	V = 38,
	W = 41,
	X = 42,
	Y = 43,
	Z = 46;
int age;
int num;

void lb(){
	cout << "\n-------------------------------------------------------------------------------------------------- \n" << "\n";
}

int convert(){
	if (charint == "a"){
			charint2 = a;
	}
	else if (charint == "b"){
		charint2 = b;
	}
	else if (charint == "c"){
		charint2 = c;
	}
	else if (charint == "d"){
		charint2 = d;
	}
	else if (charint == "e"){
		charint2 = e;
	}
	else if (charint == "f"){
		charint2 = f;
	}
	else if (charint == "g"){
		charint2 = g;
	}
	else if (charint == "h"){
		charint2 = h;
	}
	else if (charint == "i"){
		charint2 = i;
	}
	else if (charint == "j"){
		charint2 = j;
	}
	else if (charint == "k"){
		charint2 = k;
	}
	else if (charint == "l"){
		charint2 = l;
	}
	else if (charint == "m"){
		charint2 = m;
	}
	else if (charint == "n"){
		charint2 = n;
	}
	else if (charint == "o"){
		charint2 = o;
	}
	else if (charint == "p"){
		charint2 = p;
	}
	else if (charint == "q"){
		charint2 = q;
	}
	else if (charint == "r"){
		charint2 = r;
	}
	else if (charint == "s"){
		charint2 = s;
	}
	else if (charint == "t"){
		charint2 = t;
	}
	else if (charint == "u"){
		charint2 = u;
	}
	else if (charint == "v"){
		charint2 = v;
	}
	else if (charint == "w"){
		charint2 = w;
	}
	else if (charint == "x"){
		charint2 = x;
	}
	else if (charint == "y"){
		charint2 = y;
	}
	else if (charint == "z"){
		charint2 = z;
	}
	else if (charint == "A"){
		charint2 = A;
	}
	else if (charint == "B"){
		charint2 = B;
	}
	else if (charint == "C"){
		charint2 = C;
	}
	else if (charint == "D"){
		charint2 = D;
	}
	else if (charint == "E"){
		charint2 = E;
	}
	else if (charint == "F"){
		charint2 = F;
	}
	else if (charint == "G"){
		charint2 = G;
	}
	else if (charint == "H"){
		charint2 = H;
	}
	else if (charint == "I"){
		charint2 = I;
	}
	else if (charint == "J"){
		charint2 = J;
	}
	else if (charint == "K"){
		charint2 = K;
	}
	else if (charint == "L"){
		charint2 = L;
	}
	else if (charint == "M"){
		charint2 = M;
	}
	else if (charint == "N"){
		charint2 = N;
	}
	else if (charint == "O"){
		charint2 = O;
	}
	else if (charint == "P"){
		charint2 = P;
	}
	else if (charint == "Q"){
		charint2 = Q;
	}
	else if (charint == "R"){
		charint2 = R;
	}
	else if (charint == "S"){
		charint2 = S;
	}
	else if (charint == "T"){
		charint2 = T;
	}
	else if (charint == "U"){
		charint2 = U;
	}
	else if (charint == "V"){
		charint2 = V;
	}
	else if (charint == "W"){
		charint2 = W;
	}
	else if (charint == "X"){
		charint2 = X;
	}
	else if (charint == "Y"){
		charint2 = Y;
	}
	else if (charint == "Z"){
		charint2 = Z;
	}
	else{
		cout << "INVALID CHARACTER" << "\n";
		system("CLS");
		charsel();
	}
}

int main(){
	//makes EXE Full screen
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	system("CLS");
	fschk();
	system("CLS");
	cout << "Welcome to Omega Registration,the app used to create an Omega Account.\n" << "\n";
	cout << "Checking for an existing registration key" << "\n";
	fileregc.open("Omega\\Regkeycomp.txt");
	if (!fileregc){
		cout << "No account detected. Press any key to go to registration section" << "\n";
		getch();
		system("CLS");
		system("mkdir Omega");
		registernew();
		
	}
	fileregc >> name >> passkey >> vericonf >> numtimeplay;
	fileregc.close();
	if(vericonf != trueveri){
		cout << "Your file could not be verified. Please create a New Account\n";
		getch();
		registernew();
	}
	cout << "Account Authorised.\n Welcome " << name << "." << "\n";
	cout << "press any key to go to Omega";
	getch();
	system("Omega.exe");
	return 0;
}
int registernew(){
	system("CLS");
	//Gets name
	cout << "To start, Tell me your name." << "\n";
	cout << "User:";
	cin >> name;
	cout << "Ah, I see your name is " << name << ". It is a pleasure to meet you." << "\n";
	cout << "Did I hear that correctly? y/n\n";
	string resp;
	cout << "User:";
	cin >> resp;
	if(resp == "y"){
	lb();
	agechk();
	}
	else if(resp == "n"){
		cout << "Ho ho. I must really be getting old" << endl;
		registernew();
	}
}
int agechk(){
	//Gets age
	cout << "Now, How old are you?" << "\n";
	cout << name << ":";
	cin >> age;
	cout << "I see, you are " << age << " years old" << "\n";
	if (age < 7000){
		cout << "I vaguely remember when i used to be that young. But when you reach my age time ceases to matter." << "\n";
	}
	if (age > 7000){
		cout << "Older than me? Here i am thinking that being 7000 years old was impressive. Ho Ho" << "\n";
	}
	lb();
	numsel();
}
int numsel(){
	//requests for a number to be entered and stored for later use
	cout << "Now tell me a number of your choosing." << "\n";
	cout << name << ":";
	cin >> num;
	cout << "The number you selected was " << num << "... is that correct? y/n" << "\n";
	string resp;
	cout << name << ":";
	cin >> resp;
	if (resp == "n"){
		cout << "I must not have heard you correctly. Deepest apologies \n" << "\n";
		numsel();
	}
	if (resp == "y"){
		cout << "Good good. Moving on..." << "\n";
		lb();
		charsel();
	}
}
int charsel(){
	cout << "Please tell me an alphabetical character between A and Z" << "\n";
	cout << name << ":";
	cin >> charint;
	convert();
	lb();
	sernum();
}
int invalidnum(){
	system("CLS");
	cout << "ERROR!!" << "\n";
	cout << "That is an invalid number. Read the instructions clearly and let's try that again shall we?" << "\n";
	sernum();
	exit(1);
}
int sernum(){
	system("CLS");
	cout << "Now it is time to begin the process of making your Passkey.\nThe passKey will be stored onto your device, In a folder and you should take care not to lose it as it is needed for the app to function as intended" << "\n";
	cout << "\n\nEnter a number between 1 and 5 inclusive" << "\n";
	cout << name << ":";
	cin >> num1;
	switch(num1){
		case 1:
			onum = "cat";
			break;
		case 2:
			onum = "dog";
			break;
		case 3:
			onum = "turtle";
			break;
		case 4:
			onum = "monkey";
			break;
		case 5:
			onum = "bally";
			break;
		default:
			invalidnum();
			break;
	}	
	system("CLS");
	cout << "Noted. Now tell me a number between 15 and 20 inclusive" << "\n";
	cout << name << ":";
	cin >> num2;
	switch(num2){
		case 15:
			tnum = "big";
			break;
		case 16:
			tnum = "small";
			break;
		case 17:
			tnum = "decent";
			break;
		case 18:
			tnum = "ohkay";
			break;
		case 19:
			tnum = "bald";
			break;
		case 20:
			tnum = "baldy";
			break;
		default:
			invalidnum();
			break;
	}
	system("CLS");
	cout << "Noted. Next, Please tell me an even number of your chosing between 1 and 21" << "\n";
	cout << name << ":";
	cin >> num3;
	switch(num3){
		case 2:
			ttnum = "beach";
			break;
		case 4:
			ttnum = "park";
			break;
		case 6:
			ttnum = "movie";
			break;
		case 8:
			ttnum = "park2";
			break;
		case 10:
			ttnum = "home";
			break;
		case 12:
			ttnum = "bed";
			break;
		case 14:
			ttnum = "chair";
			break;
		case 16:
			ttnum = "couch";
			break;
		case 18:
			ttnum = "potato";
			break;
		case 20:
			ttnum = "recliner";
			break;
		default:
			invalidnum();
			break;
	}
	system("CLS");
	cout << "Noted. Next tell me a number between 1 and 1000 "<< "\n";
	cout << name << ":";
	cin >> num4;
	if ((num4 > 1000) || (num4 < 0)){
		invalidnum();
	}
	fnum = num4 + 273;
	system("CLS");
	cout << "Noted\n Now for the final determiner... Enter half of 50 " << "\n";
	cout << name << ":";
	cin >> num5;
	if(num5 != 25){
		invalidnum();
	}
	ffnum = rand() / ((num5 / 2) + 1);
	passkeycreator();
}
int passkeycreator(){
	system("CLS");
	cout << "Now it is finally time to generate your passkey\n" << "\n";
	//converts from integer to string.
	stringstream nage1;
	nage1 << age;
	nage1 >> nage;
	
	stringstream numo;
	numo << num;
	numo >> nnum;
	
	stringstream ofnum1;
	ofnum1 << fnum;
	ofnum1 >> ofnum;
	
	stringstream offnum1;
	offnum1 << ffnum;
	offnum1 >> offnum;
	
	stringstream charint3;
	charint3 << charint2;
	charint3 >> charint2a;
	
	passkey = onum + tnum + ttnum + nage + nnum + ofnum + offnum + charint + charint2a;
	cout << "Your passkey is " << passkey << "\n";
	numtimeplay = 0;
	ofstream filereg;
	filereg.open("Omega\\Regkeycomp.txt");
	filereg << name << " " << passkey << " " << trueveri << " " << numtimeplay;
	filereg.close();
	
	cout << "A copy of your passkey has been stored onto your device in the form of a txt file along with your username. \nDo not lose this txt file or you will have to re-create your passkey." << "\n";
	cout << "Would you like to log in now? Or exit the program? 1 for log in and 2 for exit\n";
	cout << name << ":";
	int resp;
	cin >> resp;
	switch(resp){
		case 1:
			system("CLS");
			main();
			break;
		case 2:
			exit(1);
	}
}
