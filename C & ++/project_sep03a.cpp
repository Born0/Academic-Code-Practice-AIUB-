#include<iostream>
using namespace std;

class shape
{
  public:
    int dim1,dim2;
    void setDimantions(int d1,int d2)
    {
        dim1=d1;
        dim2=d2;
    }
};

class triangle:public shape
{
    public:
    double getArea()
    {
        return .5*dim1*dim2;
    }
};
class rectangle:public shape
{
    public:
    int getArea()
    {
        return dim1*dim2;
    }
};

int main()
{
   triangle t;
    t.setDimantions(6,2);
   rectangle r;
    r.setDimantions(6,2);
    cout<<"Area of Triangle:"<<t.getArea()<<endl;
				cout<<"Area of Rectangle:"<<r.getArea();
				return 0;
}
