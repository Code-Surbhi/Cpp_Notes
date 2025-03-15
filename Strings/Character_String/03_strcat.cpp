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
    cout<<"Enter a second string: ";
    cin.getline(str2,50);
    
    //strcat(destination,source)
    strcat(str,str2);
    cout<<"Concatenated string of str and str2 is: "<<str;

}
