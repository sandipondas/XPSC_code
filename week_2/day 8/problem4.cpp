#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll n,s;
   cin>>n>>s;
   vector<ll>v(n);
   for(ll i=0; i<n; i++)
   {
      cin>>v[i];
   }
   ll l=0,r=0,sum=0,ans=0;
   while(r<n)
   {
      sum+=v[r];
      if(sum>=s)
      {
        while(sum>=s && l<n)
        {
            ans+=(n-r);
            sum-=v[l];
            l++;
        }
      }
      r++;
   }
   cout<<ans<<'\n';
   
   return 0;
}