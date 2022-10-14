#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
             
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();cout.tie();
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int f = 0,ans = 0;
    for(int i=0;i<m;i++){
        if(a[f]<b[i]-k){
            while(f<n and a[f]<(b[i]-k))f++;
        }
        if((b[i]-k)<=a[f] and (b[i]+k)>=a[f]){
            f++;
            ans++;
        }    
    }
    cout<<ans;
    return 0;
}
