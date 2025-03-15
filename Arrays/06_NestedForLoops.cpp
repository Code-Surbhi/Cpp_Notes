#include <iostream>
using namespace std;
int main(){
    //outer loop if for traversing the row and the inner loop is for traversing the column

    //print a sqaure grid with 16 values
    int count = 1;
    for (int i=0;i<=3;i++){
        for (int j=0;j<=3;j++){
            cout<<count<<" ";
            count++;
        }
    cout<<endl;
    }
}