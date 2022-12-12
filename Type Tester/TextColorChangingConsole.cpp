#include<iostream>
#include<windows.h>
using namespace std;

const int BLUE = 1;
const int GREEN = 2;
const int RED = 4;
const int WHITE = 15;


void ChangeColor(int color){
	HANDLE hconsole;
	hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hconsole, color);
}

int main(){
	ChangeColor(RED);
	cout<<"THis better bee Blooody";
	




































	return 0;
}