#include <iostream>
#include <bits/stdc++.h>
void mergeShort(int arr[],int h,int t);
void merge(int arr[],int h,int m,int t);

void mergeShort(int arr[],int h,int t){
  int mid=(h+t)/2;
  if(h<t){
    mergeShort(arr,h,mid);
    mergeShort(arr,mid+1,t);
    merge(arr,h,mid,t);
  }
}

void merge(int arr[],int h,int mid,int t){
    int n1=mid-h+1;
    int n2=t-mid;
    int left[n1];
    int right[n2];
    int i,j,k;
    for ( i = 0; i <n1; i++) {
      left[i]=arr[h+i];
    }
    for ( j = 0; j <n2; j++) {
      right[j]=arr[mid+j+1];
    }

    left[n1+1]=INT_MAX;
    right[n2+1]=INT_MAX;
    i=0;
    j=0;
    for(k=h;k<=t;k++){
      if(left[i]<=right[j]){
        arr[k]=left[i];
        i++;
      }
      else{
        arr[k]=right[j];
        j++;
      }
    }
}

main(){
  int arr[5]={3,2,5,4,1};
  int size=sizeof(arr)/sizeof(arr[0]);
  mergeShort(arr,0,size-1);
  for(int i:arr){
    std::cout << i<< '\t';
  }
}
