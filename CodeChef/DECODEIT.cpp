#include <bits/stdc++.h>
#define for(i,n,k) for(i=0;i<n;i=i+k)
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        string ss;
        string s;
        cin>>n;
        int ar[n+1];
        cin>>ss;
        int a,b,ott,cp;
        
        for(i,n,4)
        {
            
            s=ss.substr(i,i+4);
            if(s[0]=='0')a=1,b=8;
            if(s[0]=='1')a=9,b=16;
            if(s[1]=='0')b=b-4;
            if(s[1]=='1')a=a+4;
            if(s[2]=='0')b=b-2;
            if(s[2]=='1')a=a+2;
            if(s[3]=='0')ott=a;
            if(s[3]=='1')ott=b;
            cp=96+ott;
            ar[i]=cp;
        }
        for(i,n,4)
        {
            printf("%c",ar[i]);
        }
        
       cout<<endl;
    }
    return 0;
}
