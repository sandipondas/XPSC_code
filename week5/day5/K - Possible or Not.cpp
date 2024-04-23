#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--){
        ll n,b;
        cin>>n>>b;
        vector<ll>v(n);
        ll ans=-1;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(auto val : v)
        {
            if((val&b)==b)
            {
                ans=ans&val;
            }
        }
        if(ans==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}