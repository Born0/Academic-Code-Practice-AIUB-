#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;
    int credit;
    float cgpa;
public:
    void setValues();
    void getValues();
};

void Student::setValues()
{
    cout<<"Enter Student ID: ";
    cin>>id;
    cout<<"Enter Student Name: ";
    cin>>name;
    cout<<"Enter Credit: ";
    cin>>credit;
    cout<<"Enter CGPA: ";
    cin>>cgpa;
}

void Student::getValues()
{
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Credit: "<<credit<<endl;
    cout<<"CGPA: "<<cgpa<<endl;
}

int main()
{
    Student s1,s2;
    s1.setValues();
    s2.setValues();
    s1.getValues();
    s2.getValues();
}
