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
    cout<<"Enter second string: ";
    cin.getline(str2,20);

    /*
        strstr(main,sub) -> for finding the substring -> it gives the portion of the string after the value is found out -> including the substring
        if not found -> error is displayed -> hence use if-else conditions
    */
    if(strstr(str,str2)!=NULL){
        cout<<strstr(str,str2);
    }
    else{
        cout<<"No match found";
    }
}