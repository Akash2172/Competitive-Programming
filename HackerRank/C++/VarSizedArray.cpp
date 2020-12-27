#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,k,i,j;
    cin>>a>>b;
    int *ar[a];
    for(i=0;i<a;i++)
    {
        cin>>k;
        ar[i]=new int[k];
        for (j=0;j<k;j++)
        {
            cin>>ar[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        int c,d;
        cin>>c>>d;
        cout<<ar[c][d]<<endl;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
