#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l , int b){
        length = l;
        breadth = b;
    }
    //function inside of class becomes INLINE function - its better if its not complex
    int area(){
        return length*breadth;
    }
    int perimeter();
};
//Scope resolution operator :: shows that this function has scope inside of rectangle class (return_type Class_name::function_name )
int Rectangle::perimeter(){
    return 2*(length+breadth);
}
int main(){
    Rectangle r(10,5);
    cout<<"Area of Rectangle is: "<<r.area()<<endl;
    cout<<"Perimeter of Rectangle is: "<<r.perimeter()<<endl;
}
