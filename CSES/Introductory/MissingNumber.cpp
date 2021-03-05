#include<bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define N 1000001
#define ll long long
 
 
using namespace std;
 
void solve()
{ 
    ll n,i;
    cin>>n;
    int ar[N];
    ar[0]=0;
 
    for(i=1;i<n;i++)
    {
        cin>>ar[i];        
    }
    sort(ar,ar+n);
    int out;
    for(ll i=1;i<=n;i++)
    {
        if(ar[i]!=i)
        {
            out=i;
            break;
        }
    }
    cout<<out;
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
