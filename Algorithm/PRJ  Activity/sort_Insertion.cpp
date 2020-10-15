#include<iostream>

main()
{
    int arr[]={5,2,8,6,4,3,7,1};
    int i,j,k;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<n;i++)
    {
        k=i;
        j=i-1;
        while(k<arr[j] && j>=0)
        {
          arr[j+1]=arr[j];
          j--;
        }
        arr[j+1]=k;
    }

    for(i=0;i<n;i++)
    {
        std::cout<<arr[i]<<"\t";
    }

}
