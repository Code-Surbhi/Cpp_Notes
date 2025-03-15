#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int CN_Marks;
    int FEE_Marks;
    int DBMS_Marks;
public:
    Student(int roll, string name, int CN_Marks, int FEE_Marks , int DBMS_Marks);
    ~Student();
    int Total_Marks();
    char Grade();
};

Student::Student(int roll,string name, int CN_Marks, int FEE_Marks , int DBMS_Marks){
    this->roll=roll;
    this->name=name;
    this->CN_Marks=CN_Marks;
    this->FEE_Marks=FEE_Marks;
    this->DBMS_Marks=DBMS_Marks;
}
int Student::Total_Marks(){
    return CN_Marks + FEE_Marks + DBMS_Marks;
}
char Student::Grade(){
    float average = Total_Marks()/3;
    if(average>=80){
        return 'A';
    }
    else if(average>=40 && average<80){
        return 'B';
    }
    else{
        return 'C';
    }

}
Student::~Student()
{
    cout<<"Destructor called"<<endl;
}

int main(){
    int roll;
    string name;
    int CN_Marks;
    int FEE_Marks;
    int DBMS_Marks;
    cout<<"Enter the roll number of a student: ";
    cin>>roll;
    cin.ignore(); // Clear the newline character left in the input buffer
    cout<<"Enter the name of a student: ";
    getline(cin,name);
    cout<<"Enter marks in 3 subjects : "<<endl;
    cout<<"Computer networks: ";
    cin>>CN_Marks;
    cout<<"Front End Engineering: ";
    cin>>FEE_Marks;
    cout<<"DataBase Managemet System: ";
    cin>>DBMS_Marks;

    Student s(roll,name,CN_Marks,FEE_Marks,DBMS_Marks);
    cout<<"Hello "<<name<<" your Total Marks are: "<<s.Total_Marks()<<endl;
    cout<<name<<" your grades are: "<<s.Grade()<<endl;


}