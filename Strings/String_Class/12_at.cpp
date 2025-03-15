#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"Enter the letter you want at a particular index: "<<endl;
    int num;
    cin>>num;
    cout<<"The letter at the index "<<num<<" of the string "<<str<<" is "<<str.at(num);
}