#include <iostream>
#include <bits/stdc++.h>
void countSort(int arr[],int n);

main(){
  int arr[]={1,4,1,2,7,5,2};
  int size=sizeof(arr)/sizeof(arr[0]);
  countSort(arr,size);
}

void countSort(int arr[],int n){
  int *brr=new int[n];
  for (size_t i = 0; i < n; i++) {
    brr[i]=0;
  }
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

  for (size_t i = 1; i < count; i++) {
    crr[i]=crr[i-1]+crr[i];
  }

  for (size_t i = 0; i < n; i++) {
    brr[crr[arr[i]]-1]=arr[i];
    crr[arr[i]]--;
  }

  for (size_t i = 0; i < n; i++) {
    arr[i]=brr[i];
  }

  for (size_t i = 0; i < n; i++) {
    std::cout << arr[i] << '\t';
  }
  delete [] brr;
  delete []crr;
}
