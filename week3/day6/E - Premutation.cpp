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
      int m=n-1;
      int arr[n][m];
      int fre[100]={0};
      int mx=0;
      int lv;
      for(int i=0; i<n; i++)
      {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            if(j==m-1)
            {
                fre[arr[i][j]]++;
            }
            
        }
      }
      for(int i=0; i<n; i++)
      {
        
        if(mx<fre[arr[i][m-1]])
        {
            mx=fre[arr[i][m-1]];
            lv=arr[i][m-1];
        }
      }
      for(int i=0; i<n; i++)
      {
        if(arr[i][m-1]!=lv)
        {
            for(int j=0; j<m; j++)
            cout<<arr[i][j]<<" ";
            cout<<lv<<endl;
            break;
        }
      }
      
      //cout<<lv<<endl;
   }
   return 0;
}