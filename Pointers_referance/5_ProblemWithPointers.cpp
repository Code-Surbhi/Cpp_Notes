#include<iostream>
using namespace std;
int main()
{
    //1. uninitialised pointers - pointer was never initialised 
    /*
    2. Memory leak - when you dont dealocate it
       Pointer is gone now but the memory still remains somewhere
       Soln ( first delete the memory by releasing the pointer and then delete the pointer)
       Eg - 
       int *p = new int[5];
       delete[] p; // delete the memory
       p = NULL;
    */
    //3. Dangling pointers - pointer was initialised but the memory is deallocated now
    
    
}