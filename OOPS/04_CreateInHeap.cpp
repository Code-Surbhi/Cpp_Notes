#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    //every pointer takes 2 bytes only (or 4 according to compiler)
    Rectangle *p;
    p = new Rectangle();
    Rectangle *q = new Rectangle();

    p->length = 15;
    p->breadth = 10;
    cout<<p->area();
}