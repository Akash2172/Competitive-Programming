#include <bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
bool ar[1000001]={0};

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int buy=a/b;
    int count=buy;
    while(buy>=c)
    {
        count+=buy/c;
        buy=buy/c + buy%c;       
    }
    cout<<count;   
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        printf("\n");
    }
    return 0;
}
