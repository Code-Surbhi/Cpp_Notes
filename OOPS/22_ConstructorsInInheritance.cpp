#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Default constructor of Base class"<<endl;
    }
    Base(int x){
        cout<<"Parameterized constructor of Base class "<<x<<endl;
    }
};

class Derived : public Base{
    public:
    Derived(){
        cout<<"Default constructor of Derived class"<<endl;
    }
    Derived(int a){
        cout<<"Parameterized constructor of Derived class "<<a<<endl;
    }
    Derived(int x,int a):Base(x){
        cout<<"Parameterized constructor of Derived class "<<a<<endl;
    }
};

//First the constructor of parent class is executed and then of the child class 

int main(){
    Derived d;
    /*Output -
        Default constructor of Base class
        Default constructor of Derived class
    */
    Derived d1(10);
    /*Output -
        Default constructor of Base class
        Parameterized constructor of Derived class 10
    */
    Derived d2(10,20);
    /*Output-
        Parameterized constructor of Base class 10
        Parameterized constructor of Derived class 20   
    */
}