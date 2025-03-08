#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number you want to display the digits of : ";
    int num;
    cin>>num;
    int n = num , r ;
    while(n>0){
        r = n % 10;
        n= n/10;
        cout<<r<<endl; 
    }
}