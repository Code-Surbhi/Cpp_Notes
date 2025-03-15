#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter string one: "<<endl;
    cin.getline(str,20);

    char str2[20];
    cout<<"Enter string two: "<<endl;
    cin.getline(str2,20);

    /*
        strcmp(str1,str2) -> compares two strings in dictionary/alphabetically order and returns positive, negative or zero
        if 1st string comes first => negative return
        if 1st string comes later => positive return 
        if equal => returns zero
    */
    if(strcmp(str,str2)>0){
        cout<<"String one is greater then second one";
    }
    else if(strcmp(str,str2)==0){
        cout<<"Both strings are equal";
    }
    else{
        cout<<"String two is greater then first one";
    }


}