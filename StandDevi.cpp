#include <iostream>
#include <math.h>
using namespace std;
int main(){

int i;
float mean,z;
float x=0,k =0;
float a[10];
float SD;

cout<<"enter 10 values";
for(i=0;i<10;i++){

    cin>>a[i];
}

for(i=0;i<10;i++){

   k = k+a[i] ;
}
mean = (k/10);

for(i=0;i<10;i++){

x = x+ pow((a[i] - mean),2);
}

z = x/9;

SD = sqrt(z);
cout<<"The Standard Deviation is therefore"<<endl<< SD;




  return 0;
}
