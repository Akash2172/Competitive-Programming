#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
#define ll unsigned long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll ar[n];
        for(i,n)cin>>ar[i];
        ll odd=0;
        for(i,n)
        {
            if(ar[i]%2!=0)odd=odd+ar[i];
        }
        if(odd%2!=0)cout<<2<<'\n';
        else cout<<1<<'\n';
    }
    return 0;
}
