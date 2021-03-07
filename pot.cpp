#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
//variables
int health = 200;
int sword = 20;
int hpot = 40;
string resp;
//functions
int healme();
int healthchk();
//start
int main(){
    cout << "Welcome. Type yes to attack your enemy with a sword\n";
    cin >> resp;
    if(resp == "yes"){
        health = health - sword;
        healme();
    }
    else{
    	main();
	}
}
healme(){
    cout << "You did" << sword << " damage and your enemy has" << health << "Hp left\n";
    cout << "Type h to heal your enemy cause why not: ";
    cin >> resp;
    if(resp == "h"){
        health = health + hpot;
        healthchk();
    }
    else{
        main();
    }
}
healthchk(){
    cout << "Your enemy now has " << health << " health points remaining. Good job";
    getch();
}

