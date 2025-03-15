#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string one: ";
    getline(cin,str);
    string str2;
    cout<<"Enter a string two: ";
    getline(cin,str2);
    cout<<"On comapring the strings we get: "<<endl;
    if(str.compare(str2)==0)
    {
        cout<<"The strings are equal";
    }
    else if(str.compare(str2)>0)
    {
        cout<<"The first string is greater than the second string";
    }
    else
    {
        cout<<"The first string is smaller than the second string";
    }
}