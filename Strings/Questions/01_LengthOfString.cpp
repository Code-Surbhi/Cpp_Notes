#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    //through function
    cout<<"The length of the string is: "<<str.length()<<endl;

    //through loop
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"Length of the string is: "<<count<<endl;

    //through iterator
    string::iterator it;
    int icount=0;
    for(it=str.begin();it!=str.end();it++)
    {
        icount++;
    }
    cout<<"Length of the string is: "<<icount<<endl;
}
