#include<iostream>
using namespace std;
main()
{
  char firstValue,nextValue;
  char *firstLoc,*nextLoc;

  char c1,c2,c3;

  cin>>c1;
  firstValue=c1;

  cin>>c2;
  nextValue=c2;
  firstLoc=&c2;

  cout<<firstValue<<"   "<<nextValue<<"    "<<&firstLoc<<endl<<endl;

}
