#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;
   while(t--)
   {
       string a,b;
       cin>>a>>b;
       int n=a.size();
       int m=b.size();
       //cout<<n<<" "<<m<<endl;
       char c1=a[n-1],c2=b[m-1];
       if(c1==c2)
       {
         if(c1=='S')
         {
            if(a>b) cout<<'<'<<endl;
            else if(a==b) cout<<'='<<endl;
            else cout<<'>'<<endl;
         }
         else
         {
            if(a>b) cout<<'>'<<endl;
            else if(a==b) cout<<'='<<endl;
            else cout<<'<'<<endl;
         }
       }
       else 
       {
         if(c1=='S')  cout<<'<'<<endl;
         else if(c1=='L') cout<<'>'<<endl;
         else if(c1=='M' && c2=='S') cout<<'>'<<endl;
         else if(c1=='M' && c2=='L') cout<<'<'<<endl;
       }
   }
   return 0;
}