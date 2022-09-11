#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;

class Circle{

public:
int r;
void get_radius(){
    cout<<"Enter the radius of circle"<<endl;
    cin>>r;
};
float Area;
 float get_Area(){
    Area = PI *pow(r,2);
    
    return Area;
};
};

int main(){
  
  Circle result;
  result.get_radius();
  
  cout<<"The area of the circle is" << result.get_Area()<<endl;

    return 0;

}
