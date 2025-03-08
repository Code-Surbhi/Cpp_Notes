/*
Data types and variables

1. Primitive
    a.integeral
        i.integer
        ii.char
    b.bool
    c.floating point
        i.float
        ii.double

2. User defined
    a.enum
    b.structure
    c.union
    d.class

3. Derived
    a.array
    b.pointer
    c.referance
*/

/*
DataType - Size - Range

int - 2/4 - -32768 to 32767
float - 4 - -3.4x10^38 to 3.4x10^38
double - 8 - -1.7x10^308 to 1.7x10^308
char - 1 - -128 to 127
bool - userdefined - true / false
*/

// Signed bit -> 0 : positive and 1 : negative

// ASCII CODES
/*
    A = 65              a = 97              0 = 48
    B = 66              b = 98              1 = 49
    .                   .                   .
    .                   .                   .
    Z = 90              z = 122             9 = 57
*/

//Modifiers - Unsigned : only positive numbers (int and char) and Long (int(4/8) and double(10))


// int roll ; //DECLARATION
// roll = 10; //ASSIGNMENT
// int roll = 10 ; //INITIALISE
// float price = 10.56f; writing f is compulsary otherwise it assumes it to be double

#include <iostream>
using namespace std;
int main() {
    int a =13;
    int b =5;
    float c;
    float d;
    c = (float) a/b;
    cout<<c<<endl;
    d = a/b;
    cout<<d<<endl;
}

//Header files having sqrt fxn and other math fxns
#include <cmath>
#include <math.h>

// (/n) this inserts a new line just like endl