#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

main()
{
  string b;
  b="ABCDE";
  int dec=0;
  int x[5];
  int i,k=0;
  if(b[2]=='C')
  {
    b[2]='A';
  }

  for(i=0;i<5;i++)
  {
      cout<<b[i]<<" ";
  }
}
