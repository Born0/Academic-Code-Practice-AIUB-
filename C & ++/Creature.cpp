#include<iostream>
#include <stdbool.h>
#include <iomanip>
using namespace std;

class Creature
{
  int number_of_eyes;
  int number_of_legs;
  string color;
public:
  static int cc;
  Creature()
  {
    number_of_eyes=0;
    number_of_legs=0;
    color="NULL";
      cc++;
  }
  Creature(int eyes,int legs,string clr)
  {
    number_of_eyes=eyes;
    number_of_legs=legs;
    color=clr;
  }
  void details(int e,int l,string c)
  {
    number_of_eyes=e;
    number_of_legs=l;
    color=c;
  }
  void details()
  {
      cout<<endl<<setw(60)<<".....Creature details....."<<endl;
    cout <<setw(40) <<"Number_of_eyes:" <<number_of_eyes <<endl;
    cout <<setw(40)<< "Number_of_legs:" << number_of_legs<<endl;
    cout<<setw(40)<<"color:"<<color<<endl;
  }
};
class Bird
{
  string color;
  string name;
  bool can_fly_or_not;
public:
  static int cb;
  Bird()
  {
    color ="NULL";
    name="NULL";
    can_fly_or_not=false;
    cb++;
  }
  Bird(string clr,string nm,bool fly)
  {
    color =clr;
    name=nm;
    can_fly_or_not=fly;
  }
  void details(string c,string n,bool f)
  {
    color =c;
    name=n;
    can_fly_or_not=f;
  }
  void details()
  {
    cout<<endl<<setw(60)<<".....Bird details....."<<endl;
    cout<<setw(40)<<"Color:"<<color<<endl;
    cout<<setw(40)<<"Name:"<<name<<endl;
    if(can_fly_or_not==1)
     {
       cout<<setw(43)<<"Can fly or not:yes"<<endl;
     }
     if(can_fly_or_not==0)
     {
       cout<<setw(43
       )<<"Can fly or not:NO"<<endl;
     }
  }
};
int Creature::cc=0;
int Bird::cb=0;
main()
{
  int count;
  cout<<"Enter number of object:";
  cin>>count;
  Creature cr[count];
  int e;
  int  l;
  string cl;
  for (size_t i = 0; i < count; i++)
  {
    cout<<endl<<"inpute for creature:"<<i+1<<endl<<endl;
    cout << "Number_of_eyes:";
    cin>> e;
    cout <<endl<< "Number_of_legs:";
    cin>>l;
    cout<<endl<<"color:";
    cin>> cl;
    cout<<endl;
    cr[i].details(e,l,cl);
  }
  Bird br[count];
  string c;
  string n;
  bool f;
  for (size_t i = 0; i < count; i++)
  {
      cout<<endl<<"input for Bird:"<<i+1<<endl<<endl;
    cout<<"Enter color:";
    cin>>c;
    cout<<endl<<"Enter name:";
    cin>>n;
    cout<<endl<<"Can_fly_or_not:Enter 1 or 0:";
    cin>>f;
    br[i].details(c,n,f);
  }
for (size_t i = 0; i < count; i++)
{
  cr[i].details();
  cout<<endl;
}
  for (size_t i = 0; i < count; i++)
  {
    br[i].details();
    cout<<endl;
  }
  cout<<endl<<setw(40)<<"Number of object created="<<Creature::cc+Bird::cb<<endl<<endl;
}