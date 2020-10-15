#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node*top=NULL;

void push(int key)
{
    Node *temp=new Node;
    if(top==NULL)
    {
        temp->data=key;
        temp->next=NULL;
        top=temp;
    }
    else
    {
        temp->data=key;
        temp->next=top;
        top=temp;
    }
}

void pop()
{
    Node *temp;
    if(top==NULL)
    {
        cout<<"Empty Stack !"<<endl;
    }
    else
    {
        temp=top;
        top=top->next;
        delete temp;
    }
}

void display()
{
    Node *temp;
    temp=top;
    while(temp!=NULL)
    {
        cout<<"Data:"<<temp->data<<endl;
        temp=temp->next;
    }
}

main()
{
	push(5);
	push(6);
	push(7);
	pop();
	display();
}
