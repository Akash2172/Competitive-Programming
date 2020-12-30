#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n,ar[5]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int c;
        cin>>c;
        ar[c]++;
    }
    int m;
    int max=ar[1];
    for(int i=1;i<=5;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
            m=i;
        }
    }
    cout<<m;   
    
    
    return 0;
}
