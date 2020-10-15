#include <iostream>
using namespace std;

int main(){
  int n,block,max,seat;
  long long t;
  cin>>t;
  while(t--){
    cin>>n;
    if(n%12==0){
      seat=n-12+1;
      cout<<seat;
    }
    else{
      block=(n/12);
      max=12*(block+1);
      seat=max-n+1+(block*12);
      cout<<seat;
    }

    if(seat-n==1 || seat-n==-1 || seat-n==11 || seat-n==-11  ){cout<<" WS"<<'\n';}
    else if(seat-n==3 || seat-n==-3 || seat-n==9 || seat-n==-9){cout<<" MS"<<'\n';}
    else if(seat-n==5 || seat-n==-5 || seat-n==7 || seat-n==-7){cout<<" AS"<<'\n';}
     }
  return 0;
}
