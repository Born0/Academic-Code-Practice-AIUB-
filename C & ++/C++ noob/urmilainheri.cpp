#include<iostream>
using namespace std;
 class AAA
{
protected:
  int x,y;
public:
  AAA ()

  {

  }
  AAA (int i,int j)
  {
    x=i;
    y=j;
  }
  int valueAA()
  {
    return x*y;
  }
  virtual void show()
  {
    cout<<"AAA";
  }

};
 class BBB
{
protected:
  int a,b;
public:
  BBB()
  {

  }
  BBB(int u,int s)
  {
    a=u;
    b=s;
  }
  int valueBB()
  {
    return a*b;
  }
  virtual void show()
  {
    cout<<"BBB";
  }


};
class CCC:public AAA,public BBB
{
protected:
  int c,m;
public:
  CCC()
  {

  }
  CCC(int q,int f):AAA (12,10), BBB(34,12)
  {
    c=q;
    m=f;
  }
  void total()
  {
    int add;
    add=valueAA()+valueBB()+(c*m);
    cout<<add<<endl;
  }
  void show()
  {
    cout<<"CCC";
  }

};
main()
{
  CCC c(12,12);
  AAA &a=c;
  BBB &b=c;
  a.show();
  b.show();

}
