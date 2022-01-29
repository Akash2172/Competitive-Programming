#include <bits/stdc++.h>
using namespace std;
 
vector<vector<int>>adj(100005);
vector<int>dist(100005,-1);
bool found = false;
 
 
void bfs(int src){
    queue<int>q;
    q.push(src);
    dist[src] = 0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto node:adj[cur]){
            if(dist[node]==-1){
                dist[node] = dist[cur] + 1;
                q.push(node);
            }
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
    bfs(1);
    if(dist[n]==-1){
        cout<<"IMPOSSIBLE";
        return 0;
    }   
    int t = n;
    vector<int>ans;
    ans.push_back(t);
    while(t!=1){
        int k = n;
        int f = t;
        for(auto node:adj[t]){
            if(dist[node]<k){
                k = dist[node];
                f = node;
            }
        }
        t = f;
        ans.push_back(t);
    }  
    cout<<ans.size()<<"\n";
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}
