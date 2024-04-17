#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;
   while(t--)
   {
      ll n; 
      cin>>n;
      vector<ll>v(n);
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
      }
      ll r=0,count=0;
      ll ans=0;
      while(r<n)
      {
        if(v[r]<0)
        {
            count++;
            while(v[r]<=0 && r<n)
            {
                ans+=v[r]*(-1);
                r++;
            }
        }
        else 
        {
            ans+=v[r];
            r++;
        }
      }
      cout<<ans<<" "<<count<<endl;
   }
   return 0;
}