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
    int n1,n2,v1,v2,t;
    
    scanf("%d%d%d%d",&n1,&v1,&n2,&v2);
    for (int i=0;i<10000;i++)
    {
        if((n1+(i-1)*v1)==(n2+(i-1)*v2))
        {
            t=1;
            break;
        }
        else
        {
            t=0;
        }
    }
    if(t==1)
    printf("YES");
    else {
    printf("NO");
    }
    return 0;
    
}
    
