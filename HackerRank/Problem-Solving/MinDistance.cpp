#include <bits/stdc++.h>
#define fob(i,n) for(i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    int n,i,j,dif;
    cin>>n;
    int ar[n],br[n];
    fob(i,n)cin>>ar[i];
    if(n>1)
    {
        fob(i,n)
        {
            int k=ar[i];
            for(j=i+1;j<n;j++)
            {
                if(ar[j]==k)
                {
                    dif=j-i;
                    break;
                }
                else {
                dif=1000;
                }
            }
            br[i]=dif;       
        }
    }
    else {
    br[0]=1000;
    }
    sort(br,br+n);
    if(br[0]==1000)cout<<-1;
    else {
    cout<<br[0];
    }
    return 0;
}
