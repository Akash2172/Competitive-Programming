#include <stdio.h>
#include <math.h>

int main(void) 
{
    int num,n1,d1;
    int min=0,maj=0;
    int numDay;
    int arr1[20000],arr2[200];
    
    scanf("%d",&num);
    for (int i=0;i<num;i++)
    {
        min=0,maj=0;
        scanf("%d%d",&n1,&d1);
        for(int j=0;j<n1;j++)
        {
            scanf("%d",&arr1[j]);
        }
        for(int k=0;k<n1;k++)
        {
            if(arr1[k]<10 || arr1[k]>79)
            {
                min++;
            }
            else if(arr1[k]>9 || arr1[k]<80)
            {
                maj++;
            }
                      
        }             
        numDay=ceil(min/(float)d1) + ceil(maj/(float)d1) ;
        arr2[i]=numDay;

    }
    for (int i=0;i<num;i++)
    {
        printf("%d\n",arr2[i]);
    }
    return 0;
}
	



