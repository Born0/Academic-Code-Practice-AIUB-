#include<iostream>
#include <algorithm>

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
    a[k]=x%8;
    x=x/8;
    k++;
  }
  reverse(a,a+k);
  cout<<"Octal:";
  for (size_t i = 0; i <k; i++)
  {
    cout<<a[i]<<" ";
  }
}
