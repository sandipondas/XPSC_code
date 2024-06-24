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
    // cin>>tt;
    while(tt--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
 
        pbds<pair<int,int>> p;
        int l=0,r=0;
        while(r<n)
        {
            p.insert({v[r],r});
            if(r-l+1==k)
            {
                int a=k/2;
                if(k%2==0)
                a--;
                auto it=p.find_by_order(a);
                cout<<it->first<<nl;
                p.erase({v[l],l});
                l++;
            }
            r++;
        }
    }
    return 0;
}