#include<iostream>
using namespace std;
//Recursive function - the function that calls itself

void fun(int n)
{
    if(n>0)
    {
        fun(n-1); // calls itself and prints the number in ascending order
        cout<<n<<endl;
        // fun(n-1); //calls itself and prints the number in reverse order 
    }
}
int main()
{
    fun(5);
}