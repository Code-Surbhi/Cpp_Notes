//Sum of factors should be double the number = Perfect number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number you want to check is a perfect number or not";
    cin>>num;
    int n, sum = 0;
    n=num;
    while(n>0){
        if(num%n==0){
            sum = sum + n;
        }
        n--;
    }
    if(sum==2*num){
        cout<<"Number "<<num<<" is a perfect number";
    }
    else{
        cout<<"Number "<<num<<" is not a perfect number";
    }
}
