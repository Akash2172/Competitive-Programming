#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
             
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();cout.tie();
    long long n,q;
    cin>>n>>q;
    vector<long long>v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    long long sq = sqrt(n)+1;
    long long INF = 100000000007;
    vector<long long>root(sq,INF);
    for(long long i=0;i<n;i++){
        root[i/sq] = min(root[i/sq],v[i]);
    }    
    while(q--){
        long long l,r;
        cin>>l>>r;
        l--;r--;
        long long st = l/sq;
        long long end = r/sq;
        long long ans = INF;
        for(long long i=st+1;i<end;i++)ans = min(ans,root[i]);
        long long fend = (l/sq + 1)*sq;
        for(long long i=l;i<min(fend,r);i++)ans = min(ans,v[i]);
        long long fst = (r/sq)*sq;
        for(long long i=max(fst,l);i<=r;i++)ans = min(ans,v[i]);
        cout<<ans<<'\n';
    }    
    return 0;
}
