#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<long long,long long>>>adj(100005);
vector<bool>visited(100005,false);
vector<long long>subSize(100005,0);

long long dfs(long long cur,long long &ans,long long n){
    visited[cur] = 1;
    subSize[cur] = 1;
    for(auto node:adj[cur]){
        long long nbr = node.first;
        if(!visited[nbr]){
            subSize[cur]+=dfs(nbr,ans,n);
            long long nx = subSize[nbr];
            long long ny = n - nx;
            ans+= 2*min(nx,ny)*(node.second);
        }
    }
    return subSize[cur];
}

void clearing(){
    for(long long i=0;i<=100005;i++){
        adj[i].clear();
        visited[i] = false;
        subSize[i] = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();cout.tie();
    long long TT = 1;
    cin>>TT;
    for(long long TR = 1;TR <= TT;TR++){
        cout<<"Case #"<<TR<<": ";
        long long n;
        cin>>n;  
        for(long long i=0;i<n-1;i++){
            long long a,b,c;
            cin>>a>>b>>c;
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }  
        long long ans = 0;
        dfs(1,ans,n);               
        cout<<ans<<'\n'; 
        clearing();     
    }
    return 0;
}
