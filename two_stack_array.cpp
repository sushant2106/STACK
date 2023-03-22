#include<bits/stdc++.h>
using namespace std;

class Twostack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    Twostack(int size)
    {
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    void push1(int element)
    {
        if(top2-top1>1)
        {
            top1++;
            arr[top1]=element;
        }
        else{
            cout<<"Overflow\n"<<endl;
        }
    }
    void push2(int element)
    {
        if(top2-top1>1)
        {
            top2--;
            arr[top2]=element;
        }
        else
        {
             cout<<"Overflow\n";
        }
    }
    int pop1()
    {
        if(top1==-1)
        {
            cout<<"underflow\n";
            return -1;
        }
        else{
            return arr[top1];
            top1--;
            
        }
    }
    int pop2()
    {
        if(top2==size)
        {
            cout<<"underflow\n";
            return -1;
        }
        else{
            return arr[top2];
            top2++;
            
        }
    }
    bool isempty()
    {
        if(top1==-1 && top2==size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
        Twostack s(5);
        s.push1(1);
        s.push1(2);
        s.push2(3);
        cout<<s.pop2();
     return 0;
}
