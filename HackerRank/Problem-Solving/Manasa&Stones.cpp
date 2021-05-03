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
    int n,a,b,out(0);
    cin>>n>>a>>b;
    set<int>s;
    fob(i,0,n-1)
    {
        out = i*a + (n-i-1)*b;
        s.insert(out);
        out = i*b + (n-i-1)*a;
        s.insert(out);
    }
    for(auto it: s)cout<<it<<" ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL),cout.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}
