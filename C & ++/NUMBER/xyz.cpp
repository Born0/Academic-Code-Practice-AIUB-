#include <iostream>
using namespace std;
main()
{
  int a[]={1,2,3,4};
  int h;
  h=a[0];
  for (size_t i = 0; i < 4; i++) {
    if(h>a[i])
    {
      h=a[i];
    }
  }
  cout<<h;

}
