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
        int l,r;
        cin>>l>>r;
        int x=log2(r);
        int n=pow(2,x);
        
        int cnt=0;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    cnt++;
                    n/=i;
                }
            }
        }
        if(n>1)
        {
            cnt++;
        }
        cout<<cnt<<nl;
    }
    return 0;
}