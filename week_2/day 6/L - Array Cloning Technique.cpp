#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      vector<int> v(n);
      map<int,int>mp;
      int mx_fre=0;
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
        mp[v[i]]++;
        
      }
      for(auto val: mp)
      {
        mx_fre=max(mx_fre,val.second);
      }
      int y=n-mx_fre;
      int x=mx_fre;
      int ans=0;
      while(x<n)
      {
        x=x*2;
        ans++;
      }
      cout<<ans+y<<endl;
   }
   return 0;
}