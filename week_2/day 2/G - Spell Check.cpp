#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;
   string w="Timur";
   sort(w.begin(),w.end());
   while(t--)
   {
      int n;
      cin>>n;
      string s;
      cin>>s;
      sort(s.begin(),s.end());
      bool ans=true;
      if(n==5)
      {
        for(int i=0; i<5; i++)
        {
          if(s[i]!=w[i]) ans=false;
        }
      }
      else
      {
        ans=false;
      }
      
      if(ans) cout<<"YES"<<'\n';
      else cout<<"NO"<<'\n';

   }
   
   return 0;
}