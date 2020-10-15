#include<iostream>
using namespace std;
main()
{
	int m[100];
	int i,s,sum=0;
	cout<<"enter size:"<<endl;
	cin>>s;
	cout<<"enter numbers:"<<endl;
	for(i=0;i<s;i++)
    {
        cin>>m[i];
    }
	for(i=0;i<s;i++)
    {

        sum=sum+m[i];
        cout<<sum<<endl;
    }

    cout<<"sum="<<sum<<endl;
}
