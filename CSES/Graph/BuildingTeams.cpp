#include <bits/stdc++.h>
using namespace std;
 
vector<vector<int>>adj(100005);
vector<int>visited(100005,0);
bool fd = false;
 
 
void dfs(int cur,int par,int col){
    visited[cur] = col; 
    for(auto node:adj[cur]){
        if(!visited[node])dfs(node,cur,3-col);
        else if(node!=par and visited[node]==col)fd = true;
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
        if(!visited[i])dfs(i,0,1);
    }   
    if(fd)cout<<"IMPOSSIBLE";
    else{
        for(int i=1;i<=n;i++)cout<<visited[i]<<" ";
    }    
    return 0;
}
