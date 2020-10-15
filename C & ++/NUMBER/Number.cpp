#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

void numberConverter(string a,int g);
int stringINT(string b);
int BinDec(int b);
int OctDec(int b);
int HexaDec(string b);
int DecBin(int x);
int DecOct(int x);
int DecHexa(int x);

class Number
{
    string value;
    int base;
  public:
    Number()
    {
      value="NULL";
      base=10;
    }
    Number(string v,int b)
    {
      value=v;
      base=b;
    }
    void  setValue(string v)
    {
    value=v;
    }
    string getValue()
    {
      return value;
    }
    void setBase(int  b)
    {
      base=b;
    }
    int getBase()
    {
      return base;;
    }
};

main()
{
  string v;
  int b;
  Number n;
  cout<<"Enter any number :if HEXA, Use CAPITAL letter:";
  cin>>v;
  cout<<endl<<"Enter the base used for this number:";
  cin>>b;
  cout<<endl;
  n.setValue(v);
  n.setBase(b);
  cout<<"Entered value:"<<n.getValue()<<endl<<endl;
  cout<<"Entered base:"<<n.getBase()<<endl<<endl;
  cout<<"Converted to other Bases:"<<endl<<endl;
  numberConverter(v,b);
}
void numberConverter(string a,int g)
{
  int d;
  int x;
  if(g==2)
  {
    cout<<"the number is in Binary:"<<a<<endl<<endl;
    x=stringINT(a);
    d=BinDec(x);
    cout<<"Decimal:"<<d<<" ";
    cout<<endl<<endl;
    DecOct(d);
    cout<<endl<<endl;
    DecHexa(d);
    cout<<endl;
  }
  else if(g==8)
  {
    cout<<"the number is in Octal:"<<a<<endl<<endl;
    x=stringINT(a);
    d=OctDec(x);
    cout<<"Decimal:"<<d<<" ";
    cout<<endl<<endl;
    DecBin(d);
    cout<<endl<<endl;
    DecHexa(d);
    cout<<endl;
  }
  else if(g==10)
  {
    cout<<"the number is in Octal:"<<a<<endl<<endl;
      x=stringINT(a);
    DecBin(x);
    cout<<endl<<endl;
    DecOct(x);
    cout<<endl<<endl;
    DecHexa(x);
    cout<<endl;
  }
  else if(g==16)
  {
    cout<<"the number is in Hexa-Decimal:"<<a<<endl<<endl;
    d=HexaDec(a);
    cout<<"Decimal:"<<d<<" ";
    cout<<endl<<endl;
    DecBin(d);
    cout<<endl<<endl;
    DecOct(d);
    cout<<endl;
  }
  else
  {
    cout<<endl<<"Invalid base !!!"<<endl<<endl;
    {
      cout<<"Enter Base again:";
      cin>>g;
      numberConverter(a,g);
    }
  }
}
int stringINT(string b)
{
  int k=0;
  int x[k];
  int i;
  int m=1;
  int value=0;
  k=b.length();

  for(i=0;i<k;i++)
  {
    if(b[i]>10)
    {
      x[i]=b[i]-48;
    }
    if(b[i]>='A')
    {
      x[i]=b[i]-55;
    }
  }
  reverse(x,x+k);
  for(i=0;i<k;i++)
  {
    value=value+x[i]*m;
    m=m*10;
  }
  return value;
}


int BinDec(int b)
{
  int dec=0;
  int *x;
  x=new int[100];
  int i,k=0;
  while (b>0)
  {
    x[k]=b%10;
    b=b/10;
    k++;
  }
  for(i=0;i<k;i++)
  {
    dec=dec+x[i]*pow(2,i);
  }
  return dec;
  delete []x;
}

int OctDec(int b)
{
  int dec=0;
  int *x;
  x=new int[100];
  int i,k=0;
  while (b>0)
  {
    x[k]=b%10;
    b=b/10;
    k++;
  }
  for(i=0;i<k;i++)
  {
    dec=dec+x[i]*pow(8,i);
  }
  return dec;
  delete []x;
}

int HexaDec(string b)
{
  int dec=0;
  int *x;
  x=new int[100];
  int i,k;
  k=b.length();

  for(i=0;i<k;i++)
  {
    if(b[i]>10)
    {
      x[i]=b[i]-48;
    }
    if(b[i]>='A')
    {
      x[i]=b[i]-55;
    }
  }
  reverse(x,x+k);
  for(i=0;i<k;i++)
  {
    dec=dec+x[i]*pow(16,i);
  }
    return dec;
    delete []x;
}

int DecBin(int x)
{
  int *a;
  a=new int[100];
  int k=0;
  while(x>0)
  {
    a[k]=x%2;
    x=x/2;
    k++;
  }
  reverse(a,a+k);
  cout<<"Binary:";
  for (size_t i = 0; i <k; i++)
  {
      cout<<a[i]<<" ";
  }
  delete []a;
}

int DecOct(int x)
{
  int *a;
  a=new int[100];
  int k=0;
  while(x>0)
  {
    a[k]=x%8;
    x=x/8;
    k++;
  }
  reverse(a,a+k);
  cout<<"Octal:";
  for (size_t i = 0; i <k; i++)
  {
    cout<<a[i];
  }
  delete []a;
}

int DecHexa(int x)
{
  int *a;
  a=new int[100];
  int k=0;
  while(x>0)
  {
    a[k]=x%16;
    x=x/16;
    k++;
  }
  reverse(a,a+k);
  cout<<"Hexa:";
  for (size_t i = 0; i <k; i++)
  {
    if(a[i]>=10)
    {
      a[i]=a[i]+55;
      printf("%c ",a[i] );
    }
    else
    {
        cout<<a[i];
    }
  }
  delete []a;
system("pause");
}
