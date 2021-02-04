#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,m1,m2,y1,y2,sum=0;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if(y1!=y2 && y1>y2)sum=10000;
    else if(m1!=m2 && m1>m2 && y1==y2)sum=500*(m1-m2);
    else if(d1!=d2 &&d1>d2 && m1==m2 && y1==y2)sum=15*(d1-d2);
    cout<<sum;    
    return 0;
}
