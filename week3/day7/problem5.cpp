#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int l=0,r=0,ans=0,y=0;
    while(r<n)
    {
        if(mp[v[r]]==0) y++;
        mp[v[r]]++;
        while(y>k)
        {
            mp[v[l]]--;
            if(mp[v[l]]==0) y--;
            l++;
        }
        ans+=r-l+1;
        r++;
    }
    cout<<ans<<'\n';
   return 0;
}