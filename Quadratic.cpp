#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a,b,c;
cout<<"Enter the values of a b c of equation ax^2 + bx + c"<<endl;
cin>> a>>b>>c;

float p;
p= sqrt(pow(b,2) - 4*a*c );
float q;
q= (-b + p )/2*a ;
float r;
r = (-b-p)/2*a ;

cout<<"The roots are "<< q <<"\n"<< r<<endl;


    return 0;
}