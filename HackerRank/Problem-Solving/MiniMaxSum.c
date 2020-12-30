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

    long long int sum,sumup;
    int temp;
    
    int a[5];
    
    for (int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    sum=(long long)a[0]+a[1]+a[2]+a[3];
    sumup=(long long)a[1]+a[2]+a[3]+a[4];
    printf("%lld ",sum);
    printf("%lld ",sumup );
    
    
    return 0;
}
    
