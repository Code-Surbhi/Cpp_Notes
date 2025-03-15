#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //using character array
    char str[20];
    cout<<"Enter a string: ";
    cin.getline(str,20);
    cout<<"String you input is: "<<str<<endl;

    char str2[20];
    int num;
    cout<<"Enter the number of letters of first string you want to be coppied in the second one";
    cin>>num;

    // strncpy(detination , source , length)
    strncpy(str2,str,num);
    cout<<"\nThe second string now is : "<<str2;
}