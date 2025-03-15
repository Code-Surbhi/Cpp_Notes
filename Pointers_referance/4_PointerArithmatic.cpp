#include<iostream>
using namespace std;
int main()
{
    int A[5] = {2,4,6,8,10};
    int *p = A;
    int *q = &A[3];

    cout<<"value of address of "<<*p<<" is "<<p<<endl;
    cout<<"Value of address of next index value "<<*++p<<" is "<<p<<endl; //Pointer moves to the next location
    //--p will get back one location
    //p=p+2 will get it moved to next 2 location

    int d=q-p;
    cout<<d<<endl;
    //answer is positive means that in (q-p) pointer q is farther away than p
    int dif=p-q;
    cout<<dif<<endl;
    //answer is negative means that in (q-p) pointer q is closer than p
    //206-200 -> 6/2 (devide by the size of the datatype between them) -> and the answer means that its that much blocks away from them.

    cout<<p[+2]; // this moved upto 2 places from the point where pointer p was

    int Arr[6]={1,2,3,4,5,6};
    int *ptr = Arr;
    cout<<"Value of Array: "<<endl;
    for(int i=0;i<6;i++)
    {
        //this prints the value of array 
        cout<<*(ptr+i)<<endl;
    } 

    cout<<"Address of array: "<<endl;
    for(int i=0;i<6;i++)
    {
        //this prints the address of array 
        cout<<(ptr+i)<<endl;
    }
}