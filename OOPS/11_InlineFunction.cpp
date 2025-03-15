#include<iostream>
using namespace std;

//Inline functions - Functions that expand in the same line they are called

class Test{
    public:
    void fun1(){
        cout<<"INLINE"<<endl;
    }
    void fun2();
    void fun3();
};
//declaring the function inside the class and then defining it outside makes it non inline function
void Test::fun2(){
    cout<<"NON INLINE"<<endl;
}
//we can declare the function inside the class and to make it inline we can define it outside and write inline keyword
inline void Test::fun3(){
    cout<<"INLINE"<<endl;
    cout<<"Although written outside, its inline only"<<endl;
}

int main()
{
    Test t;
    t.fun1(); //INLINE
    t.fun2(); //NON INLINE
    t.fun3(); //INLINE
}