#include<iostream>
using namespace std;
class Node
{
public:
  int value;
  Node *next;
};
Node *head=NULL;
void insertAtFirst(int key)
{
  Node *newNode;
  newNode=new Node;
  newNode->value=key;
  newNode->next=head;
  head=newNode;

}
void insertAt(int pos,int key)
{

}
void insertAtlast(int key)
{
  Node *currentNode;
  currentNode=head;
  while(currentNode->next!=NULL)
  {
    currentNode=currentNode->next;
  }

  Node *nnode=new Node;
  nnode->value=key;
  nnode->next=NULL;
  currentNode->next=nnode;
}
void Count()
{
  Node *currentNode=head;
  while(currentNode!=NULL)
  {

  }
}
void printList()
{
  Node *currentNode;
  currentNode=head;
while(currentNode!=NULL)
{
  cout<<currentNode->value<<endl;
  currentNode=currentNode->next;

}

}
int main()
{
  insertAtFirst(1);
  insertAtlast(2);
  insertAtlast(3);
  insertAtlast(4);
  insertAtlast(5);
  printList();

  return 0;
}
