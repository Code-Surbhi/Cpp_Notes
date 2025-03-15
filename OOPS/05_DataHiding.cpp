#include<iostream>
using namespace std;
/*
    class Rectangle
    {
    private: //data members are private
        int length;
        int breadth;
    public:
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
    };

    int main(){
        Rectangle r;
        // r.length = 20;
        // r.breadth = -10; -> and this class will be flawed for printing negative area
        // cout<<r.length(); -> we cant access the data members of this class as its private
        // we cant access the above data members as it is private
        // cout<<r.area(); -> area function mai garbage value ayegi - because data members are private
    }

    The improved version of the above code is:
*/

class Rectangle{
    private:
        int length;
        int breadth;
    public:

        //Setxxx = Mutator
        void setLength(int l){
            if(l>=0)
            length = l;
            else{
            cout<<"Invalid length"<<endl;
            length = 0;
            }
        }
        void setBreadth(int b){
            if(b>=0)
            breadth = b;
            else{
            cout<<"Invalid breadth"<<endl;
            breadth = 0;
            }
        }
        //Getxxx = Accessor
        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    Rectangle r;
    r.setLength(20);
    r.setBreadth(-10);
    cout<<"Area is: "<<r.area()<<endl;
    //area comes out to be 0 because the breadth is negative
    cout<<"Length is: "<<r.getLength()<<endl;
}
