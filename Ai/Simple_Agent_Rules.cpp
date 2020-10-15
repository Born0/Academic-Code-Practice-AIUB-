#include <iostream>
void Reflex_vacuum_agent(std::string room,std::string status);

std::string rules[3][3]={"Loc/Stat","Clean","Dirt",
                         "A","Move","Suck",
                         "B","Move","Suck"};

main(){
  std::string room,status;
  std::cout << "Room(A or B) and status(Dirt or Clean):";
  std::cin >> room>> status;
  Reflex_vacuum_agent(room,status);
}
void Reflex_vacuum_agent(std::string room,std::string status){
  int actI,actJ;
  int i,j;
  for ( i = 0; i < 3; i++) {
    if(rules[i][0]==room){actI=i;}
  }
  for ( j = 0; j < 3; j++) {
    if(rules[0][j]==status){actJ=j;}
  }
   std::cout << "Action: " <<rules[actI][actJ]<< '\n';
   if(actJ==2){std::cout << "Move next room " << '\n';}
  }
