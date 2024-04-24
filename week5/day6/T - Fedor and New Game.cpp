#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const double pi = 2 * acos(0);
int Max = INT_MAX;
int Min = INT_MIN;
int Inf = 1e18;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt = 1;
   // cin >> tt;
    while (tt--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>v(m+1);
        for(int i=0; i<=m; i++)
        {
            cin>>v[i];
        }
        vector<vector<int>> w;
        for(int mask=0; mask<=m; mask++)
        {
            vector<int> u;
            for(int i=0; i<n; i++)
            {
                if((v[mask] >> i) & 1) u.push_back(1);
                else u.push_back(0);
            }
            w.push_back(u);
        }
        vector<int> fedor=w[m];
        int ans=0;
        for(int i=0; i<w.size()-1; i++)
        {
            vector<int> a=w[i];
            int cnt=0;
            for(int j=0; j<n; j++)
            {
                if(a[j]!=fedor[j])
                {
                    cnt++;
                }
            }
            if(cnt<=k)
            ans++;
        }
        cout<<ans<<nl;
    }
    return 0;
}