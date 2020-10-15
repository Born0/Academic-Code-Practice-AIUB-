#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node*rear=NULL;
Node *Front=NULL;
void Enqueue(int key)
{
    Node *nNode=new Node;
    nNode->data=key;
    nNode->next=NULL;
    if(Front==NULL && rear==NULL)
    {
        Front=nNode;
        rear=nNode;
    }
    rear->next=nNode;
    rear=nNode;

}

void Dequeue()
{
    Node *nNode=Front;
    if(Front==NULL)
    {
        cout<<"Empty Queue !"<<endl;
    }
    if(Front==rear)
    {
        Front=rear=NULL;
    }
    else
    {
       Front=Front->next;
        delete nNode;
    }
    delete nNode;
}



void Display()
{
    Node *nNode;
    nNode=Front;
    while(nNode!=NULL)
    {
        cout<<"data:"<<nNode->data<<endl;
        nNode=nNode->next;
    }
}


main()
{
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Dequeue();
    Display();
}
