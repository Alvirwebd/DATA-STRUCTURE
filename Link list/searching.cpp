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
   int n,item;
   cin>>n;
   Node *start=nullptr;//initially start is null
   for(int i=0;i<n;i++){
    int val;
    cin>>val;
    Node *newNode=new Node(val); //creating a new node with value
    if(start==nullptr)//if start is null, it means this is the first node
    {
        start=newNode;//set start to the new node
    }
    else
    {
        newNode->link=start;//link the new node to the start node
        start=newNode;//update start to the new node
   }
}
cin>>item;//taking input for the item to be searched
    Node *ptr=start;//ptr points to the first node
    bool found=false;
    while(ptr!=NULL)
    {
        if(ptr->info==item)
        {
            found=true;
            cout<<"Fount at "<<ptr<<endl;
            break;
        }
        ptr=ptr->link;//moving to the next node]
    }
    if(!found)
    cout<<"Not Found"<<endl;
}