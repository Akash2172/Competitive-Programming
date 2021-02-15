#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int>v;
        vector<int>vv;
        int one=-1,two=-1,three=-1,four=-1;
        for(i,n)
        {
            int c;
            cin>>c;
            v.push_back(c);
        }
        for(i,n)
        {
            int c;
            cin>>c;
            vv.push_back(c);
        }
        for(i,n)
        {
            if(v[i]==1)one=i;
            if(v[i]==2)two=i;
            if(v[i]==3)three=i;
            if(v[i]==4)four=i;
        }
        int out=0;
        if(n==2)
        {
            if(two<one)
            {
                if(vv[two]==1)out=2;
                else if(vv[two]>1)out=1;
            }
            if(two>one)out=0;
        }
        if(n>2)
        {
            if(two<one)
            {
                int k=one-two;
                if(vv[two]>k)out+=1;
                if(vv[two]<=k)
                {
                    int t=ceil((float)k/vv[two]);
                    if(k%vv[two]==0)out=out+t+1;
                    else out=out+t;
                }
                two=two + out*vv[two];
            }
            int cc=out;
            if(three<=two)
            {
                int k=two-three;
                if(k==0)out=out+1;
                if(vv[three]>k &&k!=0)out+=1;
                if(vv[three]<=k)
                {
                    int t=ceil((float)k/vv[three]);
                    if(k%vv[three]==0)out=out+t+1;
                    else out=out+t;
                }
                int tt=out-cc;
                three=three + tt*vv[three];
            }
            if(n==4)
            {
                if(four<=three)
                {  
                    int k=three-four;
                    if(k==0)out=out+1;
                    if(vv[four]>k &&k!=0)out+=1;
                    if(vv[four]<=k)
                    {
                        int t=ceil((float)k/vv[four]);
                        if(k%vv[four]==0)out=out+t+1;
                        else out=out+t;
                    }
                }
            }
        }
        cout<<out<<endl;
    }
    return 0;
}
