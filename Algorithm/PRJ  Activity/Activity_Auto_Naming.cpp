#include <iostream>
#include <bits/stdc++.h>

void Sort_Obj();
void Selection();

static int count=0;

class Activity{
public:
  char name;
  int start;
  int finish;
  Activity(){}
  Activity(char nm,int st,int fs){
    name=nm;
    start=st;
    finish=fs;
    count++;
  }
};

void print(Activity obj[],int size);

Sort_Obj(Activity *obj,int size){
    int i,j;
    Activity k;
    for(i=1;i<size;i++){
        k=obj[i];
        j=i-1;
        while(k.finish < obj[j].finish && j>=0)
        {
          obj[j+1]=obj[j];
          j--;
        }
        obj[j+1]=k;
    }
    //print(obj,size);
}


void print(Activity obj[],int size){
  for (size_t i = 0; i < size; i++) {
    std::cout << obj[i].name<<'\t'<<obj[i].start<<'\t'<<obj[i].finish << '\n';
  }
}

void Selection(Activity obj[]){
  int k=0,i=0;
  char selected[count+1];
  selected[k]=obj[0].name;
  k++;
    for (size_t j = 1; j < count+1; j++) {
      if(obj[i].finish<=obj[j].start){
          selected[k]=obj[j].name;
          k++;
          i=j;
      }
  }
  std::cout << "k=" <<k<< '\n';
  std::cout <<"\n\n"<< "Selected activities are: " << '\n';
  for (size_t i = 0; i < k; i++) {
    std::cout << selected[i] << '\t';
  }
}

main(){
  std::cout << "Enter number of Obj : ";
  int size;
  std::cin >> size;
  Activity obj[11];
  char name='A';
  int start;
  int end;
  for (size_t i = 0; i < size; i++) {

    std::cout << "Activity Name : "<<name;
    std::cout <<'\n'<< "Enter start time:";
    std::cin >> start;
    std::cout << "Enter end time:";
    std::cin >> end;
    std::cout  << '\n';

    obj[i]=Activity(name,start,end);
    name++;
  }
  Sort_Obj(obj,size);
  Selection(obj);
}
