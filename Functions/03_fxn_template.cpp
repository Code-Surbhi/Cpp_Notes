#include<iostream>
using namespace std;
//Using function template for generic functions
template <class T>
//data types must be same for template function
T maximum(T x, T y)
{
    if(x>y)
    return x;
    else
    return y;

    //we can also use ternary operator here such as : return a>b?a:b
}
int main()
{
    cout<<"Enter integer values of which you wanna fund out max value: "<<endl;
    int a, b;
    cout<<"Enter first integer value: "<<endl;
    cin>>a;
    cout<<"Enter second integer value: "<<endl;
    cin>>b;
    int c = maximum(a,b);
    cout<<"Max value of "<<a<<" and "<<b<<" is: "<<c<<endl;

    cout<<"Enter float values of which you wanna fund out max value: "<<endl;
    float q, w;
    cout<<"Enter first float value: "<<endl;
    cin>>q;
    cout<<"Enter second float value: "<<endl;
    cin>>w;
    float d = maximum(q,w);
    cout<<"Max value of "<<q<<" and "<<w<<" is: "<<d<<endl;
}