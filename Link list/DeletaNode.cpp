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
void insertAtend(Node *&start,int val)//aikane refference use kora hoise jate start er value change hoye jabe
//start is passed by reference so that it can be modified in the function
{
    Node *newNode=new Node(val); //creating a new node with value
    if(start==nullptr)//if start is null, it means this is the first node
    {
        start=newNode;//set start to the new node
    }
    else
    {
        Node *ptr=start;
        while(ptr->link!=NULL)//traversing to the last node
        {
            ptr=ptr->link;//last node er link e jabo
        }
        ptr->link=newNode;//oikhane new node er link set korbo
        //tar mane last node er link e new node er address set korbo
    }
}
void deleteatstart(Node *&start)
{
    start=start->link;
}
void printlist(Node *start)
{
    Node *ptr=start;//ptr points to the first node
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";//printing the value of the current node
        ptr=ptr->link;//moving to the next node
    }
}
int main()
{
   Node *start=nullptr;//initially start is null
    insertAtend(start,10);//inserting the new node at the beginning
    insertAtend(start,20);//inserting the new node at the beginning
    insertAtend(start,30);//inserting the new node at the beginning
    insertAtend(start,40);//inserting the new node at the beginning
    insertAtend(start,50);//inserting the new node at the beginning
   deleteatstart(start);//deleting the first node
    deleteatstart(start);//deleting the Second node
    printlist(start);//printing the list
}