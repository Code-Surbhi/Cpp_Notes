#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    //Constructor functions
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    //Mutator - Set Functions
    void setLength(int l);
    void setBreadth(int b);
    //Accessor - Get Functions
    int getLength();
    int getBreadth();
    //Facilitator Functions - the ones that are actually useful for rectangle class
    int area();
    int perimeter();
    //Inspector method or inquiring - check is square or not
    bool isSquare();
    //Destructor function
    ~Rectangle();
};