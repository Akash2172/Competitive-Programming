#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
             
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();cout.tie();
    long long TT = 1;
    // cin>>TT;
    for(long long TR = 1;TR <= TT;TR++){
        long long n,sum = 0,ans = (long long)(1e12);
        cin>>n;
        vector<long long>v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
            sum = sum + v[i];
        }
        sort(v.begin(),v.end());
        long long tt = (1<<n);
        for(long long i = 0; i < tt; i++) {
            long long s = 0;
            for(long long j = 0; j < n; j++) {
                long long rt = (1<<j);
                if(i & rt) s += v[j];
            }
            long long curr = abs(sum - 2*s);
            ans = min(ans, curr);
        }
        cout << ans;
    } 
    return 0;
}
