#include<iostream>
#include<cstdlib>

using namespace std;
main()
{
	char x[]="1234",y;
   int i,res=0;
   for(i=0;x[i]!='\0';i++)
   {
       res=res+x[i];
       res=res-48;

   }
   cout<<res<<endl;

}
