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

template <typename T> using pbds= tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
//less(set); less_equal(multyset)
int32_t main()
{
    rasa
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        int n,m;
        cin>>n>>m;
        string s,c;
        cin>>s;
        pbds<int>pb;
        for(int i=0; i<m; i++)
        {
            int x;
            cin>>x;
            pb.insert(x);
        }
        cin>>c;
        // for(auto val : pb) cout<<val<<" ";
        // cout<<nl;
        sort(all(c));
        for(int i=0; i<pb.size(); i++)
        {
            int idx=*pb.find_by_order(i);
            // cout<<idx<<" ";
           
            s[idx-1]=c[i];
        }
        //  cout<<nl;
        cout<<s<<nl;
    }
    return 0;
}