#include <iostream>
using namespace std;
main()
{
  int arr[]={1,2,3,4,5,6,7,8,9};
  int key=8;
  int head=0,tail=9;
  bool found=false;
  int mid=(head+tail)/2;
  while(tail>=head)
  {
    mid=(head+tail)/2;
    if(arr[mid]==key)
    {
      cout<<"found : "<<key<<"   at possition : "<<mid;
      found=true;
      break;
    }
    else if(arr[mid]>key)
    {
      tail=mid-1;
    }
    else if(arr[mid<key])
    {
      head=mid+1;
    }
  }
  if(tail<head)
  {
    cout<<"not found !";
  }
}
