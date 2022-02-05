#include <bits/stdc++.h>
using namespace std;
 
vector<vector<int>>adj(100005);
vector<int>visited(100005,0);
vector<int>cycle(100005,0);
bool solvable = true;
 
 
void dfs(int cur,vector<int>&ans){
    visited[cur] = 1;
    cycle[cur] = 1;
    for(auto node:adj[cur]){
        if(!visited[node])dfs(node,ans);
        else if(cycle[node]==1)solvable = false;
    }
    cycle[cur] = 0;
    ans.push_back(cur);
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
    } 
    vector<int>ans;
    for(int i=1;i<=n;i++){
        if(!visited[i])dfs(i,ans);
    }
    if(!solvable){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}
