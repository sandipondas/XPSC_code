#include<bits/stdc++.h>
using namespace std;
bool kld(vector<int> &v)
{
    int n=v.size();
    int l=0,r=n-1;
    bool ans=true;
    while(l<r)
    {
        if(v[l]!=v[r])
        {
           ans=false; 
        }
        l++,r--;
    }
    return ans;
}
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
      vector<int>v(n),a,b;
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
      }
      int tv1,tv2;
      int l=0,r=n-1;
      while(l<r)
      {
        if(v[l]!=v[r])
        {
            tv1=v[l];
            tv2=v[r];
            break;
        }
        l++,r--;
      }
      for(auto val:v)
      {
        if(val==tv1) continue;
        else a.push_back(val);
      }
      for(auto val:v)
      {
        if(val==tv2) continue;
        else b.push_back(val);
      }
      bool ans1=kld(a);
      bool ans2=kld(b);
      if(ans1 || ans2) cout<<"YES"<<'\n';
      else cout<<"NO"<<'\n';
   }
   return 0;
}
