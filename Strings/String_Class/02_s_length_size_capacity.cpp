#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"The length of the string is: "<<str.length()<<endl;
    cout<<"The size of the string is: "<<str.size()<<endl;
    //The capacity of the string is always more than the length of the array
    cout<<"The capacity of the string is: "<<str.capacity()<<endl;
    
}
