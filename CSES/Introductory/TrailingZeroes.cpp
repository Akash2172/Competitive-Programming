#include <bits/stdc++.h>
#define fob(i,a,n) for(int i=a;i<n;i++)
#define ll long long
#define MOD 1000000007
using namespace std;
 
int findTrailingZeros(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}
 
void solve()
{
    ll n;
    cin>>n;
    int m=findTrailingZeros(n);
    cout<<m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    solve();
    return 0;
}
