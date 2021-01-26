#include<bits/stdc++.h>
using namespace std;
bool prime[1000001];
int ar[1000001]={0};
void prim()
{
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=1000001; p++) 
    { 
        if (prime[p] == true) 
        { 
        //v.push_back(p);
            for (int i=p*p; i<=1000001; i += p) 
                prime[i] = false; 
        } 
    }
}
int main()
{
	int t;
	cin>>t;
	prim();
	for(int i=4;i<=1000001;i++)
	{
		if(prime[i-2] && prime[i])
		ar[i]=1+ar[i-1];
		else
		ar[i]=ar[i-1];
	}
	while(t--)
	{
		int a;
		cin>>a;
		cout<<ar[a]<<endl;
	}
	return 0;
}
