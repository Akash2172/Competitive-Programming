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
    int a[3],b[3],alice=0,bob=0;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);        
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);        
    }
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            alice++;
        } 
        else if(b[i]>a[i])
        {
            bob++;
        } 
               
    }
    printf("%d %d",alice,bob);
    
    
    
    return 0;
}
