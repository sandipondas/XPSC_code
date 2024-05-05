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
    cin >> tt;
    while (tt--){
        int a,b,c;
        cin>>a>>b>>c;
        int x = a-1;
        int y;
        if(b < c)
        {
            y = (c-b)+c-1;
        }
        else 
        {
            y = b-1;
        }
        if(x<y) cout<<1<<nl;
        else if(x>y) cout<< 2 <<nl;
        else cout<<3<<nl;
    }
    return 0;
}