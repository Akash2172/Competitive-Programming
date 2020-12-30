
#include <bits/stdc++.h>
#include<math.h>
#include <cstdlib>

using namespace std;
#define ll long long 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,r,l,i,v;
        cin>>n>>k>>r;
        l=k%n;
        i=(l+r-1);
        
        if((i%n)==0)
        {
            v=n;
        }
        else if(i%n!=0)
        {
            v= i%n;
        }
        

        
        cout<<v<<endl;
        
    }
    return 0;
    
}
  
