#include<iostream>
#include <iomanip>
using namespace std;

class Creature
{
  int number_of_eyes;
  int number_of_legs;
  string color;
public:
  Creature()
  {
    number_of_eyes=0;
    number_of_legs=0;
    color="NULL";
  }
  Creature(int eyes,int legs,string clr)
  {
    number_of_eyes=eyes;
    number_of_legs=legs;
    color=clr;
    details(color,number_of_eyes,number_of_legs);
  }
  void details(int e,int l,string c)
  {
    Creature(e,l,c);
  }
  void details(string color,int number_of_eyes,int number_of_legs )
  {
      cout<<endl<<setw(60)<<".....Creature details....."<<endl;
    cout <<setw(40) <<"Number_of_eyes:" <<number_of_eyes <<endl;
    cout <<setw(40)<< "Number_of_legs:" << number_of_legs<<endl;
    cout<<setw(40)<<"color:"<<color<<endl;
  }
};
main()
{
  int count;
  cout<<"Entr object count:";
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

}