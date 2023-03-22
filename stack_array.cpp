#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element)
    {
        if(top==size-1)
        {
            cout<<"Overflow\n";
        }
        else{
            top++;
            arr[top]=element;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Underflow"<<endl;
        }else{
           // cout<<arr[top]<<endl;
            top--;
        }
        
    }
    int peek()
    {
        if(top>=0 && top<size)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is isempty\n";
            return -1;
        }
    }
    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
     Stack s(5);
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     cout<<s.peek()<<endl;
     cout<<s.isempty()<<endl;
     s.pop();
     cout<<s.peek();
     return 0;
     
}
