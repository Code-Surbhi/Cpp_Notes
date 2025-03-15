// LINEAR SEARCH

#include <iostream>
using namespace std;
int main(){
    int size,key;
    cout<<"Enter length of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are: ";
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<"\nEnter a key element (One which you want to find in the array): ";
    cin>>key;

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }    
    }
    cout<<"Element Not found.";
}