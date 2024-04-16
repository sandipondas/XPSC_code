#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;
   while(t--)
   {
      cin.ignore();
      ll n,k;
      cin>>n>>k;
      vector<ll> v(n);
      map<ll,vector<ll>> mp;
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
        mp[v[i]].push_back(i);
      }
      while(k--)
      {
        ll a,b;
        cin>>a>>b;
        if(mp[a].empty() || mp[b].empty()) cout<<"NO"<<endl;
        else if(a==b) cout<<"Yes"<<endl;
        else
        {
            if(mp[a][0]<=mp[b][mp[b].size()-1]) cout<<"Yes"<<endl;
            else cout<<"NO"<<endl;
        }
      }

   }
   return 0;
}