#include <bits/stdc++.h>
//@Ahmed Borno
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
  cout<<s<<" : "<<cnt<<'\n';
  cout<<"\t\t\t\t"<<counter<<'\n';
}
int main() {
  
}

