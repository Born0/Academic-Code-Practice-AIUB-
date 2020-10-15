#include <iostream>
#include <bits/stdc++.h>
using namespace std;

static int counter=0;
void Vcount(string s){
  int cnt=0;
  cnt+=count(s.begin(),s.end(),'A');
  cnt+=count(s.begin(),s.end(),'E');
  cnt+=count(s.begin(),s.end(),'I');
  cnt+=count(s.begin(),s.end(),'O');
  cnt+=count(s.begin(),s.end(),'U');
  cnt+=count(s.begin(),s.end(),'a');
  cnt+=count(s.begin(),s.end(),'e');
  cnt+=count(s.begin(),s.end(),'i');
  cnt+=count(s.begin(),s.end(),'o');
  cnt+=count(s.begin(),s.end(),'u');
  counter+=cnt;
}

main(){
  int i,k,n,t;
  string s,sub;
  cin>>t;
  while(t--){
    counter=0;
    cin>>s;
  n=s.length();
  n-=1;
  i=0;
  k=1;
  while(s[i+1]!='\0'){
    sub="\0";
    sub.append(s,i,k);
    Vcount(sub);
    if(i+k-1==n){
      i++;
      k=1;
    }
    else{k++;}
  }
  cout<<counter<<'\n';
}
}
