#include<bits/stdc++.h>
 
using namespace std;
 
#define maxN 20000005
 
int dp[maxN]={0};
int dp1[maxN+1]={0};
 
void minStepBottomUp()
{    
	dp1[0]=dp1[1]=0;
	dp1[2]=dp1[3]=1;
    for(int i=4;i<=maxN;i++)
    {
    	int mini1 = maxN, mini2 = maxN ,mini3 = maxN;
        if(i%3==0)mini1 = dp1[i/3]+1;
        if(i%2==0)mini2 = dp1[i/2]+1;
        mini3 = dp1[i-1]+1;
        dp1[i] = min(min(mini1,mini2),mini3);
    }
}
 
int main()
{
    int t;
    cin>>t;
    minStepBottomUp();
    for(int i=1;i<=t;i++)
    {
    	int n;
    	cin>>n;
	    int ans2 = dp1[n];
	    cout<<"Case "<<i<<": "<<ans2<<endl;
	}
    
    return 0;
}
