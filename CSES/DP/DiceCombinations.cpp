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
#define invec(v,n)  vi v(n);for(int i=0;i<n;i++)cin>>v[i];
#define sum(a)      accumulate((a).begin(),(a).end(),0)
#define pb          push_back
#define mp          make_pair
 
int dp[10000005];
 
ll countDice(int n)
{
    dp[2] = dp[1]+1;
    dp[3] = dp[2]+dp[1]+1;
    dp[4] = dp[3]+dp[2]+dp[1]+1;
    dp[5] = dp[4]+dp[3]+dp[2]+dp[1]+1;
    dp[6] = dp[5]+dp[4]+dp[3]+dp[2]+dp[1]+1;
    if(n>6)
    {
        for(int i=7;i<=n;i++)
        {
            dp[i]=(((((dp[i-1] + dp[i-2])%MOD + dp[i-3])%MOD + dp[i-4])%MOD + dp[i-5])%MOD + dp[i-6])%MOD;
        }
    }
    return dp[n];   
}
 
 
void solve()
{
    int n;
    cin>>n;
    ll ans = countDice(n);
    cout<<ans;
}
int main()
{
    AS
    int T(1);
    dp[0]=0;
    dp[1]=1;
    while(T-->0){
       solve();cout<<'\n';
    }
    return 0;
}
