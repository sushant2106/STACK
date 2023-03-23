#include<bits/stdc++.h>
using namespace std;
bool balance(string s){
    stack<char>st;
      for(auto x:s)
        {
            if(x=='(' || x=='{' || x=='[')
            {
                st.push(x);
            }
            else
            {
              if(!st.empty())
              {
                    char m=st.top();
                if(x=='}' && m=='{' || x==')' && m=='(' || x==']' && m=='[')
                {
                    st.pop();
                }
      
              }
              else
                 return false;
            }
        }
        return st.empty();
}
int main()
{
    string s = "(]";
    cout<<balance(s);
    

}
