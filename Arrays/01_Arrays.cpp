/*
    Sacalar -> x = 5
    Vector / list -> A = (5,6,7,8,9)

    int x -> 2 bytes of memory and address
    200/201

    int A[10] -> Total 20 bytes of memory it takes
    cout<<A; -> does not print the entire array

    int A[5] = {1,2,3,4,5}
    float B[5] = {1.2,3.5} -> can be less than the size of the array specified -> first 2 indexes pe uski value aajayegi and rest pe 0 fill hojayega till the specified space
    cant be more than the size of the array -> an array is displayed
    char C[5] = {'a','b','c','d','e'}

    int arr[] = {1,2,3,4,5}
    dont give any specified value it will take the value of the array according to the initialisation
*/

#include <iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4,5,6,7};
    // Using for each loop 
    for (int x:A) //-> each element of A will be taken into x
    {
        cout<<x<<endl;
        // Here x is an element itself
        // x will get a copy of each element -> if it modifies here in the for each block (x++ or something like that) -> the original value of the array wont change because it recieves a copy and not an actual value -> hence the copy of the calue gets modified and not the actual value 
    }
    
    // Using for each loop
    float Arr[]={1.3f,5.6f,6,7,8,9};
    for(auto x:Arr){ //-> auto means that the datatype will automatically be taken into consideration
        cout<<x<<endl;
    }

    // Using for each loop -> using referance 
    int Arr1[] ={1,2,3,4,5,6,7};
    for(auto &x:Arr1){ //-> & means it is the referance to the variable 
        // here if we make changes -> the original value will get modified -> hence the array will get modified as no copy is passed here but the actual value to x
        x++;
        cout<<x<<endl;
    }

    // Using for loop
    for(int i=0;i<6;i++){
        cout<<Arr[i]<<endl;
    }

    /*
        In Arrays Size should be mentioned and if not it should atleast be initialised

        int A[]; X -> this is wrong 
        int A[] = {1,2,3,4,5,6,7}; -> OK
        int A[10]; -> OK
        int A[10] = {1,2,3,4,5,6} -> OK
    */

}

    
