#include <iostream>
using namespace std;
const long long M=1000000007;

main(){
  long long n,i,res=1;
  cin>>n;
  long long a[n];
  for(i=0;i<n;i++){
    cin>>a[i];
    res=(res*a[i])%M;
  }
  std::cout << res;
}
