#include<iostream>
#include <string>
using namespace std;

char stack[20];
int top=-1;

void push(int key)
{
    top++;
    stack[top]=key;
}

void pop()
{
  if(stack[top]!='(' && stack[top]!=')')
    {
      cout<<stack[top]<<" ";
    }
    top--;
}

void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<stack[i]<<" ";
    }
}

main()
{
  string a="((a+b/c)*(d+e))-f";
  int i=0;
  while(a[i]!='\0')
  {
    if( a[i]>='a'&& a[i]<='z')
    {
      cout<<a[i]<<" ";
    }
    else if(a[i]==')')
    {
      do
      {
        pop();
      }
      while(stack[top]!='(');
      pop();
    }
    else
    {
      push(a[i]);
    }
    i++;
  }
  display();

}
