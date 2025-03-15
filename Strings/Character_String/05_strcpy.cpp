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

    char str2[50];
    // strcpy(destination,source) -> copies string 
    strcpy(str2,str);
    cout<<"Without inputting the second string in the program , the value of the second string is same as first string : "<<str2;
}