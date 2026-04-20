#include<iostream>
using namespace std;

class Student{
    public:
        string name;//data member
        string rollno;
        void show(){ //member function
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<rollno<<endl<<endl;
        }
};

int main(){
    Student student1; //object creation
    student1.name = "Ashwani";
    student1.rollno = "2025b01010044";
    student1.show(); //calling member function

    Student student2; //another object
    student2.name = "Bob";
    student2.rollno = "2025b01010045";
    student2.show(); //calling member function

    return 0;
}