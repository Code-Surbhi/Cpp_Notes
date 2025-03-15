//Modular Programming - Collection of functions 
/*
    Object oriented programming - Collection of set of objects
    Objects - contains functions and data related to functions , each object has its relevant functions 
    Principle of oops - 1) Abstraction
                        2) Encapsulation
                        3) Inheritance
                        4) Polymorphism
*/
/*
    Abstraction - The user need not know the interally working of a function in a class
    (eg - cout<< function hume pta hai print krata hai but kaise krata hai we need not know about it - the user need not know ki andar kya chal rha hai)
*/
/*
    Encapsulation - to save from mishandling
    for example : 

    class MY
    {
        Private:
            data
        Public:
            function to access data
    }
*/
/*
    Inheritance - 
    example - toh aise basic laylout of car ready hai , 4 tyre , body , windsheild , steering hogi and all
    now cars such as honda and toyota and bmw - ye sab apni cars mai basic layout ke baaad apne apne modifications karenge, thats inheritance
*/
/*
    Polymorphism - if we learn something from the upper part of hierarchy , we dont need to relearn it. 
    We use polymorphism with the help of inheritance.
*/
/*
    Class Vs Object 

    Class Human - you and me
    Class Car - Santro and honda city
    Class Bottle - Cello and Milton

    Class - Is a design , blueprint , layout 
    Object - Is a real world entity , a real world thing

    Class - Data (property) and function (behaviour)
*/
#include<iostream>
using namespace std;
class Rectangle{
    float length();
    float breadth();
    float area();
    float perimeter();
    float diagonal();
};
//After class - semicolon is must
int main(){
    Rectangle r1 , r2 , r3; //r1 , r2 , r3 are objects of class rectangle
} 
