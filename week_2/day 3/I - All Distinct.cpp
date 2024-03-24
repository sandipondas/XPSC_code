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
      set<int> s;
      int fre[10005]={0};
      for(int i=0; i<n; i++)
      {
        int x;
        cin>>x;
        s.insert(x);
        fre[x]++;
      }
      int count=0;
      for(auto it=s.begin(); it!=s.end(); it++)
      {
        if(fre[*it]>1) count+=fre[*it]-1;
      }
      if(count>0 && count%2==0)
      cout<<n-count<<endl;
      else if(count>0 && count%2!=0) cout<<n-count-1<<endl;
      else cout<<n<<endl;
      
   }
   return 0;
}