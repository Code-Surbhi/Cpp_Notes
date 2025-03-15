#include<iostream>
using namespace std;
/*
class Base{
    public:
    int a;//ye derived mai bhi accessible hoga
    void display(){
        cout<<"Base class "<<a<<endl;
    }
};

class Derived:public Base{
    public:
    void show(){
        cout<<"Derived class "<<endl;
    }
};

int main(){
    Derived d;
    d.a=10;
    d.display();
    d.show();
}
*/

//private members of Parents class cant be used in derived / child class -> iska solution -> use/call those functions that access/use those members


class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(){
        length=1;
        breadth=1;
    };
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    void setLength(int l){
        length = l;
    }
    void setBreadth(int b){
        breadth = b;
    }
    int area();
    int perimeter();
    bool isSquare();
    //~Rectangle();
};

class Cuboid : public Rectangle{
    private:
    int height;
    public:
    Cuboid(int h){
        height = h;
    }
    int getHeight(){
        return height;
    }
    void setHeight(int h){
        height = h;
    }
    int volume(){
        return getLength()*getBreadth()*height;
    }
};

int main(){
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout<<"Volume is: "<<c.volume()<<endl;
}