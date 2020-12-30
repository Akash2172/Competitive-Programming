#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int hh, mm, ss ;
    char t[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t) ;
    if (t[0]=='P' && hh!=12)
    {
        hh=hh+12;
    }
    
    if (t[0]=='A' && hh==12)
    {
        hh=hh-12;
    }
        
    
    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}
