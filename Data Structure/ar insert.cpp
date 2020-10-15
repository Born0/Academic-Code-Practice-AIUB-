#include <iostream>
using namespace std;
main()
{
  int a[6]={1,2,3,4,5};
  for (size_t i = 6; i >4; i++) {
    a[i]=a[i+1];
  }
  a[4]=8;
  for (size_t i = 0; i <6; i++) {
    cout<<a[i]<<endl;
  }
}
