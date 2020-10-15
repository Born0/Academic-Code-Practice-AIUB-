#include<iostream>

using namespace std;
main()
{
	int a,b,c,res;
	int i;
	cin>>a>>b;
	c=a;
	for(i=1;i<b;i++)
    {
        res=c*a;
        c=res;

    }
    cout<<res;
}
