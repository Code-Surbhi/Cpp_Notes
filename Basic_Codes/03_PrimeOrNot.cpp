#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number you want to check is a prime number or not: ";
    cin>>num;
    int n , count=0;
    n=num;
    while(n>0){
        if(num%n==0){
            count++;
        }
        n--; 
    }
    if(count==2){
        cout<<num<<" is a prime number";
    }
    else{
        cout<<num<<" is not a prime number";
    }
}