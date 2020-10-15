#include <iostream>
using namespace std;

int arr[]={12,10,8,14,2,9,7,6,15,1,5,3,4,16,18,11,13,22,23};

void minheap(int p){
  int l=0,r=0;
  l=(p*2)+1;
  r=(p*2)+2;
  if(arr[r]!=0){
    if(arr[l]<arr[r]){
        if(arr[p]>arr[l]){
          swap(arr[p],arr[l]);
        }
    }
    else{
      if(arr[p]>arr[r]){
        swap(arr[p],arr[r]);
      }
    }
  }
  if(p!=0){
    minheap(p-1);
  }
}

main(){

  int n=sizeof(arr)/sizeof(arr[0]);
  int i;
  cout<<endl<<endl<<"Min heap : "<<endl;
  for(i=0;i<n/2;i++){
      minheap(n/2);
  }
  cout<<endl;
  for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
