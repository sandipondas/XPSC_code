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
        if(n==2)
        {
            cout<<0<<" "<<1<<nl;
            continue;
        }
        int x= __lg(n),y;
        if((1 << x)==n)
        {
            y=(1 << (x-1));
        }
        else y=(1 << x);
        vector<int>v;
        for(int i=n-1; i>=y; i--)
        {
            v.push_back(i);
        }
        for(int i=0; i<y; i++)
        {
            v.push_back(i);
        }
        for(auto val : v)
        cout<<val<<" ";
        cout<<nl;
    }
    return 0;
}