#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: "<<endl;
    getline(cin,str);
    cout<<"Your string is : "<<str<<endl;
    cout<<"Enter a sub-string/charater you want to find in the string: ";
    string str1;
    getline(cin,str1);
    cout<<str.find(str1)<<endl;
    cout<<str.rfind(str1)<<endl; // find from the right side
}