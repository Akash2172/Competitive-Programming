#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, k,out=0,m;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&k);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
               
    }
    m=arr[0];
    for (int i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
           m=arr[i];
        }  
        
    }
    out=m-k;
    
    if(out>0)
    {
        printf("%d",out);
    }
    else if(out<0)
    {
        printf("%d",0);
    }
    
    
    
    return 0;
}
