#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define yes cout << "YES\n"
#define no cout <<"NO\n"
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
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string a="";
        for(int l=0; l<n; l++)
        {
            if((l+2)<n && s[l+2]=='0' && (l+3>=n || s[l+3]!='0'))
            {
                int ans=((s[l]-'0')*10)+(s[l+1]-'0');
                a.push_back((char)(96+ans));
                l+=2;
            }
            else 
            {
                int ans=(s[l]-'0');
                a.push_back((char)(96+ans));
                
            }
            
        }
        cout<<a<<nl;
        
        
    }
    return 0;
}