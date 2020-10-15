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
    a[k]=x%2;
    x=x/2;
    k++;
  }
  cout<<"k:"<<k<<endl;
  reverse(a,a+k);
  cout<<"Binary:";


int i;


  for ( i = 0; i <k; i++)
  {
    cout<<a[i]<<" ";
  }
}
