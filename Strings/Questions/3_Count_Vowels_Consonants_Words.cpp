#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    int v = 0, c = 0, space = 0;
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        if(*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u' || *it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U')
        {
            v++;
        }
        else if(*it == ' ')
        {
            space++;
        }
        else
        {
            c++;
        }
    }
    cout<<"Number of vowels is: "<<v<<endl;
    cout<<"Number of words is: "<<space+1<<endl;
    cout<<"Number of consonants is: "<<c;
}