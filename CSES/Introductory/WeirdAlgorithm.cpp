#include<bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define N 1000001
#define ll long long
 
 
using namespace std;
 
void solve()
{ 
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n>1)
    {
        if(n%2==0)n=n/2;
        else n=3*n+1;
        cout<<n<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    /*int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<'\n';
    }  */
    solve(); 
    return 0;
}
