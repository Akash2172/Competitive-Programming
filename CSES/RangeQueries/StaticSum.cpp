#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
             
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();cout.tie();
    long long TT = 1;
    // cin>>TT;
    for(long long TR = 1;TR <= TT;TR++){
        long long n,q;
        cin>>n>>q;
        vector<long long>pref(n+1,0);
        for(long long i=1;i<=n;i++){
            long long c;
            cin>>c;
            pref[i] = pref[i-1] + c;
        }
        while(q--){
            long long l,r;
            cin>>l>>r;
            long long ans = pref[r] - pref[l-1];
            cout<<ans<<'\n';
        }    
    } 
    return 0;
}
