#include <bits/stdc++.h>
#define fob(i,n) for(i=0;i<n;i++)
#define ll unsigned long long
using namespace std;

int main()
{
    int ar[50],arr[50],i;
    ar[0]=2,arr[0]=2;
    for(i=1;i<51;i++)
    {
        ar[i]=(ar[i-1]*3)/2;
        arr[i]=arr[i-1] + ar[i];
    }
    int m;
    cin>>m;
    cout<<arr[m-1]<<endl;
    return 0;
}
