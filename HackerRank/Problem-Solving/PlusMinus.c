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
    int n;
    float pos,neg,zer,p=0,t=0,z=0;
    scanf("%d", &n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            p++;
        }
        else if(a[i]==0)
        {
            z++;
        }
        else if(a[i]<0)
        {
            t++;
        }
        
    } 
    pos=(p)/n;
    zer=(z)/n;
    neg=(t)/n;
    
    printf("%f",pos);    
    printf("\n%f",neg);
    printf("\n%f",zer);
    return 0;
}
    
    
    
    
    
