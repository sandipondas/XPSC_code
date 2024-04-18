#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll t;
   cin>>t;
   while(t--)
   {
      ll n,m,h;
      cin>>n>>m>>h;
      vector<ll>car(n),outlet(m);
      for(ll i=0; i<n; i++)
      {
        cin>>car[i];
      }
      for(ll i=0; i<m; i++)
      {
        cin>>outlet[i];
      }
      ll x=min(n,m);
      sort(car.begin(),car.end(),greater<ll>());
      sort(outlet.begin(),outlet.end(),greater<ll>());
      ll ans=0;
      for(ll i=0; i<x; i++)
      {
        ll a=outlet[i]*h;
        if(a>=car[i])
        {
            ans+=car[i];
        }
        else 
        {
            ans+=a;
        }
      }
      cout<<ans<<endl;
   }
   return 0;
}