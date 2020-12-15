#include <stdio.h>
#include <math.h>


int main() {
    int a, b,c,d;
    int *pa=&a, *pb=&b;
    int *pc=&c , *pd=&d;    
    scanf("%d %d", pa, pb);
    *pc=*pa + *pb;
    *pd=(*pa - *pb);
    if(d<0)
    {
        d=d*-1;
    }
    printf("%d\n",c);
    printf("%d",d);
    
    
    
    return 0;
}
