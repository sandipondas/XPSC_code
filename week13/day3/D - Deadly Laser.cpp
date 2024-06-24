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
int n,m;

int32_t main()
{
    // rasa
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        cin >> n >> m;
        int x,y,d;
        cin >> x>>y>>d;
        if((x-d)<=1 && (y-d)<=1) cout<<-1<<nl;
        else if((x+d)>=n && (y+d)>=m) cout<<-1<<nl;
        else if((x-d)<=1 && (x+d)>=n) cout<<-1<<nl;
        else if((y-d)<=1 && (y+d)>=m) cout<<-1<<nl;
        else cout<<(m+n)-2<<nl;
    }
    return 0;
}