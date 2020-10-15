#include<iostream>
using namespace std;
void swap(int *a,int*b)
{
  int t=*a;
  *a=*b;
  *b=t;
}

main()
{
    int arr[]={5,2,8,6,4,3,7,1};
    int i,j,k;
    int n=sizeof(arr)/sizeof(arr[0]);
    int cMin,rMin;

    for(i=0;i<n;i++)
    {
      cMin=i;
      for(j=i+1;j<n;j++)
      {
        if(arr[j]<arr[cMin])
          cMin=j;
          
      }
      swap(&arr[cMin],&arr[i]);
    }

cout<< endl<<endl;

    for(i=0;i<n;i++)
    {
        std::cout<<arr[i]<<"\t";
    }
  }
