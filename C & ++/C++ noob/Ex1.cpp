#include<iostream>

using namespace std;

void division(int m,int n);

main()
{
  int a,b;
  cout<<"enter 2 int:";
  cin>>a>>b;
  cout<<endl;
  try
  {
    division (a,b);
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

void division(int m,int n)
{
  if(n==0)
  {
    throw "Devided by zero is not posible";
  }
  else
  {
    cout<<m/n<<endl;
  }
}
