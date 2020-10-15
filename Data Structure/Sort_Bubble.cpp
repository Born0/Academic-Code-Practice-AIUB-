#include<iostream>

main()
{
    int arr[]={5,2,8,6,4,3,7,1};
    int i,j,k;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n;i++)
    {
      for(j=0;j<n-i-1;j++)
      {
        if(arr[j+1]<arr[j])
        {
          std::swap(arr[j+1],arr[j]);
        }

        std::cout<<"    "<<i<<" times:"<<std::endl;
        for(k=0;k<n;k++)
        {
            std::cout<<arr[k]<<"\t";
        }
        std::cout<<std::endl;
      }
    }

      /*std::cout<<"Final:"<<std::endl;
        for(i=0;i<size;i++)
        {
            std::cout<<arr[i]<<"\t";
        }*/
}
