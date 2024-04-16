#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(pair<ll,ll> &a, pair<ll,ll> &b)
{
   if(a.first>b.first) return true;
   else return false;
}
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
      vector<ll>u(n),v(n),w(n);
      vector<pair<ll,ll>> up,vp,wp;
      for(ll i=0; i<n; i++)
      {
        cin>>u[i];
        up.push_back({u[i],i});
      }
      for(ll i=0; i<n; i++)
      {
        cin>>v[i];
        vp.push_back({v[i],i});
      }
      for(ll i=0; i<n; i++)
      {
        cin>>w[i];
        wp.push_back({w[i],i});
      }
      sort(up.begin(),up.end(),cmp);
      sort(vp.begin(),vp.end(),cmp);
      sort(wp.begin(),wp.end(),cmp);
      ll ans=0;
      for(int i=0; i<3; i++)
      {
        for(int j=0; j<3; j++)
        {
          for(int k=0; k<3; k++)
          {
            if(up[i].second!=vp[j].second && vp[j].second!=wp[k].second && up[i].second!=wp[k].second)
            {
              ans=max(ans,up[i].first+vp[j].first+wp[k].first);
            }
          }
        }
      }
      cout<<ans<<endl;
   }
   
   return 0;
}