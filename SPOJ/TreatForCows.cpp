#include<bits/stdc++.h>
 
using namespace std;
 
int dp[2005][2005];
int wines[2005];
 
int TotalProfitTopDown(int x,int y, int curProfit)
{
    if(x>y)return 0;
    if(x==y)return wines[x]*curProfit;
    if(dp[x][y]!=0)return dp[x][y];
    int ans1 = wines[x]*curProfit + TotalProfitTopDown(x+1,y,curProfit+1);
    int ans2 = wines[y]*curProfit + TotalProfitTopDown(x,y-1,curProfit+1);
    int ans = max(ans1,ans2);
    dp[x][y] = ans;
    return ans;
}
 
int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>wines[i];
    int ans = TotalProfitTopDown(0,n-1,1);
    cout<<ans;
    return 0;
}
