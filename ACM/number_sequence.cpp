#include<iostream>
#include <bits\stdc++.h>
#include <vector>
using namespace std;

long long Cycle_lenght(long long n);

main(){
  long long  i,j,k,max;
  std::vector<long long> v;

  std::cin >>i>>j ;
  for(k=i;k<=j;k++){
    v.push_back(Cycle_lenght(k));
  }
  max=*max_element(v.begin(),v.end());
  std::cout<< i <<" " << j <<" "<< max << '\n';
}
long long Cycle_lenght(long long n){
  long long lenght=1;
  while (n!=1) {
    if(n==0){
      break;
    }
    else if (n%2==0) {
      n/=2;
    }
    else{
      n*=3;
      n+=1;
    }
    lenght++;
  }
  return lenght;
}
