#include <iostream>
using namespace std;
void fn();
main()
{
   cout<<"Main"<<endl;
   fn();
}

void fn()
{
  cout<<"FN"<<endl;
  fn();
}
