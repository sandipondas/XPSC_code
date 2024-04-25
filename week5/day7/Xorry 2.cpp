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
        int n;
        cin>>n;
        int x=__lg(n);
        int y=(1<<x);
        if(n==y) cout<<1<<nl;
        else
        {
            int ans=Max;
            map<int,int>mp;
            for(int i=n; i>=y; i--)
            {
               int a=(n^i);
               int b=abs(a-i);
               ans=min(ans,b);
               mp[b]++;
               //cout<<i<<" "<<a<<" "<<b<<endl;
            }
            cout<<mp[ans]<<nl;
        }
        
    }
    return 0;
}