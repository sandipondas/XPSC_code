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
        int n;
        cin>>n;
        vector<int> v(n),mv;
        for(int i=0; i<n; i++) cin>>v[i];
        map<int,int>cnt;
        pbds<int> pb;
        for(int i=0; i<n-1; i++)
        {
            int x=v[i]-v[i+1];
            if(x>0)
            {
                cnt[x]++;
                pb.insert(x);
                v[i+1]=v[i];
                mv.push_back(x);
            }
        }
        int m=mv.size();
        int ans=0,k=m,z=0;

        for(int i=0; i<pb.size(); i++)
        {
            int val=*pb.find_by_order(i);
            int x=(k+1)*(val-z);
            ans+=x;
            k-=cnt[val];
            z=val;
        }
        cout<<ans<<nl;


    }
    return 0;
}