/*Akash Sharma LPU */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define fob(i,a,n) for(int i=a;i<n;i++)
#define invec(v,n) vll v(n);for(int i=0;i<n;i++)cin>>v[i];
#define pb push_back
#define mp make_pair

ll powered(ll a, ll b) {
    a %=MOD;
    ll out = 1;
    while (b > 0) {
        if (b & 1)out = out * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return out;
}

void solve()
{
    ll a,b;
    cin>>a>>b;
    ll out = powered(a,b);
    cout<<out;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL),cout.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<'\n';
    }
    return 0;
}
