#include<iostream>

using namespace std;

class Triangle
{
    int x,y,z;
public:
   void setValues()
    {
        cout<<"Enter the three lenths of the Triangle"<<endl;
        cin>>x>>y>>z;
    }
   void getValues()
    {
        cout<<"X:"<<x<<endl<<"Y:"<<y<<endl<<"Z:"<<z<<endl;
    }
   void testTriangle()
    {
        if(x==y&&x==z&&y==z)
        {
            cout<<"Equilateral"<<endl;
        }
        else if(x==y||x==z||y==z)
        {
            cout<<"Isosceles"<<endl;
        }
        else
        {
            cout<<"Scalene"<<endl;
        }
    }
};

int main()
{
    Triangle a;
    a.setValues();
    a.getValues();
    a.testTriangle();
}
