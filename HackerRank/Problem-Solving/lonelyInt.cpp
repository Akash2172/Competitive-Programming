#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[101]={0};
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        ar[c]++;
    }
    for(int i=0;i<101;i++)
    {
        if(ar[i]==1)cout<<i;
    }
    return 0;    
}
