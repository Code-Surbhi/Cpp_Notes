#include<iostream>
using namespace std;
int main(){
    int n , num , rev = 0 , r;
    cout<<"Enter a number you want to check is palindrome or not: ";
    cin>>num;
    n = num;
    while(n>0){
        r = n%10;
        n = n/10;
        rev = rev*10+r;
    }
    if(rev==num){
        cout<<"The number is palindrome";
    }
    else{
        cout<<"The number is not a palindrome";
    }
}