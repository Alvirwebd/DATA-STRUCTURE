#include <iostream>
using namespace std;
class Node
{
    public:
    int info;
    Node *link;//to point to the next node
    Node(int info)
    {
        this->info=info;
        this->link =NULL;
    
    }
    
};
int main()
{
    Node *start=new Node(10);//creating a new node with value 10
    Node *newnode1=new Node(20);//creating a new node with value 20
    Node *newnode2=new Node(30);//creating a new node with value 30
    start->link=newnode1;//linking the first node to the second node
    newnode1->link=newnode2;//linking the second node to the third node
    Node *ptr=start;//ptr points to the first node
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";//printing the value of the current node
        ptr=ptr->link;//moving to the next node
    }
    
}