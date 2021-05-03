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
    int n,chng;
    cin>>n;
    vector<string>v(n+1);
    fob(i,0,n)
    {
        cin>>v[i];
    }
    fob(i,1,n-1)
    {
        string s = v[i];
        string ss = v[i+1];
        string sss = v[i-1];
        fob(j,1,n-1)
        {
            int l = s[j] - '0';
            int m = s[j-1] - '0';
            int mm = s[j+1] - '0';
            int lc = ss[j] - '0';
            int lt = sss[j] - '0';
            if(l>m && l>mm && l>lc && l>lt)v[i][j]='X';
        }
    }
    fob(i,0,n)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL),cout.tie(NULL);
    solve();
    return 0;
}
