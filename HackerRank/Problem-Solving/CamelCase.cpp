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

void solve()
{
    string s;
    cin>>s;
    int l = s.size();
    int cnt(1);
    fob(i,0,l)
    {
        if(s[i]>=65 && s[i]<=90)cnt++;
    }
    cout<<cnt;
}
int main()
{
    AS
    int T(1);
    // cin >> T; 
    while(T-->0){
       solve();cout<<'\n';
    }
    return 0;
}
