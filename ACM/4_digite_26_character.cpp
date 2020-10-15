#include<iostream>
using namespace std;

main(){
  char one='A',two='A',three='A',four='A';
  long i,k=0;
  bool flag=false;
  for(i=0;i<457000;i++){
     if(one<='Z'){
       if(one<='Z'){//cout<<one;
         if(two>'Z'){
           one++;
           two='A';
         }
       }
      if(two<='Z'){//cout<<two;
        if(three>'Z'){
          two++;
          three='A';
        }
      }
      if(three<='Z'){//cout<<three;
        if(four>'Z'){
          three++;
          four='A';
        }
      }
      if(four<='Z'){//cout<<four;
        four++;}
      //cout<<'\t';
      k++;
    }
    if(one=='i' && two=='N' && three=='D' && four=='M'){
      cout<<one<<two<<three<<four;
      flag=true;
      break;
    }
  }
  //cout<<'\t'<<k;
  if (flag==false){
    std::cout << "You Fucked Up !!" << '\n';
  }
}
