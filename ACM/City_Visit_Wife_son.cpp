#include <iostream>
using namespace std;
const long long size=1000000007;

long long power(long long n){
  long long res=2;
  size_t i=0;
  while(i<n-1){
    res=(res*2)%size;
    i++;
  }
  return res;
}

int main(){
    int t;
  long long n;
  cin >> t;
  while(t--){
    cin >> n;
    if(n==0){
      cout << 1 << '\n';
    }
    else
      cout<<(power(n)%size)-1<<'\n';
  }
  return 0;
}
