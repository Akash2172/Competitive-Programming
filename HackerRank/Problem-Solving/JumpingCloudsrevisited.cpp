#include <bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
bool ar[1000001]={0};

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    fob(i,n)
    {
        int c;
        cin>>c;
        v.push_back(c);
    }
    int i=k%n;
    int m=100;
    while(i!=0)
    {
        m--;
        if(v[i]==1)m-=2;
        i=(i+k)%n;       
    }
    if(v[0]==1)m-=3;
    else m--;
    cout<<m;   
}
int main()
{
    solve();
    return 0;
}
