#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //using character array
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    cout<<"String you input is: "<<str<<endl;

    char str2[100];
    cout<<"Enter a second string : ";
    cin.getline(str2,100);
    cout<<"Your second string is: "<<str2<<endl;

    int num;
    cout<<"Enter a number of characters you want of second string to be added in the first: ";
    cin>>num;

    // strcat(destination, source, length) -> length : it is how many charaters you want of the source string to be concatenated in the destination string
    strncat(str,str2,num);
    cout<<"\nThe concatenated string is : "<<str;
}