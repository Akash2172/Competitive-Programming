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
        int n,k,i;
        cin>>n>>k;
        int count=0,tc=0;
        int ar[n];
        for(i,n)cin>>ar[i];
        for(i,n)
        {
            if(ar[i]==-1)count++;
        }
        int solve=n-count;
        int min=ceil(n/2.0);
        if(solve<min)cout<<"Rejected"<<'\n';
        else
        {
            int t=0;
            for(i,n)
            {
                if(ar[i]<=1 && ar[i]!=-1)tc++;
                if(ar[i]>k){
                    t=1;
                    cout<<"Too Slow"<<'\n';
                    break;
                }
            }
            if(tc==n && count==0)cout<<"Bot"<<'\n';
            else if(tc!=n && t==0) cout<<"Accepted"<<'\n';
        }
        
    }
    return 0;
}
