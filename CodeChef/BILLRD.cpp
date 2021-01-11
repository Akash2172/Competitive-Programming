#include <bits/stdc++.h>
#define for(i,n,k) for(i=0;i<n;i=i+k)
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x,y;
        cin>>n>>k>>x>>y;
        
        ll br[1][1];
        ll m;
        if(x==y)cout<<n<<" "<<n<<endl  ;
        else if(x!=y)
        {
            if(x>y)
            {
                ll ar[4][2]={{n,y+n-x},{y+n-x,n},{0,x-y},{x-y,0}};
                m=(k-1)%4;
                br[0][0]=ar[m][0];
                br[0][1]=ar[m][1];     
            }
            if(y>x)
            {
                ll ar[4][2]={{x+n-y,n},{n,x+n-y},{y-x,0},{0,y-x}};
                m=(k-1)%4;
                br[0][0]=ar[m][0];
                br[0][1]=ar[m][1];       
            }
            cout<<br[0][0]<<" "<<br[0][1]<<endl;
        }
    }
    return 0;
}
