#include <iostream>
using namespace std;
void insert();
main()
{
  insert();
}
void insert()
{
  int i;
  int count;
   cout<<"Enter element number:";
   cin >> count;
   cout<<endl<<"Enter element";
  count=count+1;
  char a[count];
  for (size_t i = 0; i < count-1; i++) {
     cin>>a[i];
  }
for ( i = count-1; i = 1; i--) {
  a[i+1]=a[i];
}
a[1]='x';
  for (i = 0; i <count; i++) {
     cout<<a[i]<< endl;
  }
}
