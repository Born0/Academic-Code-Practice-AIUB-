#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using namespace std;

main()
{
  int b;
  cout<<"Enter Octal number:";
  cin>>b;
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
  cout<<"Decimal:"<<dec;
}
