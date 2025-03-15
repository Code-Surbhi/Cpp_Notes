#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Input a string: ";
    getline(cin,str);
    cout<<"Size of the string is: "<<str.size()<<endl;
    cout<<"Resize the string: "<<endl;
    cout<<"Enter a new size of the string: ";
    int num;
    cin>>num;
    str.resize(num);
    cout<<"Now the new size of the string is: "<<str.size();
}