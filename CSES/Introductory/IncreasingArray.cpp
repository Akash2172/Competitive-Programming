#include<bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define N 1000001
#define ll long long
 
 
using namespace std;
 
void solve()
{ 
    ll n;
    cin>>n;
    vector<ll>v;
    fob(i,n)
    {
        ll c;
        cin>>c;
        v.push_back(c);
    }
    ll count=0;
    fob(i,n-1)
    {
        if(v[i+1]<v[i])
        {
            ll a=v[i]-v[i+1];
            count+=(a);
            v[i+1]+=(a);
        }
    }
    cout<<count;
 
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
