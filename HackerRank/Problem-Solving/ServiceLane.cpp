#include <bits/stdc++.h>
#define fob(i,n) for(i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    int n,t,i;
    cin>>n>>t;
    int ar[n];
    fob(i,n)cin>>ar[i];
    while(t--)
    {
        int a,b,j;
        cin>>a>>b;
        int min=ar[a];
        for(j=a;j<=b;j++)
        {
            if(ar[j]<=min)min=ar[j];      
        }
        cout<<min<<endl;        
    }
    return 0;
}
