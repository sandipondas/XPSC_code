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
      vector<string> v(n);
      set<string>s;
      //vector<int>ans(n);
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
        s.insert(v[i]);
      }
      for(int k=0; k<n; k++)
      {
        bool x=false;
        for(int i=0; i<v[k].size(); i++)
        {
            string a=v[k].substr(0,i);
            string b=v[k].substr(i,v[k].size());
            
            if(s.count(a) && s.count(b))
            {
                x=true;
                break;
                //cout<<"yes"<<endl;
            }
        }
        if(x) cout<<1;
        else cout<<0;
      }
      cout<<endl;
   }
   return 0;
}