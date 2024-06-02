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
    int n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;
    int ad=n/a, bd=n/b;
    int ans=(ad*p+bd*q);
    int ex=n/(a/__gcd(a,b)*b);
    ans-=(ex*p+ex*q);
    ans+=ex*max(p,q);

    cout<<ans<<nl;
    
    return 0;
}