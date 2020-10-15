#include <iostream>
#include <bits/stdc++.h>
void countSort(int arr[],int n);

main(){
  int arr[]={1,2,3,3,2,10,4,5,13,3,10};
  int size=sizeof(arr)/sizeof(arr[0]);
  countSort(arr,size);
}

void countSort(int arr[],int n){
  int count=0;
  int k=0;
  for (size_t i = 0; i <n; i++) {
    count=std::max(count,arr[i]);
  }
  count+=1;
  int *crr=new int[count];
  for (size_t i = 0; i < count; i++) {
    crr[i]=0;
  }

  for (size_t j = 0; j < n; j++) {
    crr[arr[j]]++;
  }

for (size_t i = 0; i < count; i++) {
    if(crr[i]!=0){
      std::cout << i << '\t';
      crr[i]--;
      i--;
    }
}

  delete []crr;
}
