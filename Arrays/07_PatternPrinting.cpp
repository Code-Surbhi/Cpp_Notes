#include <iostream>
using namespace std;
int main(){
    //LOWER LEFT TRIANGLE
    cout<<"Printing a lower left triangle: "<<endl;
    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if(i>=j){
                cout<<"*";
            }
        }
        cout<<endl;
    }


    //UPPER LEFT TRIANGLE
    cout<<"Printing an upper left triangle: "<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i+j<4){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    //UPPER RIGHT TRIANGLE
    cout<<"Printing an upper right triangle: "<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i>j){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    //LOWER RIGHT TRIANGLE
    cout<<"Printing a lower right triangle: "<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i+j>=3){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}