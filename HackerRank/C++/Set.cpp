#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    set<int>s;   
    cin>>n;
    while(n--)
    {
        int a;
        long long b;
        cin>>a>>b;
        if(a==1)
        {
            s.insert(b);
        }
        if(a==2)
        {
            s.erase(b);
        }
        set<int>::iterator itr=s.find(b); 
        if(a==3)
        {
            if(itr==s.end())cout<<"No"<<'\n';
            else cout<<"Yes"<<'\n';
        }
    }   
    return 0;
}



