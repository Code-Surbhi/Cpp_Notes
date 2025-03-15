#include<iostream>
using namespace std;
//Jab you create an object - uski uss time koi na koi length and breadth toh hogi hi na 
//HOW CAN WE BUY AN OBJECT FIRST AND SET ITS LENGTH AND BREADTH BAAD MAI?? - HENCE CONSTRUCTORS COME

class Rectangle{
    private:
        int length;
        int breadth;
    public:
    //constructor - function which is called when an object is created (OBJECT KE BANTE HI FUNCTION JO CALL HOTA HAI WO CONSTUCTOR HOTA HAI)
    //constructor doesnt have a return type - and its of the same name of the class 
    /*
        There are 4 types of constructors - 1) Default constructors (if we dont write any of the below constructor then the compiler provides with a by default constructor on object creation)
                                            2) Non Parameterized constructors
                                            3) Parameterized constructors
                                            4) Copy constructors
    */

    // //Non parameterised constructor
    //   Rectangle(){ 
    //      length = 0;
    //      breadth = 0;
    // }

    //Parameterised Constructor
    Rectangle(int l = 0, int b = 0){ //isse hum "rectangle r(10);" AND "rectangle r();" dono access kr sakte hai
        setLength(l);   //jab already iska code likha hua ho constructor ke bahar
        setBreadth(b);  //jab already iska code likha hua ho constructor ke bahar
    }

    // //Copy Constructor
    //   Rectangle(Rectangle &r){
    //      length = r.length;
    //      breadth = r.breadth;

    // }

    void setLength(int l){
        if(l > 0){
            length = l;
        }
        else{
            length = 0;
            cout<<"Invalid length: hence length set to 0"<<endl;
        }
    }

    void setBreadth(int b){
        if(b>0){
            breadth = b;
        }
        else{
            breadth = 0;
            cout<<"Invalid breadth: hence breadth set to 0"<<endl;
        }
    }

    void getLength(){
        cout<<"Length: "<<length<<endl;
    }

    void getBreadth(){
        cout<<"Breadth: "<<breadth<<endl;
    }

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r1;
    // Rectangle r1(); //constructor is called
    cout<<"area of r1 is: "<<r1.area()<<endl;
    Rectangle r2(10,20);
    cout<<"area of r2 is: "<<r2.area()<<endl;
    // Rectangle r3(r2); //copy constructor is called


}