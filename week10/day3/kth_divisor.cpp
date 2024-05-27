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
    int n,k;
    cin>>n>>k;
    vector<int> v;
    // o(sqrt(n))
    for(int i=1; i*i<=n; i++)  
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i!=n/i)
            v.push_back(n/i);
        }
    }
    sort(all(v));
    int m=v.size();
    if(k<=m)
    cout<<v[k-1]<<nl;
    else cout<<-1<<nl;
    return 0;
}