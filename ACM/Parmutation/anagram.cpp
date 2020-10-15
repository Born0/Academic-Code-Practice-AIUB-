#include <iostream>
#include <bits/stdc++.h>
using namespace std;

main(){
  int t;
  cin>>t;
  while(t--){
    string a,b;
    cin>>a>>b;
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  int al=a.length();
  int bl=b.length();
  int length=min(al,bl);
  string result(length,'\0');
  set_intersection(  a.begin(),a.end(),  b.begin(),  b.end(), result.begin());
  int i=0,count=0,total=0;
  while(result[i]!='\0'){
    count++;
    i++;
  }
  total=(al-count)+(bl-count);

  cout<<total;
}
}
