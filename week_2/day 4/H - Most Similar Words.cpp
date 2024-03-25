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
      int n,m;
      cin>>n>>m;
      vector<string> s(n);
      for(int i=0; i<n; i++)
      {
        cin>>s[i];
      }
      int mn=INT_MAX;
      for(int i=0; i<n; i++)
      {
        
        for(int j=i+1; j<n; j++)
        {
            int sum=0;
            for(int k=0; k<m; k++)
            {
                sum+=abs(s[i][k]-s[j][k]);
            }
            mn=min(mn,sum);
        }
      }
      cout<<mn<<'\n';
   }
   
   return 0;
}