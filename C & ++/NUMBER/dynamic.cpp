#include <iostream>

using namespace std;

main()
{
  int *a=new int  [5];
  cout<<*a;
  delete []a;
}
