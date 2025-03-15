#include <iostream>
using namespace std;
int main()
{
    int Stack_Array[5] = {1,2,3,4,5}; // This array is made in stack
    cout<<"The array created in stack is: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<Stack_Array[i]<<" ";
    }
    cout<<endl;

    
    int *p; //This array is made in heap
    p = new int[10]; //new = array created in heap
    cout<<"Enter the heap array: "<<endl;
    for(int i=0;i<10;i++)
    {
        p[i] = i+1;
    }
    
    //here the name of the pointer can be used as the name of the array
    p[2] = 25;
    
    cout<<"The array created in heap is: "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;

    //deleting heap memory
    *p = 0; // This makes the first value of the array as 0 
    delete[] p; // This deletes the array created in heap
    p = NULL;
    //This is important as it creates memory leak if not done right 

    cout<<"The array created in heap is: "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<p[i]<<" ";
    }
    //here there will be no output because the memory in heap has been deallocated 

}