#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    string str2;
    int length = str.length();
    str2.resize(length);
    for(int i=0 , j = length-1 ; i< length ; i++,j--)
    {
        str2[j]=str[i];
    }
    str2[length]='\0';
    if(str.compare(str2)==0)
    {
        cout<<"The string "<<str<<" and "<<str2<<" is a palindrome."<<endl;
    }
    else
    {
        cout<<"Not a palindrome"<<endl;
    }
} 