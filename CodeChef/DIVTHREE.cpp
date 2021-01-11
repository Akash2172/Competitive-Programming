#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
#define ll long long

using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        ll n,k,d,j;
        cin>>n>>k>>d;
        ll sum=0;
        for(j,n)
        {
            ll c;
            cin>>c;
            sum=sum+c;
        }
        ll day=sum/k;
        ll out;
        if(day>d)out=d;
        if(d>=day)out=day;
        cout<<out<<endl;
    }
    return 0;
}
