#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll n,k;
   cin>>n>>k;
   vector<ll>v(n);
   multiset<ll>s;
   for(ll i=0; i<n; i++)
   {
      cin>>v[i];
   }
   ll l=0,r=0,ans=0;
   while(r<n)
   {
      s.insert(v[r]);
      ll mx=*s.rbegin();
      ll mn=*s.begin();
      if((mx-mn)<=k)
      {
        ans+=(r-l+1);
        //cout<<ans<<'\n';
      }
      else
      {
        while(l<r)
        {
            mx=*s.rbegin();
            mn=*s.begin();
            if((mx-mn)<=k)
            {
                break;
            }
            auto it=s.find(v[l]);
            s.erase(it);
            l++;
        }
        mx=*s.rbegin();
        mn=*s.begin();
        if((mx-mn)<=k)
          ans+=(r-l+1);
      }
      r++;
   }
   cout<<ans<<'\n';
   return 0;
}