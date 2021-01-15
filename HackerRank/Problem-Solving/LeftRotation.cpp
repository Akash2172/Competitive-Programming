#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
using namespace std;
int rotate(int ar[],int n);
int main()
{
    int n,d,i;
    cin>>n>>d;
    int ar[n];
    for(i,n)
    {
        cin>>ar[i];
    }
    int t=d%n;
    for(i,t)
    {
        rotate(ar,n);
    }
    for(i,n)cout<<ar[i]<<" ";   
    return 0;
}
int rotate(int ar[],int n)
{
    int i;
    int k=ar[0];
    for(i,n)
    {
        ar[i]=ar[i+1];       
    }
    ar[n-1]=k;
    return 0;
}
