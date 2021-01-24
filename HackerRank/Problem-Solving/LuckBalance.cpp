#include <bits/stdc++.h>
#define fob(i,n) for(i=0;i<n;i++)
#define ll unsigned long long
using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    int ar[n]={0},br[n]={0};
    fob(i,n)
    {
        int a,b;
        cin>>a>>b;
        if(b==1)ar[i]=a;
        if(b==0)br[i]=a;    
    }
    sort(ar,ar+n,greater<int>());
    sort(br,br+n,greater<int>());
    int sum=0;
    fob(i,n)sum=sum+br[i];
    fob(i,k)sum=sum+ar[i];
    for(i=k;i<n;i++)sum=sum-ar[i];
    cout<<sum;
    return 0;
}  
