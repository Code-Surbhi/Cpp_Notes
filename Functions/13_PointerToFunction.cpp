#include<iostream>
using namespace std;
void display()
{
    cout<<"Hello , Function is called"<<endl;
}

int main()
{
    void (*fp)();  //DECLARATION -> void (pointer to a function in brackets)(paramenters in other bracket)
    fp = display; //INITIALISATION -> assiging a name of the function to the pointer -> address of the function will be stored in the pointer
    cout<<"Calling a function"<<endl;
    (*fp)(); //Calling the function
}