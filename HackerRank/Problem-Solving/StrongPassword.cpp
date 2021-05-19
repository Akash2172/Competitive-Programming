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
    int n,cnt(0);
    string s;
    cin>>n>>s;
    vi v(4,0);
    fob(i,0,n)
    {
        if(s[i]<=122 && s[i]>=97)v[0]++;
        if(s[i]>=33 && s[i]<=46)v[1]++;
        if(s[i]>=65 && s[i]<=90)v[2]++;
        if(s[i]>=48 && s[i]<=57)v[3]++;
    }
    if(n<6)
    {
        fob(i,0,4)
        {
            if(v[i]==0)cnt++;
        }
        cout<<max(cnt,6-n);
        return;
    }
    else 
    {
        fob(i,0,4)
        {
            if(v[i]==0)cnt++;
        }
        cout<<cnt;
        return;
    }

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
