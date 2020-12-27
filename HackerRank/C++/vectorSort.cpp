#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int n,a;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
                
    }
    sort(v.begin(),v.end());
    for (int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
