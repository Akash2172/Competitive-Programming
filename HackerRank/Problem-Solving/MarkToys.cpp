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
    sort(v.begin(),v.end());
    int count=0,i=0;
    while(k>0)
    {
        k=k-v[i];
        count++;
        i++;
    }
    cout<<count-1;    
}
int main()
{
    solve();
    return 0;
}
