#include <bits/stdc++.h>
#define for(i,a,n) for(i=a;i<n;i++)
#define ll unsigned long long
using namespace std;

int main()
{
    int a,out=1,i;
    cin>>a;
    for(i,1,11)
    {
        if(a%i==0)out=i;
    }
    cout<<out<<'\n';
    return 0;
}

