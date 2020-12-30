#include <bits/stdc++.h>
#include<math.h>

using namespace std;


int main()
{
    
    int n,p,s,c,k;
    cin >> n>>p;
    
    if(n%2==0)
    {
        int l=(n-p);
        
    
        if(l%2!=0){
            l=l+2;
        }
        c=l/2;
        
                
    }
    if(n%2!=0)
    {
        c=(n-p)/2;   
    }
      
    
    k=(p)/2;
    
    if(c>k)
    {
        s=k;       
    }
    
    if(k>c)
    {
        s=c;        
    }
    if(c==k)
    {
        s=c;
    }
    
    
    cout<<s;

    
    return 0;
}
