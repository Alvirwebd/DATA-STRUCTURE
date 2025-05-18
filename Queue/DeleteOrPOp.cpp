#include<bits/stdc++.h>
using namespace std;
int q[5];
int n=5;
int front=-1,rear=-1;
void push(int item)
{
    if((front==0 && rear==n-1) || front ==rear+1)
    {
        cout<<"OVERFLOW"<<endl;
    return;
    }
    if(front==-1)
    {
        front++;
        rear++;
    }
    else if(rear==n-1)
    {
        rear=0;
    }
    else
    {
        rear++;
    }
    q[rear]=item;

}
void pop()
{
    if(front==-1)
    {
        cout<<"UNDERFLOW"<<endl;
        return;
    }
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==n-1)
    {
        front=0;
    }
    else
    {
        front++;
    }
}
void showq()
{
    for(int i=0;i<n;i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    push(1);
    showq();
    push(2);
    showq();
    push(3);
    showq();
    push(4);
    showq();
    push(5);
    showq();
    pop();
    showq();
    pop();
    showq();
  
    return 0;

}