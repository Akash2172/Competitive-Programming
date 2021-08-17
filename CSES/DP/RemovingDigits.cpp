#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
    vector<int>dp(1000005,0);
    for(int i=1;i<=n+1;i++)
    {
        vector<int>ans;
        int n = i;
        while(n>0)
        {
            int k = n%10;
            int r = dp[i - k] + 1;
            if(k!=0)ans.push_back(r);
            n = n/10;
        }  
        dp[i] = *min_element(ans.begin(),ans.end()); 
    }
    cout<<dp[n];
    return 0;
}
