#include <iostream>
using namespace std;

class Box
{
    int height, width;
public:
    Box()
    {
        cout<<"Box Default Constructor"<<endl;
    }
    Box(int h, int w)
    {
        cout<<"Box Parameterized Constructor"<<endl;
        height=h;
        width=w;
    }
    ~Box()
    {
        cout<<"Box Destructor"<<endl;
    }
};

class Triangle
{
    int base;
public:
    Triangle()
    {
        cout<<"Triangle Default Constructor"<<endl;

    }
    Triangle(int b)
    {
        cout<<"Triangle Parameterized Constructor"<<endl;
        base=b;

    }
    ~Triangle()
    {
        cout<<"Triangle Destructor"<<endl;
    }
};

int main()
{
   int a=5;
   Box b1,b2;
   if(a<10)
   {
       static Box b3;
       cout<<"Hello"<<endl;
   }
   cout<<"Study Hard"<<endl;
}
