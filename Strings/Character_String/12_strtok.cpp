#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // char str[40] = {"x=20;y=30;z=10"};
    // Key value pair ^
    // cout<<strtok(str,"=;");
    char str[20];
    cout<<"Enter a tokenized string";
    cin.getline(str,20);
    cout<<str<<endl;

    // strtok(str,"=?") -> give "=?" or any token in any order
    char * token = strtok(str,";");
    while(token != NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL,";");
    }
}