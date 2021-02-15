#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        vector<ll>ar;
        for(i,n)
        {
            ll c;
            cin>>c;
            ar.push_back(c);
        }
        sort(ar.begin(),ar.end(),greater<int>());
        ll max=ar[0];
        ll min=ar[n-1];
        cout<<2*max - 2*min<<'\n';
    }
    return 0;
}
