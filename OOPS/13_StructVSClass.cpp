#include<iostream>
using namespace std;

//Struct and Class both are same as it is in C++ but in Struct - everything is public by default and in Class - everything is private.
struct Demo
{
    int x;
    int y;
    //in C language where structure is also present , we cant have function but only data member => in C++ we can have both
    void display()
    {
        cout<<x<<" and "<<y<<endl;
    }
};

int main(){
    Demo d;
    d.x = 10;
    d.y = 20;
    d.display();
}
