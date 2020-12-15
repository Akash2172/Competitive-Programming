#include <stdio.h>
#include <math.h>

int main() 
{
    int day1,day2,vaccineCompany1,vaccineCompany2;
    int totalNeed,totalDays=0;
    int product=0,pGap;
    int gap,timelap,remainder;
    float temp;
    
    
    scanf("%d%d%d%d%d",&day1,&vaccineCompany1,&day2,&vaccineCompany2,&totalNeed);
    int pDay=vaccineCompany1 + vaccineCompany2;
    
    if (day1==day2)
    {
    	timelap=day1-1;
    	gap=0;
    	
	}
   
    
    else if (day2>day1)
    {
        timelap=day1-1;
        gap=day2-day1;
        product=gap* vaccineCompany1;
        
    }
     
    else if (day1>day2)
    {
        timelap=day2-1;
        gap=day1-day2;
        product=gap* vaccineCompany2;
    }
    totalDays=timelap+gap;
    
       
    if (totalNeed>product)
	{
		pGap=totalNeed-product;
		temp= (float)pGap/pDay;
		remainder= ceil(temp);
		totalDays=totalDays + remainder;		
	} 
	if (product>totalNeed)
	{
		if (day2>day1)
    	{
    		pGap=product-totalNeed;
    		temp= (float)pGap/vaccineCompany1;
    		remainder= floor(temp);
    		totalDays=totalDays - remainder;		
        }
        if (day1>day2)
    	{
    		pGap=product-totalNeed;
    		temp= (float)pGap/vaccineCompany2;
    		remainder= floor(temp);
    		totalDays=totalDays - remainder;		
        }
	}
	
	printf("%d",totalDays);
	
	    
    return 0;
}
