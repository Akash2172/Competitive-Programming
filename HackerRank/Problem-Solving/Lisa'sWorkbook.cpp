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
    int page=1;
    int count=0;
    fob(i,n)
    {
        int m=1;
        for(int j=1;j<=v[i];j++)
        {
            if(j<=k*m)
            {
                if(page==j)count++;
            }
            else {
            page++;
            if(page==j)count++;
            m++;
            }
        }
        page++;
    }
    cout<<count;
    
}
int main()
{
    solve();
    return 0;
}
