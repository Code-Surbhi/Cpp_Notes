#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number you want to find the sum of first natural numbers to: ";
    cin>>num;
    int sum = (num*(num+1))/2;
    cout<<"Sum of first natural "<<sum<<" numbers is: "<<sum;
}