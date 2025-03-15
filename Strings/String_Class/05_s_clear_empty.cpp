#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Input a string: ";
    getline(cin,str);
    cout<<"Size of the string is: "<<str.size()<<endl;
    str.clear();
    cout<<"Clearning the string gives us: "<<str;
    int emp = str.empty();
    if(emp==true)
    {
        cout<<"The string is empty.";
    }
    else
    {
        cout<<"The string is not empty";
    }
}