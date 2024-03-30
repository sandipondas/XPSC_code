#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll n,k;
   cin>>n>>k;
   vector<ll>v(n);
   map<ll,ll> mp;
   for(ll i=0; i<n; i++)
   {
      cin>>v[i];
      mp[v[i]]++;
   }
   ll l=0,r=0,ans=0;
   set<ll>s;
   while(r<n)
   {
      s.insert(v[r]);
      if(s.size()<=k)
      {
        ans+=(r-l+1);
        //cout<<ans<<'\n';
      }
      else
      {
        while(s.size()>k && l<r)
        {
            if(mp[v[l]]>1)
            {
                mp[v[l]]--;
            }
            else
            {
                auto it=s.find(v[l]);
                s.erase(it);
            }
            l++;
        }
        if(s.size()<=k)
        ans+=(r-l+1);
        //cout<<ans<<'\n';
      }
      r++;
   }
   cout<<ans<<'\n';
   return 0;
}