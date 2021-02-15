#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
#define ll unsigned long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int odd=0,even=0;
        int ar[n];
        for(i,n)cin>>ar[i];
        for(i,n)
        {
            if(ar[i]%2==0)even++;
            else odd++;
        }
        if(even<odd)cout<<even<<'\n';
        else cout<<odd<<'\n';
        
    }
    return 0;
}
