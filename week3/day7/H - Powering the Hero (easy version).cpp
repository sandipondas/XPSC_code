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
      ll n;
      cin>>n;
      vector<ll> v(n);
      for(ll i=0; i<n; i++)
      {
        cin>>v[i];
      }
      ll ans=0;
      multiset<ll,greater<ll>>s;
      for(auto val : v)
      {
        s.insert(val);
        if(val==0)
        {
            auto it=s.begin();
            ans+=*it;
            s.erase(it);
        }
      }
      cout<<ans<<endl;
   }
   
   return 0;
}