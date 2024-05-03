#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const double pi = 2 * acos(0);
int Max = INT_MAX;
int Min = INT_MIN;
int Inf = 1e18;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        while(k--)
        {
            int a;
            cin>>a;
            int l=0,r=n-1,mid;
            bool ans=false;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(a==v[mid])
                {
                   ans=true;
                   break;
                }
                else if(a<v[mid])
                {
                   r=mid-1;
                }
                else 
                {
                   l=mid+1;
                }
            }
           if(ans) yes;
           else no;
        }
    }
    return 0;
}