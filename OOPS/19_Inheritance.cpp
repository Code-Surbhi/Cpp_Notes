/*
    Inheritance means - acquiring the features of an existing class to the new class (deriving the features of a new class from existing class)

    Car(design) -> Object
    Car(New Design) -> Object
    //But instead of creating a new design we can extend the existing features and add a new features and voila

    _________
   |  BASE   |
   |_________|
        ^
        |     We have an array towards the parent class
    ____|____
   | DERIVED |
   |_________|
*/

/*
    class Rectangle{
        length;
        breadth;
        ----
        ----
    };
    We need a new class where the Rectangle class has an added height - making it a cuboid

    class Cuboid : Rectangle{
        //The class cuboid is derived from the class Rectangle
    };

    int main(){
        Rectangle r1,r2;
        Cuboid c1,c2;
    }
*/
#include<iostream>
using namespace std;

    class Base{
        public:
            int x;
            void Show(){
                cout<<x<<endl;
            }
    };

    class Derived : public Base{
        public:
            int y;
            void display(){
                cout<<x<<" and "<<y<<endl;
            }
    };

    int main(){
        Base b;
        b.x = 25;
        b.Show(); //Output - 25

        Derived d;
        d.x = 10;
        d.y = 20;
        d.Show(); //OUTPUT - 10
        d.display(); // Output - 10 and 20

    }
