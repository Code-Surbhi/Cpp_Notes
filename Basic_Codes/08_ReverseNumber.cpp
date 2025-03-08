#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number you want to reverse: ";
    cin>>num;
    int r , n , rev = 0;
    n = num;
    while (n>0){
        r = n%10;
        n = n/10;
        rev = rev *10 + r;
    }
    cout<<"The reverse of "<<num<<" is "<<rev;  
}