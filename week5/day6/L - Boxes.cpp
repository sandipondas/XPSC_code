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
class cmp
{
    public:
    bool operator()(int a,int b)
    {
        return a<b;
    }
};
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
        vector<int>v(n);
        priority_queue<int,vector<int>,cmp>p;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(all(v),greater<int>());
        p.push(v[0]);
        for(int i=1; i<n; i++)
        {
            if(p.top()>=v[i])
            {
                int x=p.top();
                p.pop();
                p.push(v[i]^x);
            }
            else
            {
                p.push(v[i]);
            }
        }
        cout<<p.size()<<nl;
    }
    return 0;
}