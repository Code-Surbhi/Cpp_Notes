#include<iostream>
using namespace std;
int main(){
    /*
        int Arr[3][4];
        the array Arr has 3 rows and 4 columns -> each block as 2/4 bytes size 
        while printing the 2D array seems like a matrix / grid but the compiler stores the 2D array just like a regular array
    */
   int Arr[2][3] ={{2,5,9},{6,9,1}};
   int Arr2[2][3] ={1,2,3,4,5,6};
   int Arr3[2][3] ={2,5};
   int SumArray[2][3];

   cout<<"Matrix A = "<<endl;
   for(int i=0; i<2 ;i++){
    for(int j=0;j<3;j++){
        cout<<Arr[i][j]<<" ";
    }
    cout<<endl;
    }

    cout<<"Matrix A = "<<endl;
    for(int i=0; i<2 ;i++){
        for(int j=0;j<3;j++){
            cout<<Arr2[i][j]<<" ";
        }
    cout<<endl;
    }

    cout<<"LETS ADD TWO MATRICES: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            SumArray[i][j]=Arr[i][j]+Arr2[i][j];
        }
    }
    for(int i=0; i<2 ;i++){
        for(int j=0;j<3;j++){
            cout<<SumArray[i][j]<<" ";
        }
    cout<<endl;
    }

}