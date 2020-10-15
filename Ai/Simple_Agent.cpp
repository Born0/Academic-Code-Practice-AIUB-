#include <iostream>
void Reflex_vacuum_agent(char room,bool status);

main(){
  char room;
  bool status;
  std::cout << "Room(A or B) and status(1 for Dirt 0 for Clean):";
  std::cin >> room>> status;
  Reflex_vacuum_agent(room,status);
}

void Reflex_vacuum_agent(char room,bool status){
  char next;
  if(room=='A'){next='B';}
  else{next='A';}
  if(status){
    std::cout << "SUCk" << '\n';
    std::cout << "Move to  room " <<next <<'\n';
  }
  else{
    std::cout << "Move to  room " <<next<< '\n';
  }
}
