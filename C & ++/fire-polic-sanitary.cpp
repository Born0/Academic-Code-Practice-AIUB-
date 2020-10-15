

#include<iostream>
#include<iomanip>
using namespace std;
main()
{
  int max=7,min=1;
  int i,j,l;
  int count=0;
  cout<<setw(20)<<"Fire Station"<<setw(25)<<"Police Station"<<setw(20)<<"Sanitary"<<endl<<endl;
    for(l=2;l<max;l+=2)
     {
       for(i=min;i<=max;i++)
       {
         for(j=min;j<=max;j++)
         {
          if(i!=l && j!=l && i!=j)
            {
              if(i+j+l==12)
                {
                  count++;
                  cout<<setw(13)<<i<<setw(25)<<l<<setw(23)<<j<<endl;
                }
              }
          }
       }
    }
    cout<<endl<<endl<<endl<<setw(50)<<"Total possible combination:"<<count<<endl<<endl<<endl;
}
