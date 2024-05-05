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
    //cin >> tt;
    while (tt--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(all(v));
        int q;
        cin>>q;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            auto a=lower_bound(all(v),l);
            auto b=upper_bound(all(v),l);
            //auto c=lower_bound(all(v),r);
            auto d=upper_bound(all(v),r);
            int x= a-v.begin();
            int y= b-v.begin();
            //cout<<x<<" "<<y<<nl;
            if((a==v.end() && b==v.end()) || (a==b && *a!=v[x] && *b!=v[y]))
            cout<<0<<nl;
            else if(b==v.end()) cout<<y-x<<nl;
            else 
            {
                int p = a - v.begin();
                int q = d - v.begin()-1;
                cout<<q-p+1<<nl;
            }
        }
    }
    return 0;
}