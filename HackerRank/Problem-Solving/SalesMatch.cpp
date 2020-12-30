#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,sum=0;
    cin>>n;
    int ar[101]={0};
    for(int i=0;i<n;++i)
    {
        int c;
        cin>>c;
        ar[c]++;
    }
    for(int i=0;i<101;i++)
    {
        sum=sum+ar[i]/2;
    }
    cout<<sum;
    return 0;
    
}
