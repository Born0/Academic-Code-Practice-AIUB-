#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
  int x;
  int i,k=0;
  for( ; ; )
  {
      x=rand();
      if(x>=10 && x<100)
      {
        cout<<x<<endl;
        k++;
      }
      if(k==10)
      {
        break;
      }
  }
}
