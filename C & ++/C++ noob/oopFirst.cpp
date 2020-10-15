#include<iostream>
using namespace std;
class Creature
{
  int numberOfEyes;
  int numberOfLegs;
  string color;
public:
  Creature()
  {
    numberOfEyes=0;
    numberOfLegs=0;
     color="NULL";
  }
  Creature(int e,int l,string  c)
  {
    numberOfEyes=e;
    numberOfLegs=l;
    color=c;
    value(numberOfEyes,color,numberOfLegs);
  }
  void value(int e,int l,string c)
  {
    Creature(e,l,c);
  }
  void value(int numberOfEyes,string color,int numberOfLegs  )
  {
    cout<<"numberOfEyes: "<<numberOfEyes<<endl;
    cout<<"numberOfLegs: "<<numberOfLegs<<endl;
    cout<<"color: "<<color<<endl;
  }

};
 main()
 {
   Creature cr;
int e, l;
string c;
cin>>e>>l>>c;
cr.value(e,l,c);

 }
