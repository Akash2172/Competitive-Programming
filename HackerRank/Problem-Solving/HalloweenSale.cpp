#include <bits/stdc++.h>
#define for(i,n) for(i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    int start,dif,end,budget,spend=0;
    int count=0;
    cin>>start>>dif>>end>>budget;
    int cost=start;
    while(spend<=budget)
    {
        
        spend=spend+cost;
        if((end+dif)<=cost)cost=cost-dif;
        else if((end+dif)>cost && end<cost)cost=end;
        count++;
        
    }
    cout<<count-1;



    return 0;
}
