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
      int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      int fre[26]={0};
      for(auto c:s)
      {
        fre[c-'a']++;
      }
      int count=0;
      for(int i=0; i<26; i++)
      {
        if(fre[i]%2!=0) count++;
      }
      if(count==0 || count-1<=k)
      cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   return 0;
}