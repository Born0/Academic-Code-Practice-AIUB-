#include <iostream>
#include <bits/stdc++.h>
// #include "Vowel_Count.cpp"
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


int main(){
  string s,check,temp="\0";
  s="baceb";
  //cin>>s;
  int i,size=5,n=4;
  int x=0;

  while(x<=n){
    temp=s[x];
    Vcount(temp);
    //cout<<temp<<'\t';
    x++;
  }
  //cout<<'\n';
  int k=1,y=1,z=2;
  x=0;
  check="\0";
  check.append(s,3,2);
  while(temp!=check){
      temp="\0";
      temp+=s[x];
      temp+=s[x+k];
      Vcount(temp);
      //cout<<temp<<'\t';
    if( s[x+k]==s[n]){
      x++;
      k=1;
      //cout<<'\n';
    }
    else {k++;}
  }


  check="\0";
  check.append(s,2,3);

  k=1;
  x=0;
  y=1;
  z=2;
  while(temp!=check){
      temp="\0";
      temp+=s[x];
      temp+=s[y];
      temp+=s[y+k];
      Vcount(temp);
      //cout<<temp<<'\t';

      if( s[y+k]==s[n] && s[y]==s[n-1]){
        x++;
        y=x+1;
        k=1;
        //cout<<'\n';
      }
    else if( s[y+k]==s[n] ){
      y++;
      k=1;
      //cout<<'\n';
    }
    else {k++;}
  }

  check="\0";
  check.append(s,1,4);
   k=1;
   x=0;
    y=1;
    z=2;
  while(temp!=check){
      temp="\0";
      temp+=s[x];
      temp+=s[y];
      temp+=s[z];
      temp+=s[z+k];
    Vcount(temp);
      //cout<<temp<<'\t';
    if(s[z+k]==s[n] && s[z]==s[n-1] && s[y]==s[n-2]){
      x++;
      y=x+1;
      z=y+1;
      k=1;
      //cout<<'\n';
    }

    else if( s[z+k]==s[n] && s[z]==s[n-1]){
      y++;
      z=y+1;
      k=1;
      //cout<<'\n';
      }
    else if( s[z+k]==s[n] ){
      z++;
      k=1;
      //cout<<'\n';
    }
    else{k++;}
  }
  temp=s;
  Vcount(temp);
  cout<<counter<<'\n';

}
