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

        int n;
        cin>>n;

        int Prime=n/2;
        cout<<Prime<<nl;

        for(int i=1; i<=Prime; i++)
        {
            if(i==Prime && n%2!=0) cout<<3<<nl;
            else if(i==Prime) cout<<2<<nl;
            else cout<<2<<" ";

        }
        
    }
        
    return 0;
}