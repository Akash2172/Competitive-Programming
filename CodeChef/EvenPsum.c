#include <stdio.h>
#include <math.h>
#define ll long long int

int main()
{
	
	int num;
	scanf("%d",&num);
    ll arr[num];
	for(int i=0;i<num;i++)	
	{
		ll a,b,out;
		ll odd1,odd2,even1,even2;
		scanf("%lld %lld",&a,&b);
		if(a%2==0)
		{
			odd1=a/2;
			even1=a/2;
			
		}
		else if(a%2!=0)
		{
			odd1=(a/2) + 1;
			even1=a/2;
			
		}
        if(b%2==0)
        {
            odd2=b/2;
			even2=b/2;
        }
        else if(b%2!=0)
        {
            odd2=(b/2) + 1;
			even2=b/2;            
        }
        
		
		out=odd1*odd2 + even1*even2;
		arr[i]=out;
		
	}
	for(int i=0;i<num;i++)
	{
		printf("%lld\n",arr[i]);
	}    	
	return 0;
}

