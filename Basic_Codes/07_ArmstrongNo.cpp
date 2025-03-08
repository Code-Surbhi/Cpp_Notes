#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number for which you want to check its an armstrong number or not: ";
    cin>>num;
    int n , r , sum = 0;
    n = num;
    while(n>0){
        r = n%10;
        n = n/10;
        sum = sum + (r*r*r);
    }
    if(sum==num){
        cout<<"The number is an armstrong number";
    }
    else{
        cout<<"Not an armstrong number";
    }
}