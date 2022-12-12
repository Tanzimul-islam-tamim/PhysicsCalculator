#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

/*
switch cases vector dot multiplication


 Coding this was done // AB = (i1 x i2)+(j1 x j2)+(k1 x k2)



AB = ab cos@

*/


void Method1(){
	// This is procedure 1...Finding dot product by having coordinates of two vectors
	int arr1[3];
	int arr2[3];
cout<<"Enter the values of the first vector: (i j k) \n";
	for(int i= 0; i <3 ; i++){
		cin>>arr1[i];
	}
cout<<"Enter the values of the second vector: (i j k) \n" ;
	for(int i= 0; i <3 ; i++){
		cin>>arr2[i];
	}
	//add a changecolor to these answers
//this is method 1... AB = (i1 x i2)+(j1 x j2)+(k1 x k2)
cout<<"The value of dot product is: "<<(arr1[0]*arr2[0]) + (arr1[1]*arr2[1]) + (arr1[2]*arr2[2])<<endl;

}


void method2(){
	//you know the magnitude of two vectors and the angle between them
	int choose;
	cout<<"Please chose what inputs you have \n (1)Magnitude, Radius Vector, Angle between \n (2)Two Magnitude,Angle Between";
	cin>>choose;
	switch(choose){
	case 1: 
		{
			float CosTheta;float x;float Calculation;

			float magnitude1;
			cout<<"Enter Magnitude of the Vector: ";
			cin>>magnitude1;
			float RadArr[3];
			cout<<"Enter The Coordinates of Radius Vector (i j k) \n";
			for(int i = 0 ; i<3 ; i++){
				cin>>RadArr[i];
			}
			float magnitude2 = sqrt((RadArr[0]*RadArr[0]) + (RadArr[1]*RadArr[1]) + (RadArr[2]*RadArr[2]) );
			cout<<"Enter the Value of the Angle Between them: \n";
			cin>>CosTheta;
			if(CosTheta == 90){cout<<"The value of dot product is: 0"<<"/n";}
			else{
            x = cos(CosTheta*0.0174533);
			Calculation = (magnitude1*magnitude2)*x;
			cout<<"The value of dot product is: "<<Calculation<<"/n";
            }

		}
	break;

	case 2:
		{
			float magnitude1;
			cout<<"Enter Magnitude of the First Vector: ";
			cin>>magnitude1;

			float magnitude2;
			cout<<"Enter Magnitude of the Second Vector: ";
			cin>>magnitude2;

			float CosTheta;float x;float Calculation;
			cout<<"Enter the Value of the Angle Between them: ";
			cin>>CosTheta;

			if(CosTheta == 90){cout<<"The value of dot product is: 0"<<"\n";}
			else{
            x = cos(CosTheta*0.0174533);
			Calculation = (magnitude1*magnitude2)*x;
			cout<<"The value of dot product is: "<<Calculation<<"\n";
            }

		}
	break; 
	}
}




int main(){












	return 0;
}