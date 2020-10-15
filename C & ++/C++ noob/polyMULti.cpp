#include<iostream>

using namespace std;
class Box                         //"Box"is a main class
{
protected:
  int height;
  int width;
public:
  Box()
  {
    cout<<"default Box"<<endl;
  }
  Box(int h,int w)
  {
      cout<<"Pera Box"<<endl;
    height=h;
    width=w;
  }

 virtual  void print()
  {
    cout<<"     Print for Box \n";
  }
};


class Rectangle:public Box                  //"Rectangle" is a sub class of "Box"
{
protected:
  int breadth;
public:
  Rectangle()
  {
    cout<<"default Rectangle"<<endl;
  }
  Rectangle(int b):Box(2,3)
  {
    cout<<"Pera Rectangle"<<endl;
    breadth=b;
  }

   void print()
  {
    cout<<"     Print for Rectangle \n";
  }
};


main()
{
  Rectangle r1;
  Box &b2=r1;                       //using reference variable
  b2.print();
}










                                                              //              Born 0
