#include<bits/stdc++.h>
#define ll long long
using namespace std;
const long long MAX_SIZE = 1000001; 
vector<long long >isprime(MAX_SIZE , true); 
vector<long long >prime; 
vector<long long >SPF(MAX_SIZE);
int ar[1000001]={0};

  
void manipulated_seive() 
{ 
    int count=0;
    isprime[0] = isprime[1] = false ; 
    for (long long int i=2; i<1000001 ; i++) 
    { 
        if (isprime[i]) 
        { 
            prime.push_back(i); 
            SPF[i] = i; 
        }
        for (long long int j=0;j<(int)prime.size()&&i*prime[j]<1000001 && prime[j]<=SPF[i];j++) 
        { 
            isprime[i*prime[j]]=false; 
            SPF[i*prime[j]] = prime[j];
        } 
    } 
} 
int main()
{
    int t;
    scanf("%d",&t);
    manipulated_seive();
	for(int i=2;i<=1000001;i++)
	{
		if(isprime[i])
		ar[i]=1+ar[i-1];
		else
		ar[i]=ar[i-1];
	}
	while(t--)
	{
		int n,y;
	    scanf("%d %d",&n,&y);
		int count=ar[n];
		if(count>y)printf("Divyam\n");
		else printf("Chef\n");
	}
	return 0;
}  
