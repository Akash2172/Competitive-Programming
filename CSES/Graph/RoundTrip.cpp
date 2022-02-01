#include <bits/stdc++.h>
using namespace std;
 
vector<vector<int>>adj(100005);
vector<int>visited(100005,0);
vector<int>parent(100005);
bool fd = false;
int gain,again;
 
void dfs(int cur,int par){
    visited[cur]++;
    parent[cur] = par;
    for(auto node:adj[cur]){
        if(!visited[node])dfs(node,cur);
        else if(node!=par){
            fd = true;
            gain = cur;
            again = node;
            return;
        }
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
    for(int i=1;i<=n;i++){
        if(!visited[i])dfs(i,0);
        if(fd)break;
    }
    if(!fd){
        cout<<"IMPOSSIBLE"<<'\n';
    }
    else{
        vector<int>ans;
        ans.push_back(gain);
        while(again!=gain){
            ans.push_back(again);
            again = parent[again];
        }
        ans.push_back(gain);
        cout<<ans.size()<<"\n";
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    }
    return 0;
}
