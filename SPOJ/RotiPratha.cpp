#include<bits/stdc++.h>
 
using namespace std;
 
 
bool checkPratha(vector<int>chef,int k,int time,int n)
{
    int ans = 0;
    for(int i=0;i<k;i++)
    {
        int t = 0;
        for(int j=0;j<time;j++)
        {
            t = t + (j+1)*chef[i];
            if(t>time)break;
            ans++;
        }
        if(ans>=n)return true;
    }
    return false;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int>chef(k);
        for(int i=0;i<k;i++)cin>>chef[i];
        int kc = *min_element(chef.begin(),chef.end());
        int start = 0;
        int end = n*(n+1)*kc/2;
        int ans = 0;
        while(start<=end)
        {
            int mid = (start+end)/2;
            if(checkPratha(chef,k,mid,n))
            {
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }
        cout<<ans;
        cout<<'\n';
    }
    
    return 0;
} 
