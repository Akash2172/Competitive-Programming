#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, arr[1001],ar[1001], i;
    scanf("%d", &num);
    for (i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        ar[num-i-1]=arr[i];
    }
    for (i=0;i<num;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
