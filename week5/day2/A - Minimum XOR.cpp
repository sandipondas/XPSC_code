#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>v;
    int XOR=0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        XOR=XOR^x;
    }
    int mn=XOR;
    //cout<<XOR<<endl;
    for(int i=0; i<n; i++){
       mn=min(mn,(XOR^v[i]));
    }
    cout<<mn<<endl;
   }
   
   return 0;
}