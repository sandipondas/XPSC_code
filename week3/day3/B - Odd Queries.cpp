#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll t;
   cin>>t;
   while(t--)
   {
      ll n,q;
      cin>>n>>q;
      vector<ll>v(n),s(n);
      ll sum=0;
      for(ll i=0; i<n; i++)
      {
        cin>>v[i];
        sum+=v[i];
        s[i]=sum;
      }
      while(q--)
      {
        ll l,r,k;
        cin>>l>>r>>k;
        ll x;
        if(l-1==0) 
        {
          x=s[r-1];
        }
        else
        x=s[r-1]-s[l-2];
        
        ll ans=s[n-1]-x+(r-l+1)*k;
        if(ans%2!=0)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      }
      
   }
   return 0;
}