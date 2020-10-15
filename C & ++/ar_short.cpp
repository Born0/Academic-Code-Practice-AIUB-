#include <iostream>
#include <bits/stdc++.h>

main()
{
  int arr[]={5,7,62,4,5};
  int n;
  n=sizeof(arr)/sizeof(arr[0]);
  std::sort(arr,arr+n,std::greater <int>() );

  for (size_t i = 0; i < n; i++) {
    std::cout << arr[i] << '\n';

  }
}
