#include <stdio.h>
#include<math.h>


int main() {
    int a, b,c,d;
    int *pa = &a, *pb = &b;
    int *pc=&c , *pd=&d; 
    
    scanf("%d %d", &a, &b);
    *pc=*pa+*pb;
    *pd=abs(*pb-*pa);
    
    printf("%d\n%d", c, d);

    return 0;
}
