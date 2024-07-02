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
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            int e=n,s=1;
            for(int i=0; i<n/2; i++)
            {
                cout<<s<<" "<<e<<" ";
                s++;
                e--;
            }
            cout<<nl;
        }
        else
        {
            int e=n-1,s=1;
            for(int i=0; i<n/2; i++)
            {
                cout<<s<<" "<<e<<" ";
                s++;
                e--;
            }
            cout<<n<<nl;
        }
    }
    return 0;
}