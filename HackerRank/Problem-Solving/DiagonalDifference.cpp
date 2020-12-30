#include <bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n][n];
    int sum1=0,sum2=0;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        sum1= sum1 + ar[i][i];
        sum2= sum2 + ar[i][n-1-i];
    }
    int c=abs(sum1 -sum2);
    cout<<c;
    
    
    
    
    return 0;
}
