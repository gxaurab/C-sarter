#include <iostream>
using namespace std;
int main(){

int a,b;
cout<<"Enter any two numbers to swap"<<endl;
cin>> a>>b;
swap(a,&b);

cout<<a<<endl<<b<<endl;
    return 0;
}
int swap(int p,int q){
  int temp;
  temp=p;
  p=q;
  q=temp;
}