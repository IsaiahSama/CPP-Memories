#include <iostream>
#include <conio.h>
#include <cstdlib>
#include<time.h>
#include <string>
using namespace std;
int test();
int main(){
	test();
	if(4 == test()){
		cout << "YOU ARE THE GREATEST\n";
	}
	if(test() != 4){
		cout << "You are not the greatest\n";
	}
}
test(){
	return 4;
}
