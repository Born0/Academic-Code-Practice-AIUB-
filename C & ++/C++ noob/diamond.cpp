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
    cout<<"height:"<<h<<"    width:"<<width<<endl;
  }
};


class Rectangle:virtual public Box                  //"Rectangle" is a sub class of "Box"
{
protected:
  int breadth;
public:
  Rectangle()
  {
    cout<<"default Rectangle"<<endl;
  }
  Rectangle(int b)
  {
    cout<<"Pera Rectangle"<<endl;
    cout<<"breadth:"<<breadth<<endl;
  }

};

class Add: virtual public Box               //"Add" is a sub class of Rectangle && as "Rectangle" is a sub class of "Box"->"Add" is a (sub)sub class of "Box"
{
protected:
  int number;
public:
  Add()
  {
    cout<<"default Add"<<endl;
  }
  Add(int x)
  {
    cout<<"Pera Add"<<endl;
  }

};

class Dd:public Box,public Add
{
protected:
  int a;
public:
  Dd()
  {
    cout<<"default Dd"<<endl;
  }
  Dd(int x)
  {
    int a=x;
    cout<<"pera Dd"<<endl;
    cout<<"DD of a:"<<a<<endl;
  }
};

main()
{
  Dd d1;
  d1=Dd(5);
}



                                                              //              Born 0
