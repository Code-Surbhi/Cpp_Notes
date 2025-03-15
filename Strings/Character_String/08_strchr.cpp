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

    cout<<"Enter the letter you want to find out in the main string: ";
    char ch;
    cin>>ch;

    // strchr(main, char) -> finds charater in the main string -> and returns the character and rest of the string after it if its found
    // else -> returns error
    if(strchr(str,ch)!=NULL){
        cout<<"The letter "<<ch<<" is found in the string: "<<strchr(str,ch);
    }
    else{
        cout<<"Not found";
    }

}