#include<iostream>
using namespace std;
class AAA
{
protected:
  int x;
public:
  AAA()
  {

  }
  AAA(int i)
  {
    x=i;
  }
  int valueAA()
  {
    return x;
  }
};
class BBB:public AAA
{
protected:
  int y;
public:
  BBB()
  {

  }
  BBB(int j):AAA(5)
  {
    y=j;
  }
  int valueBB()
  {
    return y;
  }
};
class CCC:public BBB
{
protected:
  int z;
public:
  CCC()
  {

  }
  CCC(int k) :BBB(3)
  {
    z=k;
  }
  void total()
  {
    int add;
    add=valueAA()+valueBB()+z;
    cout<<add;
  }
};

 main()
 {
   CCC u(2);
   u.total();
 }
