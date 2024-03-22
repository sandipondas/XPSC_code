#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   string str1,str2;
   cin>>str1>>str2;
   int n=str1.size();
   int ans=0;
   for(int i=0; i<n; i++)
   {
      if(str1[i]!=str2[i]) ans++;
   }
   cout<<ans<<" ";
   return 0;
}