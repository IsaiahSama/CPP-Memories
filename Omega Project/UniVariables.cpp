#include <string>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
using namespace std;
string kami = "IsaiahBot: ";
string name;
string passkey;
int vericonf;
int trueveri = 21212110;
int numtimeplay;
int fschk();

int fschk(){
	cout << "Do you want the app to be fullscreen/windowed? (opposite of what it is now). y for yes and n for no;\n";
	cout << "User:";
	string resp;
	cin >> resp;
	if(resp == "y"){
		::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
		system("CLS");
	}
	else if(resp == "n"){
		cout << "Understood.\n";
		system("CLS");
	}
}
