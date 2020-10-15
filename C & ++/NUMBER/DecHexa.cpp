#include<iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

main()
{
  int x;
  cout<<"Enter  Decimal number:";
  cin>>x;
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
      cout<<a[i]<<" ";
    }
  }
}
