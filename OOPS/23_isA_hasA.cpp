#include<iostream>
using namespace std;

class Rectangle{

};
//If a class is inheriting from another class it -> "isA" Relationship
//The relation between cuboid and a rectangle is "isA" Relationship (Cuboid isA Rectangle)
class Cuboid: public Rectangle{
    
};

class Table{
    Rectangle top;
    //If a class has an object of a Class it has "hasA" relationship with them 
    int legs;
};

int main(){

}