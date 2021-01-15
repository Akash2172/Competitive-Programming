#include <bits/stdc++.h>
#define for(i,a,n) for(i=a;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    int s,e,k,i,ff,count=0,rev;
    cin>>s>>e>>k;
    for(i,s,e+1)
    {
        rev=0;
        int a;
        int st=i;
        while(st>0)
        {
            a=st%10;
            rev=10*rev + a;
            st=st/10;   
        }   
        ff=abs(i-rev);
        if(ff%k==0)count++;       
    }
    cout<<count;
    return 0;
}
