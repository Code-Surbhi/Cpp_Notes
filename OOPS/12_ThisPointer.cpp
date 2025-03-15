#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
    //This pointer is used for removing the ambiguity in between the parameters of the function with the data member of a class to refer to the data member of the class of the current object
        Rectangle(int length, int breadth){
            this->length = length;
            this->breadth = breadth;
            //this -> (name of data member) = (name of parameter)
        }
};