#include<iostream>
using namespace std;
/*
    complex number
    a+ib; (real+i(imaginary))
    i = sqrt(-1)

    c1 = 5+7i
    c2 = 2+9i
    c3 = 7+16i (c3=c1+c2)
*/

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r = 0, int i = 0){
        real = r;
        img = i;
    };
    Complex add(Complex x){ //Complex Operator+(Complex x) We can write this too
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    ~Complex(){
        cout<<"Complex number destructor called"<<endl;
    }
};

int main(){
    Complex C1(3,7);
    Complex C2(5,4);
    Complex C3;

    C3 = C1.add(C2);
    C3 = C2.add(C1);
    // C3 = C1.operator+(C2);
}