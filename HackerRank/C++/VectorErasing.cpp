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
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int k,b,c;
    cin>>k;
    v.erase(v.begin()+k-1);
    cin>>b>>c;
    v.erase(v.begin()+b-1,v.begin()+c-1);
    int si=v.size();
    cout<<si<<endl;
    for (int i=0;i<si;i++)
    {
        cout<<v[i]<<" ";
    }
     
     
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
  
