#include<bits/stdc++.h>
using namespace std;
void mid_delete(stack<int>&s,int size,int count)
{   
    if(count==size/2)
    {  
        s.pop();
         return ;
    }
    int x=s.top();
    s.pop();
    mid_delete(s,size,count+1);
    s.push(x);
}
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int n=s.size();
    int count=0;
    mid_delete(s,n,count);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
     return 0;
}
