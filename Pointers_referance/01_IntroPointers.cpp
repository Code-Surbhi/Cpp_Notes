//Two types of variables 
//1. Data variables - stores data
//2. Address variables - stores address of other variable 

//& - address operator
//* - value at address 

//Program can directly access only code section and stack but not heap 
//Heap memory - access dynamically (through pointers) - size of memory is allocated at runtime and not compiletime
#include <iostream>
using namespace std;
int main() 
{
    int x;
    cout<<"Enter a value of x: "<<endl;
    cin>>x;
    int *p;
    p = &x; //p stores address of x

    cout<<"Value of variable is: "<<x<<endl;
    cout<<"Address of x is: "<<&x<<endl;
    cout<<"The value of pointer (address of the variable is): "<<p<<endl;
    cout<<"The address of the pointer is: "<<&p<<endl;
    cout<<"Deferancing is happening here (The pointer is leading to the value of variable - the one you input): "<<*p<<endl;

}

//Stack memory - the declared variable gets deleted from memory if gone out of scope
//Heap memory - the variable allocated to heap memory stays there till its dealocated or till the program stays in memory its there
