#include <bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
bool ar[1000001]={0};

void solve()
{
    ll a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    ll m=min(c,d);
    if(m+e<max(c,d))
    {
        if(c<d)d=m+e;
        else if(d<c)c=m+e;
    }
    ll out=a*c + b*d;
    cout<<out;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        printf("\n");
    }
    return 0;
}
