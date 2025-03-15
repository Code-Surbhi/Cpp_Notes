#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str, temp_str;
    cout<<"Enter a string: (with or without number) ";
    getline(cin,str);
    temp_str=str;
    //through loop
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    cout<<"The converted string from Uppercase "<<temp_str<<" to lowercase is: "<<str<<endl;

    //through iterator
    string::iterator it;
    int icount=0;
    for(it=str.begin();it!=str.end();it++)
    {
        if(*it>=97 && *it<=122)
        {
            *it=*it-32;
        }
    }
    cout<<"The converted string from Lowercase "<<temp_str<<" to Uppercase is: "<<str<<endl;
}