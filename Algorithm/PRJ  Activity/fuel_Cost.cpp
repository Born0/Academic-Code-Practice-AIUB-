#include <iostream>
#include <bits/stdc++.h>
void testCase();
void fuelCost(long long*check,long long*cost,long longnCheckPoint);
main(){
  long longtest;
  std::cin >> test;
  while(test>0){
    testCase();
    test--;
  }
}
void testCase(){
  long longnCheckPoint;
  std::cin >> nCheckPoint;
  long longprice[nCheckPoint];
  long longammount[nCheckPoint];
  for (size_t i = 0; i < nCheckPoint; i++) {
    std::cin >> price[i];
  }
  for (size_t i = 0; i < nCheckPoint; i++) {
    std::cin >> ammount[i];
  }
  fuelCost(price,ammount,nCheckPoint);
}
void fuelCost(long long*price,long long*ammount,long longnCheckPoint){
  long longtotal=0,minimun=2147483647;
  for (size_t i = 0; i < nCheckPoint; i++) {
    minimun=std::min(minimun,price[i]);
    total+=minimun*ammount[i];
  }
  std::cout << total;
}
