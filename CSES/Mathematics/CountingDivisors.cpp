/*Akash Sharma LPU */
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
#define AS ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define MOD         10000000007
#define Nex         1000005
#define all(x)      (x).begin(), (x).end()
#define fob(i,a,n)  for(int i=a;i<n;i++)
#define invec(v,n)  vll v(n);for(int i=0;i<n;i++)cin>>v[i];
#define sum(a)      accumulate((a).begin(),(a).end(),0)
#define pb          push_back
#define mp          make_pair
 
vector<ll>isprime(Nex , true); 
vector<ll>prime; 
vector<ll>SPF(Nex);
 
void manipulated_seive() 
{ 
    isprime[0] = isprime[1] = false ; 
    for (ll i=2; i<Nex ; i++) 
    { 
        if (isprime[i]) 
        { 
            prime.push_back(i); 
            SPF[i] = i; 
        }
        for (ll j=0;j<(ll)prime.size()&&i*prime[j]<Nex && prime[j]<=SPF[i];j++) 
        { 
            isprime[i*prime[j]]=false; 
            SPF[i*prime[j]] = prime[j];
        } 
    } 
} 
ll countDivisors(ll m)
{
    ll i=0;
    ll p = prime[0];
    ll ans = 1;
    while(p*p<=m)
    {
        if(m%p==0)
        {
            ll cnt = 0;
            while(m%p==0){
                cnt++;
                m=m/p;
            }
            ans = ans * (cnt+1);
        }
        i++;
        p = prime[i];      
    }
    if(m!=1)ans = ans * 2;
    return ans;
}
 
void solve()
{
    ll n;
    cin>>n;    
    cout<<countDivisors(n);
}
int main()
{
    AS;
    manipulated_seive();
    int T(1);
    cin >> T; 
    while(T-->0){
       solve();cout<<'\n';
    }
    return 0;
}
