#include<iostream>
using namespace std;

class Test{
    public:
        int a;
        int *p;

    Test(int x){
        a=x;
        p = new int[a];
        cout<<"Parameterised Constructor"<<endl;
    }

    Test(Test &t){
        cout<<"Copy constructor"<<endl;
        a=t.a;
        //p=t.p;
        p = new int[a];
    }
};

int main(){
    Test t1(10);
    Test t2(t1);
}