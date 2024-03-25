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
      string a,b;
      cin>>a>>b;
      int x=a.size();
      int y=b.size();
      for(int i=0; i<x; i++)
      {
        if(a[i]=='B') a[i]='G';
        if(b[i]=='B') b[i]='G';
      }
      if(a==b) cout<<"YES"<<'\n';
      else cout<<"NO"<<'\n';
   }
   return 0;
}