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
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    int mm=0,nn=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            mm++;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            nn++;
        }
    }
    printf("%d %d",mm,nn);

    return 0;
}
