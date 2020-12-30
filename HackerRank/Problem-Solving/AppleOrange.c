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
    int s,t,a,b,m,n;
    int j=0,k=0;
    scanf("%d%d",&s,&t);
    scanf("%d%d",&a,&b);
    scanf("%d%d",&m,&n);
    int ar[m],br[n];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&ar[i]);
        ar[i]=ar[i]+a;        
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&br[i]); 
        br[i]=br[i]+b;       
    }
    for(int i=0;i<m;i++)
    {
        if(ar[i]>=s && ar[i]<=t)
        {
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(br[i]>=s && br[i]<=t)
        {
            k++;
        }
    }
    
    printf("%d\n",j);
    printf("%d",k);
    return 0;
}
