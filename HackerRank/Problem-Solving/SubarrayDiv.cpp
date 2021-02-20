#include <bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
bool ar[1000001]={0};

void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    fob(i,n)
    {
        int c;
        cin>>c;
        v.push_back(c);       
    }
    int m,d;
    cin>>d>>m;
    int count=0;
    fob(i,v.size())
    {
        int sum=0;
        for(int j=i;j<i+m;j++)
        {
            sum+=v[j];           
        }
        if(sum==d)count++;
    }
    cout<<count;   
}
int main()
{
    solve();
    return 0;
}
