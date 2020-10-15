#include <iostream>
#include <bits/stdc++.h>

void greedyMin(int arr[],int size,int total){
  int count=0,i=0,j=0;
  int *brr=new int[1000];

  for (int i=0; i<size; i++){
		while (total >= arr[i]){
		    total -= arr[i];
        brr[j]=arr[i];
        j++;
		}
	}
  std::cout << "Minimum  coin:" << '\n';
  for(int k=0;k<j;k++){
    if(brr[k]!=0){
      std::cout << brr[k] << '\t';
    }
  }
  delete[]brr;
}

void greedyMax(int arr[],int size,int total){
  int count=0,i=0,j=0;
  int *brr=new int[1000];

  for (int i=size-1; i>=0; i--){
    while (total >= arr[i]){
        total -= arr[i];
        brr[j]=arr[i];
        j++;
    }
  }

std::cout << "Maximum Coins : " << '\n';

  for(int k=0;k<j;k++){
    if(brr[k]!=0){
      std::cout << brr[k] << '\t';
    }
  }
  delete[]brr;
}




main(){
  int arr[]={1,5,10,25};
  int size=4;
  int total=17;
  std::sort(arr,arr+4,std::greater<int>());
  greedyMin(arr,size,total);
  greedyMax(arr,size,total);
}
