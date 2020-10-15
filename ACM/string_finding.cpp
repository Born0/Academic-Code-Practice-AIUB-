#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
main()
{
  string x="he wants the cat.";
  string a[4],b[10];
  int i,j,k;
  int count;
  cout<<x[0]<<endl<<endl;

  for(i=0;x[i]!='.';i++)
  {
    count=0;
    if(j==0)
    {
      for(j=0;x[j]!=' ';j++)
      {
        count++;
        cout<<x[j]<<endl;
      }
    }

    else
    {
      for(j=j+1;x[j]!=' ';j++)
      {
        count++;
        cout<<x[j]<<endl;
      }
    }
    cout<<setw(20)<<count<<endl;
  }
}
