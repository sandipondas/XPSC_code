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
    // rasa
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        int mn=Max;
        int e=0,o=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                e++;
            }
            else o++;
            mn=min(mn,v[i]);
        }
        bool b=true;
        for(auto val : v)
        {
            if(val!=mn)
            {
                b=false;
                break;
            }
        }
        if(b) yes;
        else if(e==n || o==n) yes;
        else no;
        // cout<<e<<nl;
    }
    return 0;
}