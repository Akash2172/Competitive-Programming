#include <assert.h>
#include <ctype.h>
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
    int n,k,paid,sum=0,spaid;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&paid);
    for(int i=0;i<n;i++)
    {
        if(i!=k)
        {
            sum=sum+a[i];
            spaid=sum/2;
        }
    }
    if(spaid==paid)
    {
        printf("Bon Appetit");
    }
    else
    {
        printf("%d",(paid-spaid));
    }
    
    
    
    
    
    return 0;
}
