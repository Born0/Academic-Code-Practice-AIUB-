#include<iostream>
using namespace std;
main()
{
	char a[100];
	int i,j=0;
	int c=0;
	cin.get(a,100);
	for(i=0;a[i]!=' ';i++)
    {
        c++;
    }
    cout<<"1 nb word's lenth is:"<<c<<endl;
    while(a[j]!='\0')
    {
        c=0;
        for(i=i+1;a[i]!=' ';i++)
        {
            c++;
        }
        j++;
        cout<<j+1<<"nb word's lenth is:"<<c<<endl;
    }
}
