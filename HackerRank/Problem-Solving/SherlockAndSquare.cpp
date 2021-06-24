#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        int k = sqrt(a);
        int kk = sqrt(b);
        int ans = kk - k;
        if(k*k==a)ans++;
        cout<<ans<<endl;
    }
}
