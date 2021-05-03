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

void solve()
{
    string s;
    ll n,cnt(0);
    cin>>s>>n;
    ll l=s.size();
    fob(i,0,l)
    {
        if(s[i]=='a')cnt++;
    }
    ll k = (n/l) * cnt;
    ll c = n%l;
    fob(i,0,c)
    {
        if(s[i]=='a')k++;
    }
    cout<<k;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL),cout.tie(NULL);
    solve();
    return 0;
}
