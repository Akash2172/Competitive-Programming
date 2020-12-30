#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for (int i;i<n;i++)
    {
        sum=sum+arr[i];
        
    }
    printf("%ld",sum);
    
    
    return 0;
}
