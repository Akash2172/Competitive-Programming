#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ss[1000];
    scanf("%s",ss);
    int k= strlen(ss);
    int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    for(int i=0;i<k;i++)
    {
        if(ss[i]=='0')c0++;
        if(ss[i]=='1')c1++;
        if(ss[i]=='2')c2++;
        if(ss[i]=='3')c3++;
        if(ss[i]=='4')c4++;
        if(ss[i]=='5')c5++;
        if(ss[i]=='6')c6++;
        if(ss[i]=='7')c7++;
        if(ss[i]=='8')c8++;
        if(ss[i]=='9')c9++;       
    }
    printf("%d ",c0);
    printf("%d ",c1);
    printf("%d ",c2);
    printf("%d ",c3);
    printf("%d ",c4);
    printf("%d ",c5);
    printf("%d ",c6);
    printf("%d ",c7);
    printf("%d ",c8);
    printf("%d ",c9);

    
    return 0;
}
