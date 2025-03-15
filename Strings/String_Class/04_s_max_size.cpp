#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Input a string: ";
    getline(cin,str);
    cout<<"Size of the string is: "<<str.size()<<endl;
    cout<<"Maximum possible size of the string is: "<<str.max_size();
}