#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      string s;
      cin>>s;
      stack<char> sk;
      int i=1;
      sk.push(s[0]);
      while(i<n)
      {
        if(!sk.empty() && sk.top()=='(' && s[i]==')')
        sk.pop();
        else
        sk.push(s[i]);
        i++;

      }
      cout<<sk.size()/2<<'\n';
   }
   return 0;
}