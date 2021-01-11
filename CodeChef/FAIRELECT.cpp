#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	   
    int t;
    cin>>t;
    	while(t--){

    		int n,m;
    		cin>>n>>m;
    		int a[n],b[m];
    		int total1=0,total2=0;
    		for(int i=0;i<n;i++){

    			cin>>a[i];
    			total1+=a[i];
    		}
    		for(int i=0;i<m;i++){

    			cin>>b[i];
    			total2+=b[i];
    		}
    		
    		if(total1>total2)
    		{
    			cout<<0<<endl;
    		}
        else
        {

    			sort(a,a+n);
    			sort(b,b+m);
    			reverse(b,b+m);
    			int j=0;
    			int c=0;
    			for (int i = 0; i < n; ++i)
    			{
    				
    				if(j<m){
    					total1=total1-a[i]+b[j];
    					total2=total2-b[j]+a[i];
    					swap(a[i],b[j]);
    					c++;
    					j++;
    					if(total1>total2){
    						break;
    					}

    				}

    			}
    			if(total1>total2)
    				cout<<c<<endl;
    			else
    				cout<<-1<<endl;

    			
    		}

    	

    }


	return 0;
}
