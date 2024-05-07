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
        int n,q,sum=0;
        cin>>n>>q;
        vector<int> a(n),v(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(all(a),greater<int>());
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
            v[i]=sum;
        }
       while(q--){
        int k;
        cin>>k;
        auto it = lower_bound(all(v),k);
        //cout<<*it<<nl;
        if(it!=v.end())
        cout<<it-v.begin()+1<<nl;
        else cout<<-1<<nl;
       }
    }
        return 0;
}