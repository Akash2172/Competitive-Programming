#include<bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define N 1000001
#define ll long long
 
 
using namespace std;
 
void solve()
{ 
    int n;
    cin>>n;
    vector<int>v;
    if (n==1)cout<<1;
    else if(n==2 || n==3)cout<<"NO SOLUTION";
    else if(n>=4)
    {
        for(int i=2;i<=n;i+=2)
        {
            v.push_back(i);    
        }
        for(int i=1;i<=n;i+=2)
        {
            v.push_back(i);    
        }
    }
    fob(i,v.size())cout<<v[i]<<" ";
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    /*int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<'\n';
    }*/  
    solve(); 
    return 0;
}
