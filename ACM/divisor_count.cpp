#include <iostream>
using namespace std;

main(){
  int a,b,x;
  int count=0;
  cin>>a>>b>>x;
  for(int i=a;i<=b;i++){
    if(i%x==0){
      count++;
    }
  }
  cout<<count;
}
