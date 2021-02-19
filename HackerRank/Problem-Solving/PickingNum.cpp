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
    vector<int>v;
    fob(i,100)
    {
        int count=ar[i]+ar[i+1];
        v.push_back(count);      
    }
    int out=*max_element(v.begin(),v.end());
    cout<<out;
    
}
int main()
{
    solve();
    return 0;
}
