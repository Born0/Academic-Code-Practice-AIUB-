#include<iostream>

using namespace std;
main()
{
	char a='x',b=' ';
	int i,j,k;
	int c=3,l=1,d=3;
	for(i=0;i<3;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a;
        }
        c--;
        cout<<'A';
        for(j=0;j<d;j++)
        {
            cout<<a;
        }
        d--;

        cout<<endl;
        for(k=0;k<l;k++)
        {
            cout<<b;
        }
        l++;



    }

}
