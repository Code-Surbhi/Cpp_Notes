#include<iostream>
using namespace std;

class Rectangle //Class is used for defining Class - It is a user defined datatype
{
    public:
    int length; //Takes 4 bytes of memory
    int breadth; //Takes 4 bytes of memory
    //rectangles - ki property (data) is length and breadth - make them as data members - they take memory space
    int area() {
        return length * breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    //area() and perimeter() are member function - they dont take any memory space
}; //after class ends semicolon is important

int main()
{
    Rectangle r1,r2; //r1 , r2 are objects
    //dot operator is used for accessing the members of this class - r1.length , r2.area etc...
    //By default class mai private chalta hai (because cpp was created for security reasons) but to access it we have to make it public
    r1.length = 10; 
    r1.breadth = 5;
    //r1 ka aise box ban chuka hai (object) in memory with two smaller boxes - one with value of length(4 Bytes) and one with breadth(4 Bytes)
    //r1 box has its own function
    cout<<"The area is: "<<r1.area()<<endl;
    cout<<"The perimeter is: "<<r1.perimeter()<<endl;

    r2.length = 20; 
    r2.breadth = 15;
    //similarly r2 ka aise box ban chuka hai (object) in memory with two smaller boxes - one with value of length(4 Bytes) and one with breadth(4 Bytes)
    //similarly r2 box also has its own function.
    cout<<"The area is: "<<r2.area()<<endl;
    cout<<"The perimeter is: "<<r2.perimeter()<<endl;
}