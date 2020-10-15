#include<iostream>

using namespace std;

main()
{
  int a,b;
  cout<<"enter 2 int:";
  cin>>a>>b;
  cout<<endl;
  try
  {
    if(b==0)
    {
      throw "Devided by zero is not posible";
    }
    else
    {
      cout<<a/b<<endl;
    }
  }
  catch(int x)
  {
    cout<<"cought"<<endl;
    cout<<a/b;
  }
  catch(const char* x)
  {
    cout<<"cought"<<endl;
    cout<<x;
  }
}
