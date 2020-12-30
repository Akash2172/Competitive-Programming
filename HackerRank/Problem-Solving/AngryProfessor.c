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
    int t,k,n,count=0;
    scanf("%d",&t);
    int arr[1001];
    char* ar[t];
    for (int i=0;i<t;i++)
    {
        count=0;
        scanf("%d %d",&k,&n);
        for (int j=0;j<k;j++)
        {
            scanf("%d",&arr[j]);
            
        }
        for (int j=0;j<k;j++)
        {
            if(arr[j]<=0)
            {
                count++;
            }
            
        }
        if(count>=n)
        {
            ar[i]="NO";
        }
        else if(count<n)
        {
            ar[i]="YES";
        }
    }
    for (int i=0;i<t;i++)
    {
        printf("%s\n",ar[i]);
    }
    
    
    return 0;
}
