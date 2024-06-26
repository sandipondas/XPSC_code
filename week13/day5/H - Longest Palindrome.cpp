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
    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v[i]=s;
    }
    vector<string> set1,set2,mid;
    vector<bool> opt(n+1,true);
    for(int i=0;i<n; i++)
    {
        string s=v[i];
        reverse(all(s));
        int idx=-1;
        if(opt[i])
        {
            // cout<<i<<nl;
            for(int j=0; j<n; j++)
            {
                // cout<<j<<nl;
                if(i==j) continue;
                if(s==v[j])
                {
                    idx=j;
                    // cout<<i<<nl;
                }
            }
        }
        if(idx!=-1)
        {
            set1.push_back(v[i]);
            set2.push_back(v[idx]);
            opt[i]=false;
            opt[idx]=false;
        }
        else
        {
            string s=v[i];
            reverse(all(s));
            if(s==v[i])
            {
                mid.push_back(s);

            }
        }
    }
    // for(auto val : opt)
    // {
    //     if(val) cout<<1<<nl;
    //     else cout<<0<<nl;
    // }
    
    if(!set1.empty())
    {
        int sz=set1.size()*m+set2.size()*m;
        if(!mid.empty()) sz+=m;
        cout<<sz<<nl;
        for(auto str:set1) cout<<str;
        if(!mid.empty()) cout<<mid[0];
        reverse(all(set2));
        for(auto str:set2) cout<<str;
        cout<<nl;
    }
    else if(!mid.empty()) 
    {
        cout<<m<<nl;
        cout<<mid[0]<<nl;

    }
    else cout<<0<<nl;

    return 0;
}