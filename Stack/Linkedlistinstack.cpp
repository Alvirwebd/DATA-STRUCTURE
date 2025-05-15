#include<bits/stdc++.h>
using namespace std;
class Node
{

    public:
    int info;
    Node*link;
    Node(int x)
    {
        info=x;
        link=NULL;
    }
};
class Mystack
{
    public:
    Node *head=nullptr;
    void push(int item)
    {
        Node *newnode=new Node(item);
    
        if(head==nullptr){
            head=newnode;
            return;
        }
        newnode->link=head;
        head=newnode;

    }
    void pop()
    {
        if(head->link ==nullptr)
        {
            delete head;
            head==nullptr;
            return;
        }
        Node *deleteNode=head;// head er value deleteNode e assign kora holo
        head=head->link;//head point korte deleteNode er next node e
        delete deleteNode;// deleteNode er memory free kora holo
    }
    void top()
    {
        cout<<head->info<<endl;
    }
};
int main()
{
    Mystack s;
    s.push(10);
    s.push(20);
    s.pop();
    s.top();
}