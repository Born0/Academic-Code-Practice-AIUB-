 #include <iostream>
 using namespace std;
 class Abbu     //main class
 {
 protected:
   int x;
 public:
   Abbu()
   {

   }
   Abbu(int i)
   {
     x=i;
   }
   int valueAB()
   {
     return x;
   }

 };

 class Ammu
 {
 protected:
   int y;
 public:
   Ammu()
   {

   }
   Ammu(int j)
   {
     y=j;
   }
   int valueAM()
   {
     return y;
   }

 };

class Mosha:public Abbu,public Ammu
{
protected:
  int z;
public:
  Mosha()
  {

  }
  Mosha(int k):Abbu(5),Ammu(3)
  {
    z=k;
  }
  void total ()
  {
    int add;
    add=valueAB()+valueAM()+z;
    cout<<add;
  }
};


main()
{
  Mosha u(2);
  u.total();
}
