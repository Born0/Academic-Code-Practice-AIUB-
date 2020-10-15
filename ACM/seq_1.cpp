#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

main(){
  vector<long long> v;
  long long s,n,x,i,k,max,min,cost=0,cnt=0;
  cin>>s>>x;
for(i=0;i<s;i++){
  cin>>k;
  v.push_back(k);
}
  while(!v.empty()){
    n=v.size()-1;
    max=*max_element(v.begin(),v.end());
    min=*min_element(v.begin(),v.end());
    i=0;
    while(v[i]!=max){
      i++;
    }
    if(n-i<= x){
      cost+=n-i;
      v.erase(v.begin()+i);
    }
    else{
      i=0;
      while(v[i]!=min){
        i++;
      }
      cost+=x;
      v.erase(v.begin()+i);
    }
  }

  cout<<cost;
}
