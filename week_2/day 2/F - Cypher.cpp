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
      vector<int> v(n),ans(n);
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
      }
      int k=0;
      while(k<n)
      {
        int x;
        cin>>x;
        string s;
        cin>>s;
        int u=0,d=0;
        for(auto val : s)
        {
            if(val=='U') u++;
            else d++;
        }
        if(u>d)
        {
            int y=u-d;//-
            if((v[k]-y)<0) ans[k]=v[k]-y+10;
            else ans[k]=v[k]-y;
        }
        else if(u<d)
        {
            int y=d-u;//-
            if((v[k]+y)>9) ans[k]=v[k]+y-10;
            else ans[k]=v[k]+y;
        }
        else ans[k]=v[k];
        k++;
      }
      for(auto val : ans)
      cout<<val<<" ";
      cout<<'\n';
   }
   return 0;
}