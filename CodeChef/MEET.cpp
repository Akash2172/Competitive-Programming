#include <bits/stdc++.h>
#define fob(i,n) for(i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2,str;
        int n,i;
        cin>>str1>>str2;
        str=str1.append(str2);
        string h=str.substr(0,2);
        string m=str.substr(3,5);
        int h2=stoi(h);
        int m2=stoi(m);
        if (str[5]=='P' && h2!=12)
        {
            h2=h2+12;
        }
        
        if (str[5]=='A' && h2==12)
        {
            h2=00;
        }
        int time=100*h2 + m2;
        cin>>n;
        vector<string>v;
        fob(i,n)
        {
            string s1,s2,s3,s4,ss1,ss2;
            cin>>s1>>s2>>s3>>s4;
            ss1=s1.append(s2);
            ss2=s3.append(s4);
            v.push_back(ss1);
            v.push_back(ss2);
        }
        vector<int>vv;
        for (i=0;i<v.size();i+=2)
        {
            string sa=v[i];
            string sb=v[i+1];
            string hh1=sa.substr(0,2);
            string hh2=sb.substr(0,2);
            string mm=sa.substr(3,5);
            string mm2=sb.substr(3,5);
            int hhh1=stoi(hh1);
            int hhh2=stoi(hh2);
            int mmm1=stoi(mm);
            int mmm2=stoi(mm2);
            
            if (sb[5]=='P' && hhh2!=12)
            {
                hhh2=hhh2+12;
            }
            
            if (sb[5]=='A' && hhh2==12)
            {
                hhh2=00;
            }
            if (sa[5]=='P' && hhh1!=12)
            {
                hhh1=hhh1+12;
            }
            
            if (sa[5]=='A' && hhh1==12)
            {
                hhh1=00;
            }
            int v1=100*hhh1+mmm1;
            int v2=100*hhh2+mmm2;
            vv.push_back(v1);
            vv.push_back(v2);
        }
        string s="";
        for (i=0;i<vv.size();i+=2)
        {
            if(vv[i]<=time && time<=vv[i+1])s=s+"1";
            else s=s+"0";
        }
        cout<<s<<endl;
    }
    return 0;
}
