#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main()
{
   int t;
    cin >> t;
    while (t--)
    {
        string pass;
        cin>>pass;
        int sum;
        ll len = pass.length();
        bool res = 0;
        bool lengt=0,low=0,upp=0,num=0,spec = 0;
        if(len>=10)lengt =1;
        for (int i = 0; i < len; i++)
        {
            if(islower(pass[i])){
                low=1;
            }
            else if (isupper(pass[i]))
            {
                
                if(i>0 && i<(len-1))
                {
                    upp =1;
                }
            }
            else if (pass[i] >= 48 && pass[i] <= 57)
            {

                if (i > 0 && i < (len - 1))
                { 
                    num = 1;
                }
            }
            else
            {

                if (i > 0 && i < (len - 1))
                {
                    spec = 1;
                }
            }
            
            
        }
        sum=lengt+spec+low+upp+num;
        if(sum==5)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
