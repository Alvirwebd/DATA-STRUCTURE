#include<bits/stdc++.h>
using namespace std; 
int q[5];
int n=5;
int front=-1,rear=-1;
void enqueue(int x)//push ba enqueue mane add kora 
{
   if(rear==n-1)
   {
    cout<<"overflow"<<endl;
    return;
   }
   if(front==-1)//
   {
    front++;//jodi 1 ta value thake front o oita rear o oita
    rear++;
   }
   else
   {
   rear++;
   q[rear]=x;
   }
}
void pop()//DEQUEU MANE DELETE KORA
{
    if(front==-1)
    {
        cout<<"underflow"<<endl;
        return;
    }
    front++;//delete mane front ++ kora 
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    pop();
    cout<<q[front]<<endl;
    cout<<q[rear]<<endl;

}
