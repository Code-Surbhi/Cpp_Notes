#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        //Declaring the function
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle &r);
        int setLength(int l);
        int setBreadth(int b);
        int getLength();
        int getBreadth();
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();
};
//Defining the function
Rectangle::Rectangle(){
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r){
    length = r.length;
    breadth = r.breadth;
}
int Rectangle::setLength(int l){
    if(l>0){
    length = l;
    }
    else{
        cout<<"Invalid length"<<endl;
        length = 1;
    }
}
int Rectangle::setBreadth(int b){
    if(b>0){
        breadth = b;
    }
    else{
        cout<<"Invalid breadth"<<endl;
        breadth = 1;
    }
}
int Rectangle::getLength(){
    return length;
}
int Rectangle::getBreadth(){
    return breadth;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}
bool Rectangle::isSquare(){
    return length==breadth;
}
Rectangle::~Rectangle(){
    cout<<"Rectangle object destroyed"<<endl;
}

int main(){
    int l , b;
    cout<<"Enter length of Rectangle: "<<endl;
    cin>>l;
    cout<<"Enter breadth of rectangle: "<<endl;
    cin>>b;
    Rectangle r(l,b);
    cout<<"Area is: "<<r.area()<<endl;

    cout<<"To check if the dimensions you entered of the rectangle make it a sqaure or not : we call isSquare function: "<<endl;
    if(r.isSquare()){
        cout<<"Yes its a square"<<endl;
    }
    else{
        cout<<"No not a square"<<endl;
    }
}