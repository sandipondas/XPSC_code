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
        int n,k,cnt=0;
        cin>>n>>k;
        // yes;
        while(n>=0)
        {
            if(n%k==0)
            {
                cnt++;
                n=n/k;
            }
            else 
            {
                int x=n%k;
                cnt+=x;
                n=n-x;
            }
            // cout<<n<<" ";
            if(n==0)
            {
                break;
            }
        }
        cout<<cnt<<nl;
    }
    return 0;
}