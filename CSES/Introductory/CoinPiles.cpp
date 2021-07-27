#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        string ans;
        cin>>a>>b;
        if(2*a - b>=0 && 2*b-a>=0 && (2*a-b)%3==0 && (2*b-a)%3==0)ans="YES";
        else ans = "NO";
        cout<<ans<<'\n';
    }
    return 0;     
}
