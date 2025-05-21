#include<bits/stdc++.h>
using namespace std;
void Tower(int n,int a,int b,int c)
{
    if(n==1)
    {
        cout<<a<<"->"<<c<<endl;
        return;
    }
    Tower(n-1,a,c,b);//a theka b te
    cout<<a<<"->"<<c<<endl;
    Tower(n-1,b,a,c);//b theka c te
}
    int main()
    {
        Tower(3,1,2,3);
    }