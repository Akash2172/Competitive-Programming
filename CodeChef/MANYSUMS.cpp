#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll sum1=a+a;
        ll sum2=b+b;
        cout<<(sum2-sum1) + 1<<endl;
    }
    return 0;
}
