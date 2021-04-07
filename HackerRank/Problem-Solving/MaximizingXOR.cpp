#include <bits/stdc++.h>
#define fob(i,a,n) for(int i=a;i<=n;i++)
#define ll long long
#define MOD 1000000007
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    int max=0;
    fob(i,a,b)
    {
        fob(j,a,b)
        {
            cnt=(i^j);
            if(cnt>max)max=cnt;
        }
    }
    cout<<max;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    solve();
    return 0;
}
