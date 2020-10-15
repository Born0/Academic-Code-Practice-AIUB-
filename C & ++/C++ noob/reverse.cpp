#include<iostream>
#include<bits/stdc++.h>

using namespace std;

main()
{
  string a="ABCD";
  int k=a.length();
  reverse(a,a+k);
  for (size_t i = 0; i < k; i++)
  {
      cout<<a[i];
  }
}
