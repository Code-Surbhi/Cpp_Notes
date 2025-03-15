#include<iostream>
using namespace std;
//return_type function_name (parameter_list)
//return_type - can return atmost 1 value or can return nothing(void)
//parameter_list - can be many in number
void display()
{
    cout<<"This is a display function call"<<endl;
}
int add(int x, int y)
{
    int z;
    z=x+y;
    return z;
}
int main()
{
    cout<<"Lets call the display function."<<endl;
    //when the function is called the memory is allocated to the function
    display();
    //When the function ends , the memory is free from the stack
    cout<<"Lets call the add function."<<endl;
    cout<<"Enter two numbbers you want to add: "<<endl;
    int a , b;
    cin>>a>>b;
    int c = add(a,b);
    cout<<"The sum of two numbers "<<a<<" and "<<b<<" is: "<<c;
}
