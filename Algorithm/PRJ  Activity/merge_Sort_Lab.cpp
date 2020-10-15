#include <iostream>
#include <bits/stdc++.h>
void mergeShort(Activity obj[],int h,int t);
void merge(Activity obj[],int h,int m,int t);

void mergeShort(Activity obj[],int h,int t){
  int mid=(h+t)/2;
  if(h<t){
    mergeShort(obj,h,mid);
    mergeShort(obj,mid+1,t);
    merge(obj,h,mid,t);
  }
}

void merge(Activity obj[],int h,int mid,int t){
    int n1=mid-h+1;
    int n2=t-mid;
    Activity left[n1];
    Activity right[n2];
    int i,j,k;
    for ( i = 0; i <n1; i++) {
      left[i]=obj[h+i];
    }
    for ( j = 0; j <n2; j++) {
      right[j]=obj[mid+j+1];
    }

    left[n1+1].finish=INT_MAX;
    right[n2+1].finish=INT_MAX;
    i=0;
    j=0;
    for(k=h;k<=t;k++){
      if(left[i].finish<=right[j].finish){
        obj[k]=left[i];
        i++;
      }
      else{
        obj[k]=right[j];
        j++;
      }
    }
}

void Sort(Activity obj[],int size){
  mergeShort(obj,0,size-1);
}
