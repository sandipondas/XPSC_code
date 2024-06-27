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
        int cnt=0,x;
        for(int i=1; i<=10; i++)
        {
            int p=pow(10,i);
            if(n/p==0)
            {
                x=i-1;
                cnt+=x*9;
                int a=1;
                for(int j=1; j<=x; j++)
                {
                    a=a*10+1;
                }
                for(int k=a; k<=n; k+=a)
                {
                    if(k<=n) cnt++;
                    else break;
                }
                // cout<<a<<nl;
                break;

            }
        }
        cout<<cnt<<nl;

    }
    return 0;
}