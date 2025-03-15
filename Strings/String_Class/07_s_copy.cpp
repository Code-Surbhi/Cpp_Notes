#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "Welcome";
    char str[10];
    s.copy(str,s.length());
    str[s.length()]='\0';
    cout<<s<<endl;
    cout<<str<<endl;
}