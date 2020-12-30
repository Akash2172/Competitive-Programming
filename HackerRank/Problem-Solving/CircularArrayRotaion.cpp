#include <bits/stdc++.h>

using namespace std;




int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int ar[n],br[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];       
    }
    int t=k%n;
    for(int j=0;j<n;j++)
    {        
        br[t]=ar[j];
        t++;
        if(t==n)t=0;
        
    }
    
    
    for(int i=0;i<q;i++)
    {
        int c;
        cin>>c;
        
        cout<<br[c]<<endl;
        
    }   
    
    return 0;
}

 
