#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"Your string is: "<<str<<endl;

    cout<<"Now we append 'Nice to meet you' at the end of your string: "<<endl;
    str.append(" Nice to meet you");
    cout<<"Your new string is: \n"<<str<<endl;

    str.insert(3,"Apple");
    cout<<"Your new string is: "<<str<<endl;

    str.insert(3,"Apple",2);
    cout<<"Your new string is: "<<str<<endl;

    str.replace(3,5,"OK");
    cout<<"Your new string is: "<<str<<endl;

    str.push_back('z');
    cout<<"Your new string is: "<<str<<endl;

    str.pop_back();
    cout<<"Your new string is: "<<str<<endl;

    string str1;
    str.swap(str1);
    cout<<str1;

    //s.erase() - same as clear

}