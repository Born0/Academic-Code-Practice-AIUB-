#include <iostream>
#include <bits/stdc++.h>

void Sort_Obj();
void Selection();


static int count=0;

class Activity{
public:
  std::string name;
  int start;
  int finish;
  Activity(){}
  Activity(std::string nm,int st,int fs){
    name=nm;
    start=st;
    finish=fs;
    count++;
  }
};


/*void Sort_Obj(Activity obj[]){
  std::sort(obj->finish,(obj->finish)+3);
}*/

void Selection(Activity obj[]){
  int k=1;
  std::string selected[count+1];
  Activity newVlue=obj[0];
  selected[0]=newVlue.name;

  for (size_t i = 1; i < count+1; i++) {
    for (size_t j = 2; j < count+1; j++) {
      if(newVlue.finish<=obj[j].start){
          newVlue=obj[j];
          selected[k]=newVlue.name;
          k++;
      }
    }
  }

  std::cout <<"\n\n"<< "Selected activities are: " << '\n';
  for (size_t i = 0; i < k+1; i++) {
    std::cout << selected[i] << '\t';
  }
}

main(){
  Activity obj[11];
  std::string name;
  int start;
  int end;
  for (size_t i = 0; i < 4; i++) {

    std::cout << "Enter Name:";
    std::cin >> name;
    std::cout << "Enter start time:";
    std::cin >> start;
    std::cout << "Enter end time:";
    std::cin >> end;
    std::cout  << '\n';

    obj[i]=Activity(name,start,end);
  }
  //Sort_Obj();
  Selection(obj);
}
