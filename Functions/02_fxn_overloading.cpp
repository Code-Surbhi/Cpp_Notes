#include<iostream>
using namespace std;
//Same name of the function with diffrent parameter list
int add(int a , int b)
{
    return a+b;
}

int add(int a , int b , int c)
{
    return a+b+c;
}
//here both the functions have same name , same return type but diffrent parameter list
/*
if i write here a function such as
float add(float a , float b)
{
    return a+b;
}
This is not function overloading , this is redefining the same function "add" again
*/
int main()
{
    int x , y , z;
    cout<<"Enter the values of x and y you want to add: "<<endl;
    cin>>x>>y;
    cout<<"The sum of "<<x<<" and "<<y<<" is "<<add(x,y)<<endl;
    
    cout<<"Enter the values of x , y and z you want to add: "<<endl;
    cin>>x>>y>>z;
    cout<<"The sum of "<<x<<" , "<<y<<" and "<<z<<" is "<<add(x,y,z)<<endl;
}