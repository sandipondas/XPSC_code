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
      string s;
      cin>>s;
      ll mx;
      if(n%2==0)
      {
        ll y=n/2-1;
        mx=(n*(n-1)/2-y*(y+1)/2)*2;
      }
      else
      {
        ll y=n/2;
        mx=(n*(n-1)/2-y*(y+1)/2)*2+n/2;
      }
      //cout<<mx<<endl;
      vector<ll>v,u,w,ans;
      for(ll i=0; i<n; i++)
      {
        if(s[i]=='L')
        {
            ll left=i;
            ll rig=n-1-i;
            if(left<rig) u.push_back(rig);
            else u.push_back(left);
            v.push_back(left);
        }
        else
        {
            ll left=i;
            ll rig=n-1-i;
            if(left<rig) u.push_back(rig);
            else u.push_back(left);
            v.push_back(rig);
        }

      }
      for(ll i=0; i<n; i++)
      {
        w.push_back(abs(v[i]-u[i]));
      }
      sort(w.begin(),w.end());
      ans.push_back(mx);
      ll x=mx;
      for(ll i=0; i<n-1; i++)
      {
        ans.push_back(abs(x-w[i]));
        x-=w[i];

      }
      sort(ans.begin(),ans.end());
      for(auto val:ans)
      {
        cout<<val<<" ";
      }
      cout<<endl;
     
   }
   return 0;
}