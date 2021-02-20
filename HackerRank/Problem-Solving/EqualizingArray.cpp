#include <bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
bool ar[1000001]={0};

void solve()
{
    int n;
    cin>>n;
    int ar[101]={0};
    fob(i,n)
    {
        int c;
        cin>>c;
        ar[c]++;       
    }
    sort(ar,ar+100,greater<int>());
    int out=n-ar[0];
    cout<<out;   
}
int main()
{
    solve();
    return 0;
}
