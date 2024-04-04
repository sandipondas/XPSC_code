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
      map<ll,ll> mp;
      vector<ll>s;
      for(ll i=0; i<n; i++)
      {
        ll val;
        cin>>val;
        s.push_back(val);
        mp[val]++;
      }
      ll l=0;
      sort(s.begin(),s.end());
      ll count=0;
     
    while(l<n)
    {
        while(mp[s[l]]>0)
        {
            mp[s[l]]--;
            count++;
            ll val=s[l];
            int x=1;
            while(mp[x+val]>0)
            {
                mp[x+val]--;
                x++;
            }
        }
        l++;
    }
    cout<<count<<endl;
   }
   return 0;
}