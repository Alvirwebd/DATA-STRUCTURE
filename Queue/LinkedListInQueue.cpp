#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next=nullptr;
    Node(int data)
    {
        val=data;
        next=nullptr;
    }
};
class Myqueue
{
    public:
    Node *head=nullptr;
    Node *tail=nullptr;
    int maxSize,size=0;
    Myqueue(int maxSize=-1)//-1 means infinite size nitea parbo
    {
        maxSize=maxSize;//chaile finit size dite parbo

    }
    void push(int item)
    {
        if(size==maxSize)
        {
        cout<<"OVERFLOW"<<endl;
        return;               
        }
        size++;
        Node *newnode=new Node(item);
        if(head==nullptr)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop()
    {
        if(head ==nullptr)
        {
            cout<<"UNDERFLOW"<<endl;
            return;
    
        }
        size--;
         Node *temp=head;
        head=head->next;
    }
    void front()
    {
        cout<<head->val<<endl;
    }
    void back()
    { 
        cout<<tail->val<<endl;
    }
};
int main()
{
    Myqueue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.front();
    q.back();
}