#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

main()
{
  string b;
  cout<<"Enter Hexa number : Use CAPITAL letter:";
  cin>>b;
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
    if(b[i]>='A'||)
    {
      x[i]=b[i]-55;
    }
  }
  reverse(x,x+k);
  for(i=0;i<k;i++)
  {
    dec=dec+x[i]*pow(16,i);
  }
    cout<<"Decimal:"<<dec;
}
