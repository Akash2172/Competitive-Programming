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
    int count=0;
    fob(i,n)
    {
        int m=v[i];
        if(binary_search(v.begin(),v.end(),m+k) && binary_search(v.begin(),v.end(),m+2*k))
        {
            count++;
        }        
    }
    cout<<count;    
}
int main()
{
    solve();
    return 0;
}
