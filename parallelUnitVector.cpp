#include<iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void meth1(){
	/*
parallel unit vector +- (1/magnitude)(vector)
	*/
float i,j,k;
cout<<"Please Enter the Values of the Vector: (i j k) \n";
cin>>i;
cin>>j;
cin>>k;
float magnitude;
magnitude = sqrt((i*i)+(j*j)+(k*k));

cout <<"The Parallel Unit Vector is :"<<"(1/"<<magnitude<<") "<<i<<"i "<<j<<"j "<<k<<"k "
}

int main(){

	return 0;
}