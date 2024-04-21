#include<bits/stdc++.h>
using namespace std;
const int N=1e9;
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
      int x=1;
      while(x<=n)
      {
        x*=2;
      }
      
      cout<<(x/2)-1<<endl;
      //cout<<pow(2,x)-1<<endl;
      
   }
   return 0;
}