#include <stdio.h>

int max_of_four(int a, int b, int c, int d);
int max(int a , int b);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int temp= max(a,b);
    int temp1= max(c,d);
    int maxed= max(temp,temp1);
    return maxed;
}

int max(int a , int b)
{
    int temp;
    if (a>b)
    {
        temp= a;
    }
    else
    {
        temp=b;
    } 
    return temp;
}
