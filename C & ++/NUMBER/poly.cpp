#include<iostream>

using namespace std;
class Momo
{
protected:
    int x;
public:
    Momo(){}
    Momo(int a)
    {
        x=a;
    }
    int passM()
    {
        return x;
    }

    virtual void print()
    {
        cout<<"Momo:"<<endl;
    }

};
class Turny:public Momo
{
protected:
    int y;
public:
    Turny(){}
    Turny(int b):Momo(6)
    {
        y=b;
    }

    total()
    {
        cout<<passM()+y;
    }

   void print()
        {
            cout<<"Turny:"<<endl;
        }
};


main()
{
	Turny t(5);
	Momo &m=t;
	m.print();
}








