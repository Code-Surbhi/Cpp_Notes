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
    Rectangle r;
    Rectangle *ptr;
    ptr = &r;
    //Dot operator is used for accessing the members of an object using variable name
    // r.length = 10; 
    //Arrow operator (also c/a caps) is used for accessing the members of an object using pointer on object
    ptr -> length = 10; //ptr's length assign 10 

    ptr -> breadth = 20;
    cout<<"Area of the rectangle is: "<<ptr->area()<<endl;
    cout<<"Perimeter of the rectangle is: "<<ptr->perimeter()<<endl;
}