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
#define maxN        10000005
#define all(x)      (x).begin(), (x).end()
#define fob(i,a,n)  for(int i=a;i<n;i++)
#define invec(v,n)  vll v(n);for(int i=0;i<n;i++)cin>>v[i];
#define sum(a)      accumulate((a).begin(),(a).end(),0)
#define pb          push_back
#define mp          make_pair
 
vector<ll> store(maxN);
ll get(ll ind) {
    ll z = 0;
    for (int i = ind; i <= 1000001; i += ind) z += store[i];
    return z;
}
 
ll commonDivisor(vector<ll>v , ll n)
{
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll x = v[i];
        store[x]++;
    }
    for(int i=1000001;i>=1;i--){
        if(get(i)>1){
            ans = i;
            break;
        }
    }
    return ans;
}
 
void solve()
{
    ll n;
    cin>>n;
    invec(v,n);
    ll out = commonDivisor(v,n);
    cout<<out;
}
int main()
{
    AS;
    int T(1);
    //cin >> T; 
    while(T-->0){
       solve();cout<<'\n';
    }
    return 0;
}
