// Sum = Sum + a;
// Sum + = a;


/*
Pre increment -> ++x;
pehle increment and then operation is performed

Post increment -> x++;
pehle operation is performed and then the value is increased

same is for decrement - pre decrement and post decrement 
*/

// Overflow
/*
    Range of char -> -128 to 127
    char x = 127 
    x++;
    then it cant increment by 1 , then it just comes to -128
*/
#include <climits>
#include <iostream>
using namespace std;
int main(){
    int x = CHAR_MAX;
    ++x;
    cout<<x<<endl;
}

/*
    Bitwise operator
    1. & (bitwise AND) - 00 -> 0 , 10 -> 0 and 11 -> 1
    2. | (bitwise OR) - 00 -> 0 , 10 -> 1 and 11 -> 1
    3. ^ (bitwise XOR) - same pe 0 and diffrent pe 1
    4. ~ (bitwise NOT) - opposite 
    5. << (left shift)
    6. >> (right shift)

    during left and right shift operations sign bit is not disturbed
*/

/*
x = 00000101 -> not nikalna hai
~x = 11111010 -> but since the sign bit is negative here we need to take 2's compliment

11111010 -> 00000101 + 1 -> 00000110 => and the value is (-6)
*/

/*
x<<i
x*2^i 

and 

x>>i
x/2^i
*/