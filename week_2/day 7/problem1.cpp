#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll n,s;
   cin>>n>>s;
   vector<ll> v(n);
   for(int i=0; i<n; i++)
   {
      cin>>v[i];
   }
   int l=0,r=0;
   ll sum=0;
   int len=0;
   while(r<n)
   {
      sum+=v[r];
      if(sum<=s)
      {
        len=max(len,r-l+1);
      }
      else 
      {
        sum-=v[l];
        l++;
      }
      r++;
   }
   cout<<len<<'\n';
   return 0;
}