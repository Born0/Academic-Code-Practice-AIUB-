#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int id;
    float cgpa;
    int credit;
public:
    void input();
    void output();
};

void Student::input()
{
    cout<<endl<<"Enter ID:";
    cin>>id;
    cout<<"Enter Nmae:";
    cin>>name;
    cout<<endl<<"Enter CGPA:";
    cin>>cgpa;
    cout<<endl<<"Enter credit:";
    cin>>credit;
}

void Student::output()
{
    cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"cgpa:"<<cgpa<<endl<<"credit:"<<credit<<endl;
}

int main()
{
   /* int i;
    Student x[40];
    for(i=0;i<3;i++)
    {
        x[i].input();
        cout<<endl;
    }

    for(i=0;i<3;i++)
    {
        x[i].output();
        cout<<endl;
    }*/
    Student x;
    x.input();
    x.output();
}
