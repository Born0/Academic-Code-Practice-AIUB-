#include <iostream>

class Node{
public:
  int data;
  Node*prev;
  Node*next;
};
Node*head=NULL;
Node*tail=NULL;
Node creatNode(int key){
  Node*nNode=new Node;
  nNode->data=key;
  nNode->prev=NULL;
  nNode->next=NULL;
  if(head==NULL){
    head=nNode;
  }
  else{
    Node*cNode=head;
    while(cNode->next!=NULL){
      cNode=cNode->next;
    }
    cNode->next=nNode;
    nNode->prev=cNode;
    tail=nNode;
  }
}

void insertAfter(int value,int key){
  Node*nNode=new Node;
  nNode->data=key;
  nNode->prev=NULL;
  nNode->next=NULL;
  if(head!=NULL){
    Node*cNode=head;
    while(cNode->data!=value){
      cNode=cNode->next;
    }
    if(cNode->next==NULL){
      cNode->next=nNode;
      tail=nNode;
    }
    else{
      nNode->next=cNode->next;
      nNode->prev=cNode;
      cNode->next=nNode;
      nNode->next->prev=nNode;
    }
  }
  else{
    std::cout << "Empty List !!" << '\n';
  }
}

void display(){
  Node*cNode=tail;
  while(cNode!=NULL){
    std::cout << cNode->data << '\n';
    cNode=cNode->prev;
  }
}

main(){
  creatNode(25);
  creatNode(67);
  creatNode(54);
  creatNode(12);
  creatNode(75);
  creatNode(89);
  insertAfter(54,60);
  display();
}
