#include<iostream>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

main()
{
    char a[]="ABCD";
    int k=sizeof(a);
    reverse(a,a+k);
    for (size_t i = 0; i < k; i++)
    {
        cout<<a[i]<<" ";
    }
}
