#include <bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
bool ar[1000001]={0};

void solve()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=1;i<=n;i++)
    {
        int c;
        cin>>c;
        v[c]=i;
    }
    for(int i=1;i<=n;i++)
    {
        int m=v[i];
        int k=v[m];
        cout<<k<<'\n';       
    }
    
}
int main()
{
    solve();
    return 0;
}
