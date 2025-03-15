#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    string::reverse_iterator it;
    for(it=str.rbegin();it!=str.rend();it++)
    {
        cout<<*it;
    }

}
