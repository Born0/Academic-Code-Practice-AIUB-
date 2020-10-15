#include <iostream>
using namespace std;

class Myclass
{
private:
      int a;
  public:
    int a1;
   Myclass(){}
   Myclass(int x)
   {
       a=x;
       a1=a;
   }

   void show()
   {
     cout<<a<<endl;
   }
   Myclass publicMy(Myclass obj1)
   {
     return obj1;
   }
};

class Yourclass
{
private:
      int b;
    public:
      int b1;
  Yourclass(){}
  Yourclass(int y)
    {
      b=y;
      b1=b;
    }
  void show()
  {
      cout<<b<<endl;
  }
  Yourclass publicYour(Yourclass obj2)
  {
    return obj2;
  }
};

void changevalues(Myclass* obj1,Yourclass* obj2)
 {
   obj1->a1=obj1->a1+obj2->b1;
   obj2->b1=obj2->b1+obj1->a1;
   cout<<obj1->a1<<" "<<obj2->b1<<endl;
 }

main()
{
  Myclass obj1(4);
  Yourclass obj2(5);
  obj1.show();
  obj2.show();
  Myclass m1=obj1.publicMy(obj1);
  Yourclass y1=obj2.publicYour(obj2);
  changevalues(&m1,&y1);
}
