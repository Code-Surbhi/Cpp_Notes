#include<iostream>
using namespace std;
//we make arguments from right to left as initialised to 0 so as to substitute the work of overloaded functions
int add(int a , int b , int c = 0)
{
    return a+b+c;
}
int maximum(int a , int b , int c = 0)
{
    return a>b && a>c ? a : (b>c?b:c);
}
int main()
{
    cout<<"Enter 2 numbers you want to add: ";
    int x , y , z ; 
    cin>>x>>y;
    cout<<"The sum of "<<x<<" and "<<y<<" is "<<add(x,y)<<endl;

    cout<<"Enter the 3rd number you want to add in above numbers: ";
    cin>>z;
    cout<<"The sum of "<<x<<" , "<<y<<" and "<<z<<" is "<<add(x,y,z)<<endl;

    cout<<"Enter numbers you want to find the maximum of: "<<endl;
    int q , w , e , t;
    cin>>q>>w;
    cout<<"Enter 1 if you want to check with a 3rd number and 0 if you dont: "<<endl;
    cin>>e;
    if(e==1)
    {
        cout<<"Enter the 3rd number: "<<endl;
        cin>>t;
        cout<<"Maximum of all numbers is: "<<maximum(q,w,t);

    }
    else
    {
        cout<<"Maximum of all numbers is: "<<maximum(q,w);
    }

}