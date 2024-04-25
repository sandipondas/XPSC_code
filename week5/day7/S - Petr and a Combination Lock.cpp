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
        int n;
        cin>>n;
        vector<int>v(n);
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        bool ans=false;
        //cout<<sum<<nl;
        for(int i=1; i<(1 << n)-1; i++){
            int x=0;
            int y=0;
            for(int k=0; k<n; k++){
                if((i>>k)&1){
                    x+=v[k];
                    x%=360;
                }
                else{
                    y+=v[k];
                    y%=360;
                }
                
            }
            //cout<<x<<nl;
           // cout<<x<<" "<<y<<nl;
            if(x==y || sum%360==0 ){
                ans=true;
                break;
            }
        }
        
        if(ans) yes;
        else no;
        
    }
    return 0;
}