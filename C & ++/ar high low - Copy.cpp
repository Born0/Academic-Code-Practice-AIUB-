#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
  int x[5];
  int i,h;
  for(i=0;i<5;i++)
  {
    x[i]=rand();
  }
  h=x[0];
  for (i = 0; i<5; i++)
   {
    if (x[i]>h)
    {
      h=x[i];
    }
   }
   cout<<h;
}
