#include <bits/stdc++.h>
using namespace std;
 
vector<vector<int>>adj(100005);
vector<bool>visited(100005,0);
 
void dfs(int cur,int par){
    visited[cur] = 1;
    for(auto node:adj[cur]){
        if(!visited[node])dfs(node,cur);
    }
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();cout.tie();
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int>ans;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ans.push_back(i);
            dfs(i,-1);
        }
    }
    int l = ans.size()-1;
    cout<<l<<'\n';
    for(int i=0;i<l;i++){
        cout<<ans[i]<<" "<<ans[i+1]<<'\n';
    }
 
    return 0;
}
