#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll n,x;
   cin>>n>>x;
   vector<ll> v(n);
   for(ll i=0; i<n; i++)
   {
      cin>>v[i];
   }
   for(auto val:v)
   {
      if(val!=x)
      cout<<val<<" ";
   }
   
   
   return 0;
}