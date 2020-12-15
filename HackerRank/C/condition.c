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
    char *arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if (n<=9)
    {
        printf("%s",arr[n]);
    }
    else if(n>9)
    {
        printf("Greater than 9");
    }
    
    
    return 0;
    
}