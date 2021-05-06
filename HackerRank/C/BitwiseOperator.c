#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int and=0,or=0,xor=0,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            int m=i&j;
            int l=i|j;
            int t=i^j;
            if(m>and && m<k)and=m;
            if(l>or && l<k)or=l;
            if(t>xor && t<k)xor=t;
        }
    }
    printf("%d\n%d\n%d\n",and,or,xor);   
  //Write your code here.
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
