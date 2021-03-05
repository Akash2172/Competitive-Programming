#include<bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define N 1000001
#define ll long long


using namespace std;

void solve()
{ 
    ll x,y,out;
    cin>>x>>y;
    if(x>=y && x%2==0)
    {
        out=(x*x)-y+1;
    }
    if(x>y && x%2!=0)
    {
        out=((x-1)*(x-1))+y;
    }
    if(y>x && y%2==0)
    {       
        out=((y-1)*(y-1))+x;
    }
    if(y>=x && y%2!=0)
    {
        out=(y*y)-x+1;
    }
    cout<<out;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<'\n';
    } 
    //solve(); 
    return 0;
}
