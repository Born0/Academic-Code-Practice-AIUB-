#include<iostream>
#include <vector>
using namespace std;

main(){
  vector<int>v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(5);
  v.push_back(7);
  for(auto i:v){
    cout<<i;
  }
}
