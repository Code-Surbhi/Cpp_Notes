#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[20] = {"237.912391"};
    cout<<str<<endl;
    // strtof(str,NULL) -> this converts the string to float number 
    cout<<strtof(str,NULL)<<endl;

    char str2[30] = {"237.80"};
    cout<<str2<<endl;
    // strtol(str,NULL,base_of_numbersystem) -> this converts the string to long integer
    cout<<strtol(str,NULL,10)<<endl;

    char s1[10] = "235";
    char s2[20] = "454.78";
    long int x = strtol(s1,NULL,10);
    float y = strtof(s2,NULL);

    cout<<x+10<<endl<<y-5<<endl;
}