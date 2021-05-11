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

string check(string s,string k)
{
    int l=k.size(),j=0;
    fob(i,0,s.size())
    {
        if(s[i]==k[j])j++;
        if(j==l)return "YES";
    }
    return "NO";
}

void solve()
{
    string s;
    cin>>s;
    string out = check(s,"hackerrank");
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
        cout<<endl;
    }
    return 0;
}
