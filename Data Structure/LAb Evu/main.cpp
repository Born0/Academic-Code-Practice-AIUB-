#include <iostream>

using namespace std;

#include<iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
};
Node *head=NULL;
void insertAtFirst(int key)
{
  Node *newNode=new Node;
  newNode->data=key;
  newNode->next=head;
  head=newNode;

}
void insertAt(int pos,int key)
{
    Node *currentNode=head;
    int index=0;
    for(index=0;index<pos;index++)
    {
        currentNode=currentNode->next;
    }
    Node *newNode=new Node;
    newNode->data=key;
    newNode->next=currentNode->next;
    currentNode->next=newNode;

}
void insertAtlast(int key)
{
  Node *currentNode;
  head=currentNode;
  while(currentNode->next!=NULL)
  {
    currentNode=currentNode->next;
  }

  Node *node=new Node;
  node->data=key;
  node->next=NULL;
  currentNode->next=node;
}

int count()
{
  int c=0;
  Node *currentNode=head;
  while (currentNode!=NULL)
  {
    c++;
    currentNode=currentNode->next;
  }
  return c;
}

void EraseFirst()
{
    Node *temp=new Node;
    temp=head;
    head=head->next;
    delete temp;
}

void EraseLast()
{
    Node *curr=new Node;
    Node *prev=new Node;
    curr=head;
    while(curr->next !=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    delete curr;
}

void ErasePos(int pos)
{
     Node *curr=new Node;
    Node *prev=new Node;
    curr=head;
    for(int i=1;i<pos;i++)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
}

void printList()
{
  Node *currentNode;
  currentNode=head;
  while(currentNode!=NULL)
    {
        cout<<currentNode->data<<endl;
        currentNode=currentNode->next;
    }
    int c=count();
    cout<<"Total:"<<c<<endl;

}
int main()
{
  insertAtFirst(10);
  insertAtFirst(11);
  insertAtFirst(12);
  insertAt(0,15);
  insertAtlast(20);

  EraseFirst();
  EraseLast();
  ErasePos(2);

    printList();


  return 0;
}
