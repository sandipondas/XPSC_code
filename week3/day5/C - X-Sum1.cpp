#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll n,m;
int arr[200][200];
ll sum_fun(int i,int j)
{
    int a=i;
    int b=j;
    ll ans=0;
    while(a<n && b<m)
    {
        ans+=arr[a][b];
        a++,b++;
    }
    a=i,b=j;
    while(a>=0 && b>=0)
    {
        ans+=arr[a][b];
        a--,b--;
    }
    a=i,b=j;
    while(a>=0 && b<m)
    {
        ans+=arr[a][b];
        a--,b++;
    }
    a=i,b=j;
    while(a<n && b>=0)
    {
        ans+=arr[a][b];
        a++,b--;
    }
    return ans-arr[i][j]*3;
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;
   while(t--)
   {
      memset(arr,-1,sizeof(arr));
      cin>>n>>m;
      for(int i=0; i<n; i++)
      {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
      }
      ll ans=0;
      for(int i=0; i<n; i++)
      {
        for(int j=0; j<m; j++)
        {
            ans=max(ans,sum_fun(i,j));
        }
      }
      cout<<ans<<endl;

   }
   return 0;
}