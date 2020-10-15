#include<iostream>
#include <stdbool.h>
#include<iomanip>
using namespace std;

class Creature
{
    int Number_of_eyes;
    int Number_of_legs;
    string color;

public:
    static int Count;
    Creature()
    {
        Count++;
        cout<<endl;
    }
    Creature(int n_e, int n_l,string c  )
    {
        Count++;
        Number_of_eyes=n_e;
        Number_of_legs=n_l;
        color=c;
        cout<<endl;
    }
   void setValues()
    {
        cout<<"Enter Number of eyes : "<<endl;
        cin>>Number_of_eyes;
        cout<<"Enter Number of leg : "<<endl;
        cin>>Number_of_legs;
        cout<<"Enter Color : "<<endl;
        cin>>color;
    }


    void getValues()
    {
        cout<<endl;
        cout<<setw(40)<<"Number Of Eyes : "<<Number_of_eyes<<endl;
        cout<<setw(40)<<"Number_of_legs : "<<Number_of_legs<<endl;
        cout<<setw(40)<<"Color : "<<color<<endl;
    }


    ~Creature()
    {
        cout<<endl;
    }

};
class Bird
{
    string color;
    string name;
    bool can_fly_or_not;
    bool can_fly=true;
    bool not_fly=false;
public:
    static int COUNT;
    Bird()
    {
        COUNT++;
        cout<<endl;
    }
    Bird(string c,string n)
    {
        COUNT++;
        color=c;
        name=n;

        cout<<endl;

    }
  void  setValues()
    {

        cout<<"Enter bird color : "<<endl;
        cin>>color;
        cout<<"Enter Bird Name : "<<endl;
        cin>>name;
        cout<<"Enter This bird can fly or not.: "<<"if fly then prees 1 Or press 0 "<<endl;
        cin>>can_fly_or_not;



    }

    getValues()
    {
        cout<<endl;
        cout<<setw(40)<<"Color : "<<color<<endl;
        cout<<setw(40)<<"Bird : "<<name<<endl;
        if(can_fly_or_not==can_fly)
        {
            cout<<setw(40)<<"Can Fly or Not : "<<can_fly<<endl;
        }
        else if(can_fly_or_not=not_fly)
        {
             cout<<setw(40)<<"Can Fly or Not : "<<not_fly<<endl;
        }


    }
    ~Bird()
    {
        cout<<endl;
    }
};


int Creature::Count=0;
int Bird::COUNT=0;

main()
{
    Creature r1;
    r1.setValues();
    r1.getValues();


    Bird p1;
    p1.setValues();
    p1.getValues();

    cout<<setw(40)<<"Number of object="<<Creature::Count+Bird::COUNT<<endl<<endl;

}
