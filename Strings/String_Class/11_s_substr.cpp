#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"Enter the number of letters you want from the string you entered: "<<endl;
    int num;
    cin>>num;
    cout<<"Output: "<<str.substr(num)<<endl;
   
    cout<<"Output: "<<str.substr(1,4)<<endl;
}