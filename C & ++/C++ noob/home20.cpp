#include<iostream>
#include<string.h>
using namespace std;
class person{
private:
    string name;
protected:
    int age;
public:
  person(){}
    person(string nm,int y)
    {
        name=nm;
        age=y;
        show_person();
    }
    void show_person()
    {
        cout<<"name : "<<name<<endl<<"age : "<<age<<endl;
    }

};
class student: virtual public person
{
protected :
    float cgpa;
public:
  student(){}
    student (float cg):person("MAKU",20)
    {
        cgpa=cg;
        show_student();
    }
    void show_student()
    {
      cout<<"CGPA : "<<cgpa<<endl;
    }
};

class faculty: public person
{
protected:
    int salary_per_hour;
public:
  faculty(){}
    faculty(int sal):person("MAKU",20)
    {
        salary_per_hour=sal;
        show_faculty();
    }
    void show_faculty()
    {
      cout<<"faculty salary : "<<salary_per_hour<<endl;
    }
};

class ta:public faculty,public student
{
protected:
    int hour_per_day;
public:
    ta(int sal):faculty(150),student(3.94)
    {
          hour_per_day=sal;
          salary();
    }
  void salary()
  {
     cout<<"TA salary : "<<(30*salary_per_hour*hour_per_day)<<endl;
  }
};

main()
{
    ta t1(1300);
}
