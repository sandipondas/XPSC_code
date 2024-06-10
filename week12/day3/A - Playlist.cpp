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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];

    
    set<int> s;
    int l=0,r=0,ans=0;

    while(l<n && r<n)
    {
        while(r<n && !s.count(v[r]))
        {
            ans=max(ans,r-l+1);
            s.insert(v[r]);
            r++;
        }

        while(r<n && s.count(v[r]))
        {
            s.erase(v[l]);
            l++;
        }
    }
    cout<<ans<<nl;
    return 0;
}