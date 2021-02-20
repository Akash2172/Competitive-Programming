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
    sort(v.begin(),v.end());
    int m=0;
    int count=1;
    fob(i,n)
    {
        int mini=v[m];
        if(v[i]>mini+4)
        {
            m=i;
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
