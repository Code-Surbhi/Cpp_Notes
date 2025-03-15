#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter first string: ";
    getline(cin,str);
    string str2;
    cout<<"Enter second string: ";
    getline(cin,str2);
    cout<<"Concatenated string is : "<<str+str2<<endl;
    
}