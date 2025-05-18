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
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    cout<<q[front]<<endl;
    cout<<q[rear]<<endl;
    return 0;

}