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
        string s;
        cin>>s;
        int n=s.size();
        bool ans=false;
        for(int i=0; i<n/2; i++)
        {
            if(i+1<n/2 && s[i]!=s[i+1])
            {
                ans=true;
                //cout<<"i="<<i<<nl;
            }
        }
        if(ans) yes;
        else no;
    }
    return 0;
}