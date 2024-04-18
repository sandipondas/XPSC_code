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
      vector<int>v(n);
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
      }
      int mx=0,mn=INT_MAX;
      int dif=INT_MIN;
      for(int i=0; i<n; i++)
      {
        if(i>0)
        {
            mx=max(mx,v[i]);
        }
        if(i<n-1)
        {
            mn=min(mn,v[i]);
            dif=max(dif,v[i]-v[i+1]);
        }
      }
      if(n==1) cout<<0<<endl;
      else
      {
        int a=mx-v[0];
        int b=v[n-1]-mn;
        //cout<<a<<" "<<b<<" "<<dif<<endl;
        cout<<max({a,b,dif})<<endl;
      }
      //cout<<lmx<<" "<<rmn<<" "<<dif<<endl;
   }
   return 0;
}