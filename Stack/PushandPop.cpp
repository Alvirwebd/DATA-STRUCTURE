#include<bits/stdc++.h>
using namespace std;
int arr[5];
int maxstk = 5;// Maximum size of stack
int top = -1;// Top holo stack er SHOB LAST element JETA
// Stack er size 0 theke start hoye 1,2,3,4,5 e jabe
// Stack er size 5 hole top er value 4 hobe
void push(int item)
{
     if(top == maxstk-1)
     {
        cout<<"OverFlow\n";
        return;
     }
        top++;
        arr[top]=item;
}
void pop()
{
    if(top==-1)
    {
        cout<<"UnderFlow\n";
        return;
    }
    top--;
}
    int main()
    {
        push(10);
        push(20);
        pop();
        cout<<arr[top]<<endl;
    }