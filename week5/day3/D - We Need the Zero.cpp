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
      vector<int>v(n);
      int x=0;
      for(int i=0; i<n; i++) 
      {
        cin>>v[i];
        x=x^v[i];
      }
      if(n%2==0 && x==0) cout<<0<<endl;
      else if(n%2!=0) cout<<x<<endl;
      else cout<<-1<<endl; 

   }
   return 0;
}