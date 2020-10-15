#include <iostream>
#include <bits/stdc++.h>
using namespace std;

static int k=0;
int brr[99999999];


void Vcount(string s){
  int i,j,r=0,sl=s.length();

    sort(s.begin(),s.end());

    for(i=0;i<sl;i++){
      if(s[i]==s[i+1]){
        sl--;
      }
    }
    brr[k]=sl;
    k++;

}

main(){
  int i,k,n,t,j=0;
  string s,sub;
    cin>>s;
  n=s.length();
  n-=1;
  i=0;
  k=1;
  while(s[i+1]!='\0'){
    sub="\0";
    sub.append(s,i,k);
    Vcount(sub);
      j++;
    if(i+k-1==n){
      i++;
      k=1;
    }
    else{k++;}
  }
  for(i=0;i<j;i++){
  }
sort(brr, brr+j, greater<int>());
cout<<brr[0]<<endl;

}
