#include <iostream>

using namespace std;

void overLoding(int x,float y,char z);
void overLoding(float m,char n,int o);
int overLoding(char p,float q);

int main()
{
     int a;
     float b;
     char c;
     cout<<"int"<<endl;
     cin>>a;
     cout<<"float"<<endl;
     cin>>b;
     cout<<"char"<<endl;
     cin>>c;
     overLoding(a,b,c);
     overLoding(b,c,a);
     overLoding(c,b);
}

void overLoding(int x,float y,char z)
{
   cout<<"first"<<endl<<x<<endl<<y<<endl<<z<<endl;
}

void overLoding(float m,char n,int o)
{

    cout<<"second"<<endl<<m<<endl<<n<<endl<<o<<endl;
}
int overLoding(char p,float q)
{
    cout<<"third"<<endl<<p<<endl<<q<<endl;
    return 0;
}





