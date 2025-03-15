#include <iostream>
using namespace std;

int x = 10;

int main()
{
    int x = 20;
    {
        int x = 30;
        cout << x << endl; //answer - 30 as it looks for the variable nearest to scope
    }
    cout<<x<<endl; // answer - 20
    cout<<::x<<endl; // answer - 10 (:: is a symbol of accessing the global scope)
}