#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define int long long
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"
#define all(x) x.begin(), x.end()
#define rasa ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);


int Max = INT_MAX;
int Min = INT_MIN;

using namespace std;
using namespace __gnu_pbds;

template <typename T> using pbds= tree<T, null_type, less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
//less(set); less_equal(multyset)
int32_t main()
{
    rasa
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    vector<int>cnt;
    int c=1;
    for(int i=0; i<n; i++)
    {
        if(i==n-1)
        { 
            cnt.push_back(c);
        }
        else if(v[i]==v[i+1])
        {
            c++;
        }
        else
        {
            cnt.push_back(c);
            c=1;
        }
    }
    int m=cnt.size();
    int ans=0;
    for(int i=0; i<m-1; i++)
    {
        if(i+1!=n)
        {
            int x=min(cnt[i],cnt[i+1]);
            // cout<<cnt[i]<<" "<<cnt[i+1]<<nl;
            ans=max(ans,x*2);
        }
    }
    cout<<ans<<nl;
    return 0;
}