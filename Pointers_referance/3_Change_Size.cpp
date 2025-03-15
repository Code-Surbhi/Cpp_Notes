#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of Stack array: ";
    cin>>size;
    int Stack_Array[size];
    cout<<"Size allocated to the array in memory is: "<<sizeof Stack_Array<<endl;
    //sizeof function is used to return the size of its operand in bytes
    
    cout<<"Enter new size: ";
    cin>>size;
    Stack_Array[size];
    cout<<"NEW Size allocated to the array in memory is: "<<sizeof Stack_Array<<endl;
    //If you look here the size of the array didnt change on even reassigning the value of the variable size because this array is created in stack
    //Array created in stack cant change size once declared - to do so create the array in heap 

    int size2;
    cout<<"Enter the size of Heap array: ";
    cin>>size2;
    int *pointer_HeapArray = new int[size2];   
    
    //so as to not create a memory leak problem
    delete[] pointer_HeapArray;

    cout<<"Enter new size: ";
    cin>>size2;
    pointer_HeapArray = new int[size2];
    //Here the array in heap is resized

}