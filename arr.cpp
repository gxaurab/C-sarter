#include <iostream>
using namespace std;
int main(){

int arr[5];
cout<<"Enter the marks respectively"<<endl;
int i;
for(i=0;i<5;i++){
    cin>>arr[i];
}
for(i=0;i<5;i++){
    cout<<"The marks are"<<arr[i]<<endl;
}


    return 0;
}