#include<iostream>
using namespace std;
#include <climits> 

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int min = INT_MAX; 
    for(auto x:arr){
        if(x<min){
            min=x;
        }
    }
    cout<<"Minimum value in the array is: "<<min;
}