#include<iostream>
using namespace std;
#include <climits> 
//INT_MIN and INT_MAX are available constants present in the header file <climits>

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int max = INT_MIN; //Here we can use int max = 0 also but INT_MIN and MAX includes negative, 0 and the positive numbers as well
    for(auto x:arr){
        if(x>max){
            max=x;
        }
    }
    cout<<"Maximum value in the array is: "<<max;

}