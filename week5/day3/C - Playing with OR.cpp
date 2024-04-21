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
      int n,k;
      cin>>n>>k;
      vector<int>v(n);
      queue<pair<int,int>>q;
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
        if(v[i]%2!=0)
        q.push({v[i],i});
      }
      int l=0,r=0,ans=0;
      while(l<n && r<n)
      {
        
        if(!q.empty() && q.front().second<l) q.pop();
        if(r-l+1==k)
        {
            if(!q.empty() && q.front().second<=r)
            ans++;
            l++;
        }
        r++;
      }
      
      cout<<ans<<endl;
   }
   return 0;
}