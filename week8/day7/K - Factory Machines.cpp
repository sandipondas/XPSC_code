#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"
#define all(x) x.begin(), x.end()
#define rasa ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);

const int mod = 1e9 + 7;
const double pi = 2 * acos(0);
int Max = INT_MAX;
int Min = INT_MIN;
int Inf = 1e18;
using namespace std;
int32_t main()
{
    rasa
    int tt = 1;
    //cin >> tt;
    while (tt--){
        int n,t;
        cin>>n>>t;
        vector<int>v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        auto ok=[&](long long m)
        {
            int total=0;
            for(int i=0; i<n; i++)
            {
                total+=(m/v[i]);
                if(total>=t)
                return true;
            }
           return false;
        };

        int l=0,r=1e18,mid,ans;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        cout<<ans<<nl;
    }
    return 0;
}