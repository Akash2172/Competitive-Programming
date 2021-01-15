#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
#define ll long long
using namespace std;
int i,k;
int cut(int ar[],int n)
{
    sort(ar,ar+n,greater<int>());
    
    k=0;
    int mn=ar[0];
    for(i,n)
    {
        if(ar[i]!=0)
        {
            if(ar[i]<=mn)mn=ar[i];
        }
    }
    
    for(i,n)
    {
        if(ar[i]>0)
        {
            ar[i]=ar[i]-mn;
            k++;
        }       
    }
    return k; 
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(i,n)cin>>ar[i];
    int t=n;
    while(t>1)
    {
        t=cut(ar,n);
        if(t!=0)cout<<t<<endl;
    }
    return 0;
}
