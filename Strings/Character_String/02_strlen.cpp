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

    // While giving the output it ignores the string terminator at the end of the string (\0)
    cout<<"Length of the string is: "<<strlen(str);
}