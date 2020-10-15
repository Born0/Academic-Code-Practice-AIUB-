#include <iostream>

static int count=0;

class Node{
public:
  int data;
  Node *prev;
  Node *next;
};

void creatNode(int key);
void insertByData(int search,int key,char operation);
void insertByPos(int pos,int key);
void iAfter(Node* cNode,int key);
void iBefore(Node* cNode,int key);
void toDelete(Node* cNode);
void deleteData(int key);
void deletePos(int pos);
void display();

Node *head=NULL;

void creatNode(int key){
  Node *cNode=new Node;
  cNode=head;
  Node *nNode=new Node;
  nNode->data=key;
  nNode->prev=NULL;
  nNode->next=NULL;
  if(cNode==NULL){
    head=nNode;
  }
  else{
    while(cNode->next!=NULL){
      cNode=cNode->next;
    }
    cNode->next=nNode;
    nNode->prev=cNode;
  }
  count++;
}

void insertByData(int search,int key,char operation){
  Node *cNode=new Node;
  cNode=head;
  while(cNode->data!=search){
    cNode=cNode->next;
  }
  if(operation=='a'){
    iAfter(cNode,key);
  }
  else if(operation=='b'){
    iBefore(cNode,key);
  }
}

void insertByPos(int pos,int key){
  Node *cNode=new Node;
  cNode=head;
  if(pos==1){
    iBefore(cNode,key);
  }
  else{
    for (size_t i=1;i<pos-1;i++){
      cNode=cNode->next;
    }
    iAfter(cNode,key);
  }
}

void iAfter(Node* cNode,int key){
  Node *nNode=new Node;
  nNode->data=key;
  nNode->next=cNode->next;
  nNode->prev=cNode;
  cNode->next=nNode;
  count++;
}

void iBefore(Node* cNode,int key){
  Node *nNode=new Node;
  nNode->data=key;
  nNode->prev=cNode->prev;
  nNode->next=cNode;
  cNode->prev=nNode;
  if(cNode==head){
    head=nNode;
  }
  else{
    nNode->prev->next=nNode;
  }
  count++;
}

void toDelete(Node* cNode){
  Node *temp;
  if(cNode->prev!=NULL){
    cNode->prev->next=cNode->next;
  }
  if(cNode->next!=NULL){
      cNode->next->prev=cNode->prev;
    }
    temp=cNode;
  delete temp;
  count--;
}
void deleteData(int key){
  Node *cNode=new Node;
  cNode=head;
  if(cNode->data==key){
    cNode->next->prev=NULL;
    head=cNode->next;
  }
  else{
    while(cNode->data!=key){
      cNode=cNode->next;
    }
  }
  toDelete(cNode);
}
void deletePos(int pos){
  Node *cNode=new Node;
  cNode=head;
  if(pos==1){
    cNode->next->prev=NULL;
    head=cNode->next;
  }
  else{
    for (size_t i=1;i<pos;i++){
      cNode=cNode->next;
    }
  }
  toDelete(cNode);

}

void display(){
  Node *cNode=new Node;
  cNode=head;
  std::cout<<"Data List :\t";
  while(cNode!=NULL){
    std::cout<<cNode->data<<'\t';
    cNode=cNode->next;
  }
  std::cout<<"\nNode count : "<<count;
}

main()
{
  creatNode(22);
  creatNode(33);
  creatNode(66);

  // Insertion Operation
  insertByPos(1,11);            // 11 will be added at position 1
  insertByData(66,44,'b');    // data: 44 will be added before 66
  insertByPos(5,55);           // 55 will be added at position 5
  insertByData(66,77,'a');    // data: 77 will be added after  66
  insertByPos(8,88);           // 88 will be added at position 8

  // Deletion Operation
  deletePos(5);
  deletePos(7);
  deletePos(1);
  display();
}
