/*Akash Sharma LPU */
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<ll>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define fob(i,a,n) for(ll i=a;i<n;i++)
#define pb push_back
#define mp make_pair
 
ll dp[1000005]={0};
 
void minCoin(ll n , ll x , ll coin[])
{
    vll ans(x,INT_MAX);
    fob(i,0,n)
    {
        if(dp[i]==0)
        {
            fob(j,0,x)
            {
                if(i>=coin[j])ans[j]=dp[i-coin[j]] + 1;
            }
            dp[i]=*min_element(all(ans));
        }     
    }
}
void solve()
{
    ll x,n;
    cin>>n>>x;
    ll coins[n];
    fob(i,0,n){
        ll c;
        cin>>c;
        coins[i]=c;
        dp[c-1]=1;
    }
    minCoin(x,n,coins);
    if(dp[x-1]>x)cout<<-1;
    else cout<<dp[x-1];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL),cout.tie(NULL);
    solve();
    return 0;
}
