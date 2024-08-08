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
bool isPrime(int n)
{
    if(n==1) return false;
    int ans=false;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            ans=true;
            break;
        }
    }
    if(!ans) return true;
    else return false;
}
int32_t main()
{
    rasa
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        int x;
        cin>>x;

        vector<int> prime;
        while(true)
        {
            if(isPrime(x))
            {
                prime.push_back(x);
            }
            x++;
            if(prime.size()==2)
            break;
        }
        cout<<prime[0]*prime[1]<<endl;
        // for(auto val:prime) cout<<val<<" ";
        // cout<<nl;

    }
    return 0;
}