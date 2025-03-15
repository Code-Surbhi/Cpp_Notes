// BINARY SEARCH -> it is performed on sorted array
// Time Complexity -> O(log n) -> this is faster

#include <iostream>
using namespace std;
int main(){
    int size,key;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array 'In a sorted manner': ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched: ";
    cin>>key;
    int low=0,high=size-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"Element is present at index "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"Element is not present in the array"<<endl;
}
