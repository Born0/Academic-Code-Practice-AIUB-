#include<iostream>

using namespace std;

int arr[5];
int front=-1,rear=-1;


 void Enqueue(int key)
{
    if(front==-1)
    {
        front++;
    }
    rear ++;
    arr[rear]=key;
}
void deque()
{
    if(front==-1)
    {
        cout<<"Empty !"<<endl;
    }
    front++;
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<arr[i]<<endl;
    }
}
main()
{
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Enqueue(6);
    display();
    cout<<"After Dequeue"<<endl;
    deque();
    display();


}
