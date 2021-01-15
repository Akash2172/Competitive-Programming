#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int m=1;
        for(i,n)
        {
            if(i%2==0)m=m*2;
            else
            m=m+1;
        }
        cout<<m<<endl;
    }  
    return 0;
}
