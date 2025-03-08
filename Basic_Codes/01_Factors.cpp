#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number you want to find the factor of: ";
    cin>>num;
    int n=num;
    cout<<"The factors of number "<<num<<" are: ";
    while(n>0){
        if(num%n==0){
            cout<<n<<" ";
        }
        n--;
    }
}
