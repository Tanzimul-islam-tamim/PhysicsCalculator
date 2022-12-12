#include <iostream>
#include<math.h>
using namespace std;


void method1(){
		// Vector Cross Multiplication AxB = i(y1z2 - z1y2) - j(x1z2 - z1x2) + k(x1y2 - y1x2)

// |i   j   k|
// |x1 y1  z1|
// |x2 y2  z2|
float x1, y1 ,z1; float x2,y2,z2;
cout<<"Enter the Coordinates of the Firt Vector: (i j k) \n";
cin>>x1;
cin>>y1;
cin>>z1;

cout<<"Enter the Coordinates of the second vector: (i j k) \n";
cin>>x2;
cin>>y2;
cin>>z2;

float Calculation_i, Calculation_j, Calculation_k;
Calculation_i = (y1*z2) - (z1*y2);
Calculation_j = -1*((x1*z2) - (z1*x2));
Calculation_k = (x1*y2) - (y1*x2);

if (Calculation_i == 0 && Calculation_j == 0 && Calculation_k == 0)
{
	cout<<"The Value of The Cross Product is: 0 [The vectors are Perpendicular to each other]";
}
else{
if(Calculation_j < 0 && Calculation_k > 0){
cout<<"The Value of The Cross Product is: "<<Calculation_i<<"i "<<Calculation_j<<"j +"<<Calculation_k<<"k \n";
}
else if(Calculation_j>0 && Calculation_k > 0){
cout<<"The Value of The Cross Product is: "<<Calculation_i<<"i +"<<Calculation_j<<"j +"<<Calculation_k<<"k \n";
}
else if(Calculation_j<0 && Calculation_k < 0){
cout<<"The Value of The Cross Product is: "<<Calculation_i<<"i "<<Calculation_j<<"j "<<Calculation_k<<"k \n";
}
else if(Calculation_j>0 && Calculation_k < 0){
cout<<"The Value of The Cross Product is: "<<Calculation_i<<"i +"<<Calculation_j<<"j "<<Calculation_k<<"k \n";
}
else{
cout<<"The Value of The Cross Product is: "<<Calculation_i<<"i "<<Calculation_j<<"j "<<Calculation_k<<"k \n";
}
}

}








int main(){

method1();


	return 0;




}
