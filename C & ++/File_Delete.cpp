#include <iostream>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
main()
{
  bool st;
  char file[20];
  for(int i=0;i<5;i++)
  {
    cout<<"Enter File Name:";
    gets(file);
    if(remove(file)==1)
    {
      st=1;
    }
    if(st=1)
     {
       cout<<"Removed"<<endl;
     }
     else
     {
       cout<<"Not"<<endl;
     }
   }

}
