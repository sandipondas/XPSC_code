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
const int N=(1 << 15);
using namespace std;
vector<int> palindrom;
void fun(int n)
{
    for(int i=0; i<n; i++)
    {
        bool flg=true;
        string s= to_string(i);
        int m=s.length();
        for(int i=0; i<(m/2); i++)
        {
            if(s[i]!=s[m-i-1])
            {
               flg=false;
               break;
            }
        }
        if(flg) palindrom.push_back(i);
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    fun(N);
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<int> v(n),cnt(N);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            cnt[v[i]]++;
        }
        int ans=n;
        for(int i=0; i<n; i++)
        {
            int x=v[i];
            for(int j=0; j<palindrom.size();j++)
            {
                int y=x^palindrom[j];
                ans+=cnt[y];
            }
        }
        cout<<ans/2<<endl;
    }
    return 0;
}