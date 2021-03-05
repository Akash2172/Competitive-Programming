#include<bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define N 1000001
#define ll long long
 
 
using namespace std;
 
void solve()
{ 
    ll n;
    cin>>n;
    set<ll>v;
    fob(i,n)
    {
        ll c;
        cin>>c;
        v.insert(c);
    }
    cout<<v.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    /*int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<'\n';
    }  */
    solve(); 
    return 0;
}
