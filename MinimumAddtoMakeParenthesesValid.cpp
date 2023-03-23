#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s=")))";
     stack<char>m1,m2;
      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='(')
          {
              m1.push(s[i]);
          }
          else if(s[i]==')')
          {
             if(!m1.empty() && s[i]==')')m1.pop();
             else
               m2.push(s[i]);
          }
      }
      cout<<m1.size()+m2.size();
}
