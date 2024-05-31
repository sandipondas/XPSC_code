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
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        map<int,int> cnt;
        for(int i=0; i<n; i++)
        {
            // map<int,int> cnt;
            int val=v[i];
            for(int j=2; j*j<=val; j++)
            {
                if(val%j==0)
                {
                    while(val%j==0)
                    {
                        cnt[j]++;
                        val/=j;
                    }
                }
            }
            if(val>1)
            {
                cnt[val]++;
            }
            // for(auto val : cnt)
            // {
            //     cout<<val.first<<"->"<<val.second<<nl;
            // }
            // cout<<nl;
        }
        bool ans=true;
        for(auto val: cnt)
        {
            if(val.second%n!=0) 
            {
                ans=false;
                break;
            }
        }
        if(ans) yes;
        else no;

    }
    return 0;
}