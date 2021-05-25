/*Akash Sharma LPU */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
#define AS ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define MOD         1000000007
#define all(x)      (x).begin(), (x).end()
#define fob(i,a,n)  for(int i=a;i<n;i++)
#define invec(v,n)  vll v(n);for(int i=0;i<n;i++)cin>>v[i];
#define sum(a)      accumulate((a).begin(),(a).end(),0)
#define pb          push_back
#define mp          make_pair


ll powered(ll a, ll b,ll m) {
    a %=m;
    ll out = 1;
    while (b > 0) {
        if (b & 1)out = out * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return out;
}

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll k = powered(b,c,MOD-1);
    ll out = powered(a,k,MOD);
    cout<<out;
}
int main()
{
    AS
    int T(1);
    cin >> T; 
    while(T-->0){
       solve();cout<<'\n';
    }
    return 0;
}
