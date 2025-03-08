#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter two numbers you want to find the GCD of: ";
    cin>>num1>>num2;
    cout<<"The GCD of "<<num1<<" and "<<num2<<" is ";
    while(num1!=num2){
        if(num1<num2){
            num2 = num2-num1;
        }
        else if(num1>num2){
            num1 = num1-num2;
        }
    }
    cout<<num1;
}