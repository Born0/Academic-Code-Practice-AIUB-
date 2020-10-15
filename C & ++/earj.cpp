#include<iostream>
#include<stdbool.h>
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
        cout<< ".....Class of Creature....."<<endl;
        Count++;
        Number_of_eyes=0;
        Number_of_legs=0;
        color="NULL";
        cout<< "Number Of Eyes : "<<Number_of_eyes<<endl;
        cout<< "Number_of_legs : "<<Number_of_legs<<endl;
        cout<< "Color : "<<color<<endl;
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

    void Print(int e,int l,string c)
    {
        Number_of_eyes=e;
        Number_of_legs=l;
        color=c;
    }

    void PrintDetails()
    {
        cout<<endl;
        cout<< "Number Of Eyes : "<<Number_of_eyes<<endl;
        cout<< "Number_of_legs : "<<Number_of_legs<<endl;
        cout<< "Color : "<<color<<endl;
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
public:
    static int COUNT;
    Bird()
    {
        cout<< ".....Class of Bird....."<<endl;
        COUNT++;
        color="NULL";
        name="NULL";
        can_fly_or_not=false;
        cout<< "Color : "<<color<<endl;
        cout<< "Bird : "<<name<<endl;
        cout<< "Can Fly or Not : "<<can_fly_or_not<<endl;
        cout<<endl;
    }
    Bird(string c,string n,bool c_f_o_n)
    {
        COUNT++;
        color=c;
        name=n;
        can_fly_or_not=c_f_o_n;
        cout<<endl;
    }

    void  Print(string c,string n,bool c_f)
    {
        color=c;
        name=n;
        can_fly_or_not=c_f;
    }

    PrintDetails()
    {
        cout<<endl;
        cout<< "Color : "<<color<<endl;
        cout<< "Bird : "<<name<<endl;
        cout<< "Can Fly or Not : "<<can_fly_or_not<<endl;
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
    int cc;
    cout<<"Enter How many Object Do You Want : "<<endl;
    cin>>cc;
    Creature r1[cc];
    int e,l;
    string c;
    for(int i=0; i<cc; i++)
    {
        cout<<"Enter Number of eyes : "<<endl;
        cin>>e;
        cout<<"Enter Number of leg : "<<endl;
        cin>>l;
        cout<<"Enter Color : "<<endl;
        cin>>c;
        r1[i].Print(e,l,c);
    }
    string n;
    bool c_f;
    Bird b1[cc];
    for(int i=0; i<cc; i++)
    {
        cout<<"Enter bird color : "<<endl;
        cin>>c;
        cout<<"Enter Bird Name : "<<endl;
        cin>>n;
        cout<<"Enter This bird can fly or not.: "<<"if fly then prees true  Or press false "<<endl;
        cin>>c_f;
        b1[i].Print(c,n,c_f);
    }


    for(int i=0; i<cc; i++)
    {
        r1[i].PrintDetails();
        b1[i].PrintDetails();
        cout<<endl;
    }
    cout<< "Number of object="<<Creature::Count+Bird::COUNT<<endl<<endl;

}
