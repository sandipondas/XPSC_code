#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"
#define all(x) x.begin(), x.end()
#define rasa ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


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
    cin >> tt;
    while (tt--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        sort(all(v));

        auto ok=[&](long long mid)
        {
            int cnt=1,l=0;
            for(int r=0; r<n; r++)
            {
                if((v[r]-v[l])>2*mid)
                {
                    cnt++;
                    l=r;
                }
            }
            return cnt<=3;
        };

        int l=0,r=1e9,m,ans=0;
        while(l<=r)
        {
            m=l+(r-l)/2;
            if(ok(m))
            {
                ans=m;
                r=m-1;
            } 
            else
            {
                l=m+1;
            }  
        }
        cout<<ans<<nl;
    }
    return 0;
}