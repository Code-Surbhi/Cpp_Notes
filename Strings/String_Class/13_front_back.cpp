#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    cout<<"The first letter of the string "<<str<<" is "<<str.front()<<endl;
    cout<<"The first letter of the string "<<str<<" is "<<str.back();

}