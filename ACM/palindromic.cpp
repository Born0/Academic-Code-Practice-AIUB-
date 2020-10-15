#include <iostream>
#include <string.h>
using namespace std;

main(){
  string s;
  getline(cin,s);
  bool flag=false;
  int size=s.length();
  int i,j=size-1;
  for(i=0;i<size;i++){
    if(s[i]!=s[j]){
      flag=true;
    }
    j--;
  }
  if(flag){
    std::cout << "NO" << '\n';
  }
  else{
    std::cout << "YES" << '\n';
  }
}
