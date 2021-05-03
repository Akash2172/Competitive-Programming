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
    int n,cnt(0);
    string s;
    cin>>n>>s;
    vi v(n+1);   
    v[0]=0;
    fob(i,0,n)
    {
        if(s[i]=='D')v[i+1]=v[i] - 1;
        else if(s[i]=='U') v[i+1]=v[i] + 1;
    }
    fob(i,1,n+1)if(v[i]==0 && v[i]>v[i-1])cnt++;
    cout<<cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL),cout.tie(NULL);
    solve();
    return 0;
}
