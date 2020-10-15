#include <iostream>

using namespace std;

class Box
{
    float height,width,breadth;
public:
    void input(float h,float w, float b)
    {
        height=h;
        width=w;
        breadth=b;
    }
    void show()
    {
        cout<<height<<endl<<width<<endl<<breadth<<endl;
    }
    void area()
    {
        cout<<"Area="<<height*width<<endl;
    }
    void volume()
    {
        cout<<"Volume="<<height*width*breadth<<endl;
    }
};

int main()
{
 float ht,wd,bt;
 cout<<"HT:"<<"WD:"<<"bt:"<<endl;
 cin>>ht>>wd>>bt;
 Box box1;
 box1.input(ht,wd,bt);
 box1.show();
 box1.area();
 box1.volume();


}





