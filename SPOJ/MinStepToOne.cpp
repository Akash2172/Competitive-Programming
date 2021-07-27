//Given a number n, we can divide it by 2(if divisible) or by 3(if divisible) or subtract 1...
//What is the minimum step require to reach 1;

#include<bits/stdc++.h>

using namespace std;

#define maxN 30000005

int dp[maxN]={0};
int dp1[maxN]={0};

int minStepBottomUp(int n)
{
    int mini1 = maxN, mini2 = maxN ,mini3 = maxN;
    for(int i=4;i<=n;i++)
    {
        mini1 = (i%3==0)?dp1[i/3]+1:maxN;
        mini2 = (i%2==0)?dp1[i/2]+1:maxN;
        mini3 = dp1[i-1]+1;
        dp1[i] = min(min(mini1,mini2),mini3);
    }
    return dp1[n];
}

int minStepTopDown(int n) //Recursion + Memorisation
{
    if(n<2)return 0;
    if(dp[n]!=0)return dp[n];

    int mini1 = maxN, mini2 = maxN ,mini3 = maxN;
    if(n%2==0)mini1 = minStepTopDown(n/2)+1;
    if(n%3==0)mini2 = minStepTopDown(n/3)+1;
    mini3 = minStepTopDown(n-1)+1;

    dp[n]=min(min(mini1,mini2),mini3);
    return dp[n];
}

int main()
{
    int t;
    cin>>t;
    dp[0]=dp[1]=0;
    dp[2]=dp[3]=1;
    dp1[0]=dp1[1]=0;
    dp1[2]=dp1[3]=1;
    for(int i=1;i<=t;i++)
    {
    	int n;
    	cin>>n;
    	int ans = minStepTopDown(n);
	    //int ans2 = minStepBottomUp(n);
	    cout<<"Case "<<i<<": "<<ans<<endl;
	}
    
    return 0;
}
