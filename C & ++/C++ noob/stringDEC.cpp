#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

main()
{
  string b;
  cin>>b;
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
  cout<<"Value:"<<value;
}
