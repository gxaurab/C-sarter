#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    int Area;
    int perimeter;
    
    public:
    Rectangle (int x, int y){
        this-> length = x;
        this-> breadth = y;
    
    }
    int get_Area(){
        Area = length *breadth;
        return Area;
    }
    int get_Perimeter(){
        perimeter = 2*(length + breadth);
        return perimeter;
    }

};
int main(){
Rectangle R1(2,4);

cout<<"The Area is"<<""<< R1.get_Area()<<"Perimeter is"<<R1.get_Perimeter() <<endl;

    return 0;
}
