#include <bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define ll long long
#define MOD 1000000007
using namespace std;
 
void solve()
{
    ll n;
    cin>>n;
    ll ans=1;
    fob(i,n)
    {
        ans = (ans*2)%MOD;
    }
    cout<<ans;   
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    solve();
    return 0;
}
