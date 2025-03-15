#include <iostream>
using namespace std;

int maximum(int x , int y)
{
    int z =  x>y?x:y;
    cout<<"Max is : "<<z<<endl;
}

int min( int x , int y)
{
    int z = x<y?x:y;
    cout<<"Min is: "<<z<<endl;
}

int main()
{
    int (*fp)(int , int);
    fp = maximum;
    (*fp)(10,5); //Maximum is called

    fp = min;
    (*fp)(10,5); //Min is called
    //In function overwriting internally function pointers are used for achieving runtime polymorphism using function overwriting
}