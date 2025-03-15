#include<iostream>
using namespace std;
//Global variable - outside of all the functions (accessible to all the functions of the program)- they are allocated in code section
//They are in the memory as long as the program runs
int g = 10;
void fun()
{
    int a = 5;
    //Local variable - inside the function (accessible only to the function they are allocated in)
    //Allocates/Deallocates when the function ends scope
    g = g + a ;
    cout<<g<<endl;
}
int main()
{   
    g = 15;
    fun();
    g++;
    cout<<g;
}

//The compiler will look for the declaration of the variable in the nearest scope 
//Hence in the folowing code the global value is not changed and the local variable is changed

/*
#include <iostream>
using namespace std;
int g = 5;
void fun()
{
    int g = 10; //this gets ++ not the global variable
    g++;
}
int main() 
{
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
}
*/

//The output here will be 5 , 5 