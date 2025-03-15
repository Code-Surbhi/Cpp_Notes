#include<iostream>
using namespace std;

//parameters here in function are called "Formal Parameters"
//in call by referance - referance is a nickname of the variable ; actual parameteres are changed
//call by referance is also callled as "Inline function"!

void swap(int &a , int &b)
{
    cout<<"Now in SWAP function: "<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"END OF SWAP FUNCTION"<<endl;
}

//in call by referance , does not generate seperate piece of machine code for main and swap fxn

int main()
{
    cout<<"Enter 2 values you want to swap :"<<endl;
    //Parameters that actually go in the function are called "Actual Parameters"
    int x , y;
    cout<<"Enter 1st value : "<<endl;
    cin>>x;
    cout<<"Enter 2nd value : "<<endl;
    cin>>y;
    swap(x,y);
    cout<<"Now in MAIN function: "<<endl;
    cout<<"Now the 1st value is "<<x<<" and the second value is "<<y<<endl;

}