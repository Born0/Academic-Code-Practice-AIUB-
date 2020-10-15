#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int stringINT(string b);
int BinDec(int b);
int OctDec(int b);
int HexaDec(string b);
int DecBin(int x);
int DecOct(int x);
int DecHexa(int x);

main()
{
  string a;
    cout<<"Enter any number :if HEXA, Use CAPITAL letter:";
    cin>>a;
  int  g;
    cout<<endl<<"Enter the base used for this number:"<<endl;
    cin>>g;

  int d;
  int x;
  if(g==2)
  {
    x=stringINT(a);
    d=BinDec(x);
    cout<<"Decimal:"<<d<<" ";
    cout<<endl<<endl;
    DecOct(d);
    cout<<endl<<endl;
    DecHexa(d);
    cout<<endl;
  }
  if(g==8)
  {
    x=stringINT(a);
    d=OctDec(x);
    cout<<"Decimal:"<<d<<" ";
    cout<<endl<<endl;
    DecBin(d);
    cout<<endl<<endl;
    DecHexa(d);
    cout<<endl;
  }
  if(g==10)
  {
      x=stringINT(a);
    DecBin(x);
    cout<<endl<<endl;
    DecOct(x);
    cout<<endl<<endl;
    DecHexa(x);
    cout<<endl;
  }
  if(g==16)
  {
    d=HexaDec(a);
    cout<<"Decimal:"<<d<<" ";
    cout<<endl<<endl;
    DecBin(d);
    cout<<endl<<endl;
    DecOct(d);
    cout<<endl;
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
  int x[100];
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
}

int OctDec(int b)
{
  int dec=0;
  int x[100];
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
}

int HexaDec(string b)
{
  int dec=0;
  int x[100];
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
}

int DecBin(int x)
{
  int a[100];
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
}

int DecOct(int x)
{
  int a[100];
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
}

int DecHexa(int x)
{
  int a[100];
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
}
