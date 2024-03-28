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
   int len=INT_MAX;
   ll sum=0;
   while(r<n)
   {
      sum+=v[r];
      while(sum>=s)
      { 
         len=min(len,r-l+1);
         sum-=v[l];
         l++;
      }
      r++;
   }
   if(len!=INT_MAX)
   cout<<len<<'\n';
   else 
   cout<<-1<<'\n';

   return 0;
}