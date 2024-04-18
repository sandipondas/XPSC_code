#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin>>n;
   vector<string>v(n);
   map<string,int>mp;
   for(int i=0; i<n; i++)
   {
      cin>>v[i];
   }
   for(int i=n-1; i>=0; i--)
   {
      if(mp[v[i]]==0)
      {
        mp[v[i]]++;
        int x=v[i].size();
        cout<<v[i][x-2]<<v[i][x-1];
      }
      else 
      continue;
   }
   return 0;
}