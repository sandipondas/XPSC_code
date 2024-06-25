#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define int long long
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"
#define all(x) x.begin(), x.end()
#define rasa ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);


int Max = INT_MAX;
int Min = INT_MIN;

using namespace std;
using namespace __gnu_pbds;

template <typename T> using pbds= tree<T, null_type, less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
//less(set); less_equal(multyset)
int32_t main()
{
    rasa
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        bool b=true;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[0]!=v[i]) b=false;
        }
        int ans=Max;
        for(int i=1; i<=100; i++)
        {
            bool key=true;
            int l=0,r=0,cnt=0,m=0;
            while(r<n)
            {
                if(v[r]!=i && key)
                {
                    key=false;
                    l=r;
                    cnt++;
                }
                if(cnt==0) l++;
                if(r==n-1 && cnt!=0)
                {
                    m++;
                    break;
                }
                if(r-l+1==k)
                {
                    m++;
                    r++;
                    l=r;
                    cnt=0;
                    key=true;
                }
                else r++;
            }
            ans=min(ans,m);
        }
        if(!b)
        cout<<ans<<nl;
        else cout<<0<<nl;
        
    }
    return 0;
}