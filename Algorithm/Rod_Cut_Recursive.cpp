#include <iostream>
#include<bits/stdc++.h>
int cut_rod(int *p,int n);

int main(){
  int arr[]={1,5,8,9,10,17,17,20,24,30};
  int n;
  std::cin >> n;
    std::cout <<cut_rod(arr,n)<< '\n';
    return 0;
}

int cut_rod(int *p,int n){
  if(n<=0){
    return 0;
  }
    int q=INT_MIN;
    for (size_t i = 0; i < n; i++) {
      q = std::max(q,p[i])+cut_rod(p,n-i-1);
    }
    return q;
}
