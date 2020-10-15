#include <iostream>
using namespace std;

class Rectangle
{
    float height,width;
    int breadth;
public:
    Rectangle()
    {
        cout<<"Default Constructor"<<endl;
        height=0;
        width=0;
        breadth=0;
    }
    ~Rectangle()
    {
       cout<<"Destroyed..."<<endl;
       cout<<"a"<<endl;
    }
    Rectangle(float h, float w, int b)
    {
        cout<<"Parameterized Constructor"<<endl;
        height=h;
        width=w;
        breadth=b;
    }
    Rectangle(float w,int b)
    {
        cout<<"Parameterized Constructor"<<endl;
        height=0;
        width=w;
        breadth=b;
    }

    void setValues(float h,float w, int b)
    {
        height=h;
        width=w;
        breadth=b;
    }
    void getValues()
    {
        cout<<"Height= "<<height<<endl;
        cout<<"Width= "<<width<<endl;
        cout<<"Breadth= "<<breadth<<endl;
    }
};

int main()
{
  int a=5;
  Rectangle r1(3.4,6,9),r2,r3(3.5,2);
  r1.getValues();
  r2.getValues();
  r3.getValues();
}
