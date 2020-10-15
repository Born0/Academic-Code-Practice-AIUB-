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
    void input( int i,string nm,int cr,float cg)
    {
     id=i;
     name=nm;
     credit=cr;
     cgpa=cg;

    }
    void output();
};



void Student::output()
{
    cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"credit:"<<credit<<endl<<"cgpa:"<<cgpa<<endl;
}

int main()
{
    Student s[40];
    int j=0;
   int id,c;
   string n;
   float res;

    for( ; ; )
    {
    cout<<"Enter ID:";
    cin>>id;
    cin.ignore();
    cout<<endl<<"Enter Nmae:";
    getline(cin,n);
    if(n=="no")
       {
           break;
       }
    cout<<endl<<"Enter credit:";
    cin>>c;
    cout<<endl<<"Enter CGPA:";
    cin>>res;
       s[j].input(id,n,c,res);
       cout<<endl;
        s[j].output();
        cout<<endl;
    }

}
