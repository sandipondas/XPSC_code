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
      ll n,k,q;
      cin>>n>>k>>q;
      vector<ll>v(n);
      for(ll i=0; i<n; i++)
      {
        cin>>v[i];
      }
      ll count=0,ans=0;
      for(int i=0; i<n; i++)
      {
        if(v[i]<=q)
        {
          count++;
          if(i==n-1 || v[i+1]>q)
          {
            if(count>=k)
            {
              int a=count-k+1ll;
              ans+=a*(a+1ll)/2ll;
            }
            count=0;
          }
          
        }
      }
      cout<<ans<<endl;
   }
   return 0;
}