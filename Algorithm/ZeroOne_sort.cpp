#include <iostream>

 void ZeroOne(int arr[]);

 static int count=0;

 void ZeroOne(int arr[],int size){
   int i;
   for (i = 0; i < size; i+=2) {
      if(arr[i]>arr[i+1]){
        std::swap(arr[i],arr[i+1]);
      }
   }

   for (i = 1; i < size; i+=2) {
      if(arr[i]>arr[i+1]){
        std::swap(arr[i],arr[i+1]);
      }
   }

   count++;
   if(count<=size/2){
     ZeroOne(arr,size);
   }
   else{
     for(i=0;i<size;i++){
       std::cout << arr[i] << '\t';
     }
   }
 }

 main(){
   int arr[]={1,4,1,2,7,5,2};
   int size=sizeof(arr)/sizeof(arr[0]);
   ZeroOne(arr,size);
 }
