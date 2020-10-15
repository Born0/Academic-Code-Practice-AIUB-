#include<iostream>
#include<string>
using namespace std;
class Aiub
{
int tv,ac,freeze;
string area;
public:
Aiub()
{

}
Aiub(int t,int a,int fr,string ar)
{
  tv=t;
  ac=a;
  freeze=fr;
  area=ar;
getvalue(tv,ac,freeze,area);
}
setvalue(int tv,int ac,int freeze,string area)
{
Aiub(tv,ac,freeze,area);

}
getvalue(int tv,int ac,int freeze,string area)
{
cout<<"tv: "<<tv<<endl;
cout<<"ac: "<<ac<<endl;
cout<<"freeze: "<<freeze<<endl;
cout<<"area: "<<area<<endl;
}
};
main()
{
  Aiub a1;
int tv,ac,freeze;
string area;
cout<<"enter the value of tv: ";
cin>>tv;
cout<<"enter the value of ac: ";
cin>>ac;
cout<<"enter freeze: ";
cin>>freeze;

cin>>area;
  a1.setvalue(tv,ac,freeze,area);

}
