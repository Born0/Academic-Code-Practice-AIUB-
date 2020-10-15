#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*template<class t>
void show(t x){
  std::cout << x << '\n';
}*/

std::vector<int> v;

main(){
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  std::cout << "before : " << '\n';
  for (size_t i = 0; i < v.size(); i++) {
    std::cout << v[i] << '\n';
  }

  v.pop_back();
  std::cout << "after : " << '\n';
  for (size_t i = 0; i < v.size(); i++) {
    std::cout << v[i] << '\n';
  }
}

/*main(){
  int a=10;
  float b=20.5;
  char c='z';
  show(a);
  show(b);
  show(c);
}*/
