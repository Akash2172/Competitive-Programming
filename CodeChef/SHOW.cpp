#include<bits/stdc++.h>

using namespace std;
#define maxN 100005

vector<int>adj[maxN];
vector<int>parent(maxN);
vector<int>level(maxN);
vector<bool>cats(maxN);
vector<bool>leaf(maxN);

void dfs(int cur,int par)
{
    int flag = 1;
    parent[cur] = par;
    level[cur] = level[par]+1;
    for(int node:adj[cur])
    {
        if(node!=par){
            flag=0;
            dfs(node,cur);
        }
    }
    if(flag==1)leaf[cur]=1;
}

void bfs(int x)
{
    queue<int> q;
    bool visited[maxN];
    visited[x] = true;
    q.push(x);
    while (!q.empty()) {
        int s = q.front(); q.pop();
        for (auto u : adj[s]) {
            if (visited[u]) continue;
            visited[u] = true;
            q.push(u);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        bool c;
        cin>>c;
        cats[i]=c;
    }
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,0);
    int x = 1,y,ans=0,total=0,cnt;
    vector<int>leaves;
    for(int i=1;i<=n;i++)
    {
        if(leaf[i])leaves.push_back(i);
    }
    for(int i=0;i<leaves.size();i++)
    {
        cnt=0;
        total++;
        y = leaves[i];
            
        while(y!=x)
        {
            if(cats[y])cnt++;
            else cnt=0;
            if(parent[y]==x && cats[x])cnt++;
            if(cnt>m)
            {
                ans++;
                break;
            }
            y = parent[y];
        }
    }
    cout<<total-ans;
    
    return 0;
}
