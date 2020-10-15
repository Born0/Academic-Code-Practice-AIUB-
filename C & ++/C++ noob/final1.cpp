#include <iostream>

using namespace std;

class Exam
{
protected:
  double time1;
  double duration;
  string name;
public:
  static int c1;
  Exam()
  {

    c1++;
  }
  Exam(double tm,double dr,string nm)
  {
    time1=tm;
    duration=dr;
    name=nm;
    c1++;
  }
  virtual  void show()
  {
    cout<<"Exam:"<<endl;
    cout<<"Time:"<<time1<<endl<<"Duration:"<<duration<<endl<<"Name:"<<name;
  }
};

  class SubExam:public Exam
  {
  protected:
    int x;
  public:
    static int c2;
    SubExam():Exam(13.20,1.5,"Final")
    {
      c2++;
    }
    SubExam(int y)
    {
      x=y;
      c2++;
    }
    void show()
    {
      cout<<"Subexam:"<<endl;
      cout<<"Time:"<<time1<<endl<<"Duration:"<<duration<<endl<<"Name:"<<name;
    }

  };
int Exam::c1=0;
int SubExam::c2=0;

main()
{
  SubExam se;
  Exam &e=se;
  e.show();
  cout<<endl<<"Object created:"<<Exam::c1+SubExam::c2;
}
