#include<iostream>
using namespace std;
//parameters here in function are called "Formal Parameters"
void swap(int a , int b)
{
    cout<<"Now in SWAP function: "<<endl;
    cout<<"1st Value is: "<<a<<endl;
    cout<<"2nd Value is: "<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"After SWAP function: "<<endl;
    cout<<"1st Value is: "<<a<<endl;
    cout<<"2nd Value is: "<<b<<endl;
    cout<<"END OF SWAP FUNCTION"<<endl;
}
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
    cout<<"No change here";
    //on running the code you will notice the values dont change , this is because changes made in formal paramaters dont reflect here in actual parameters
}
