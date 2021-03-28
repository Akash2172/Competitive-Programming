#include <bits/stdc++.h>
#define fob(i,a,n) for(int i=a;i<n;i++)
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    ll a,n,k,l;
    cin>>a>>n;
    vector<int>v(n); 
    fob(i,0,n)cin>>v[i];
    fob(i,0,n)
    {
        fob(j,0,n)
        {
            if(v[i]+v[j]==a && i!=j)
            {
                k=i+1;
                l=j+1;
            }

        }
    }
    cout<<l<<" "<<k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<'\n';
    }
    return 0;
}
