#include <bits/stdc++.h>
#define fob(i,n) for(i=0;i<n;i++)
#define ll unsigned long long
using namespace std;

int main()
{
    vector<int>v;
    int i,j;
    fob(i,26)
    {
        int c;
        cin>>c;
        v.push_back(c);
    }
    string a;
    cin>>a;
    int l=a.length();
    int kk[l];
    fob(i,l)
    {
        int mm;
        for(j=97;j<123;j++)
        {
            if(a[i]==j)mm=j-97;
        }
        kk[i]=mm;  
    }
    int ar[l];
    fob(i,l)
    {
        int m=kk[i];
        ar[i]=v[m];
    }
    sort(ar,ar+l,greater<int>());
    cout<<ar[0]*l<<endl;
    return 0;
}
