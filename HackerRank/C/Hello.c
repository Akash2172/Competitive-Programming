#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter your Name: ");
    char name[50];
    scanf("%s",&name);
    printf("Hello World, %s!",name);
    return 0;
}