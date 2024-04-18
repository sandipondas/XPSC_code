#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+5;
vector<ll> v[N];
vector<ll> lef(N);
void dfs(ll node, ll par)
{
    if(v[node].size()==1 && node!=1) 
    lef[node]=1;
    for(auto val:v[node])
    {
        if(val!=par)
        {
            dfs(val,node);
            lef[node]+=lef[val];
        }
    }
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
      for(ll i=0; i<=n; i++)
      {
        lef[i]=0;
        v[i].clear();
      }
      for(ll i=0; i<n-1; i++)
      {
        ll a,b;
        cin>>a>>b;

        v[a].push_back(b);
        v[b].push_back(a);
      }
      dfs(1,-1);
      ll q;
      cin>>q;
      while(q--)
      {
        ll a,b;
        cin>>a>>b;
        ll ans=lef[a]*lef[b];
        cout<<ans<<'\n';
      }

   }
   return 0;
}