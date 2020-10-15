#include <iostream>
using namespace std;

int main(){
  int number,j=2,n=2;
  bool flag;
  cin >> number;
  while(n<number){
    flag=false;
    j=2;
    while(j<n && j!=n){
      if(n%j==0){
        flag=true;
      }
      j++;
    }
    if(!flag){
      cout<<n<<' ';
    }
    n++;
  }
  return 0;
}
