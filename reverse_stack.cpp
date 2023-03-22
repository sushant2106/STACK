#include<bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int>&s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int num=s.top();
    s.pop();
    insert_at_bottom(s,x);
    s.push(num);
}
void rev(stack<int>&s)
{
    if(s.empty())
    {
        return; 
    }
    int num=s.top();
    s.pop();
    rev(s);
    insert_at_bottom(s,num);
    
}
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    rev(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
