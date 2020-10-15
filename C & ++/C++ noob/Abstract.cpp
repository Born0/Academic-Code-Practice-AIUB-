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

  virtual void print()=0;
  void greetings()
  {
    cout<<"Hello....."<<endl;
  }
  virtual void volume()=0;
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
  void volume ()
  {
    cout<<"Volume="<<height*width*breadth;
  }
};


main()
{
  Rectangle r1(5);
  Box &b1=r1;
  b1.greetings();
  b1.print();
  b1.volume();

}










                                                              //              Born 0
