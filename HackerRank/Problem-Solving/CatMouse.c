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
    int cata,catb,mousec;
    int d1,d2;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&cata,&catb,&mousec);
        d1=abs(cata-mousec);
        d2=abs(catb-mousec);
        if(d1>d2)
        {
            printf("Cat B");
        }
        else if(d2>d1)
        {
            printf("Cat A");
        }
        else if(d1==d2)
        {
            printf("Mouse C");
        }
        printf("\n");
    }
    
    return 0;
}
