#include<iostream>
using namespace std;
int main()
{
    //Referance - alias / nickname 
    int x = 10;
    int &y = x; // y is a reference to x
    //referance must be initialised at that time only

    cout<<x<<endl;
    cout<<y<<endl;
    //both will give the same output

    x = 25; //even on reinitialising 

    cout<<x<<endl;
    cout<<y<<endl;
    //both will give the same output

    int a = 20;
    // int &y = a;

    cout<<a<<endl;
    // cout<<y<<endl; 
    // THIS WILL GIVE AN ERROR BECAUSE ONCE A REFERANCE (y) IS USED ANYWHERE - IT CANT BE USED ANYWHERE ELSE -> once a referance is created it cant be changed at all.
    // THIS IS BECAUSE REFERANCE IS ALIAS OF THE ORIGINAL VARIABLE

    int q = 10;
    int &w = q;
    cout<<q<<endl;
    q++;
    w++;
    cout<<q<<endl;
    //the value of q will come up to be 12 because q and w will take up same and not seperate memory
    cout<<&q<<" "<<&w<<endl; // this will give the same address , because as its a nickname of it , it doesnt take up seperate / extra memory
}