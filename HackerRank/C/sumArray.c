#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    int arr[num],sum=0;
    for (int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
