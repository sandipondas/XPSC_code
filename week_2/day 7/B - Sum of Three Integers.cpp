#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int k,s;
   cin>>k>>s;
   int count=0;
   for(int i=0; i<=k; i++)
   {
      for(int j=0; j<=k; j++)
      {
        int x=i+j;
        int y=s-x;
        if(y<=k && y>=0) count++;
      }
   }
   cout<<count<<'\n';
   return 0;
}