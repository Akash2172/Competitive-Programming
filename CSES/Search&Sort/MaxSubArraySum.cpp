#include<bits/stdc++.h>
using namespace std;
 
long long maximumSum(vector<long long>ar , long long n)
{
    long long dp[n];
    long long maxa = ar[0];
    dp[0]=ar[0];
    if(dp[0]<0)dp[0]=0;
    for(long long i=1;i<n;i++)
    {
        dp[i] = dp[i-1]+ar[i];
        maxa = max(maxa,dp[i]);
        if(dp[i]<0)dp[i] = 0;       
    }
    return maxa;
}
 
int main()
{
    long long n;
    cin>>n;
    vector<long long>ar(n);
    for(long long i=0;i<n;i++)cin>>ar[i];
 
    long long ans = maximumSum(ar,n);
    cout<<ans;
 
    return 0;
}
