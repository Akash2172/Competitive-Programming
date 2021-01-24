#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
#define ll unsigned long long
using namespace std;

int main()
{
    ll n,i;
    cin>>n;
    ll ar[n],a=1,sum=0;
    for(i,n)cin>>ar[i];
    sort(ar,ar+n,greater<int>());
    for(i,n)
    {
        sum=sum+(a*ar[i]);
        a=a*2;      
    }
    cout<<sum;
    return 0;
}
