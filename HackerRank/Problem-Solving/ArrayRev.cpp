#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
#define ll long long
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ar[n];
    for(i,n)cin>>ar[i];
    reverse(ar,ar+n);
    for(i,n)cout<<ar[i]<<" ";    
    return 0;
}
