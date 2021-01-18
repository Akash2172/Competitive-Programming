#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    int n,i,t=0,count=0;
    cin>>n;
    int ar[n];
    for(i,n)cin>>ar[i];
    while(t<=n)
    {
        
        if(ar[t+2]==1)t=t+1;
        else {
        t=t+2;
        }
        count++;
    }
    cout<<count-1;
    return 0;
}
