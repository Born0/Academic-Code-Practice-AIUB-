#include <iostream>
using namespace std;
class Box
{
protected:
  int height;
  int width;
public:
  Box()
  {
     cout<<"Box Def"<<endl;
  }
  Box(int x,int y)
  {
    cout<<"Box Pera"<<endl;
    height=x;
    width=y;
  }
  virtual void show()
  {
    cout<<"           Box show \n";
  }
  ~Box()
  {
    cout<<"Box dest \n";
  }
};

class Rectangle:public Box
{
protected:
  int breadth;
public:
  Rectangle()
  {
    cout<<"Rectangle Def\n";
  }
  Rectangle(int z):Box(5,4)
  {
    breadth=z;
    cout<<"Rectangle Pera\n";
  }
  void show()
  {
    cout<<"         Rectangle show \n";
  }
  void print()
  {
    cout<<"         Rectangle print \n";
  }
  ~Rectangle()
  {
    cout<<"Rectangle Dest\n";
  }
};
                    //use any one of this two main functios
/*main()
{
  Box b1,*b2;
  Rectangle r1(1);
  b2=&r1;                //using pointer variable
  b2->show();
}*/

main()
{
  Box b1;
  Rectangle r1;
  Box &b2=r1;           //using reference variable
  b2.show();
}
