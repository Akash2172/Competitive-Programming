#include<bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define N 1000001
#define ll long long
 
 
using namespace std;
 
void solve()
{ 
    string s;
    cin>>s;
    ll sz=s.size();
    int max=0,count=0;
    fob(i,sz-1)
    {
        if(s[i]==s[i+1])count++;
        if(count>max)max=count;  
        if(s[i]!=s[i+1])count=0;
    }
    cout<<max+1;
 
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
    }  */
    solve(); 
    return 0;
}
