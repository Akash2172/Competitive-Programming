#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<string,int>m;
    while(n--)
    {
        int a;
        string c;
        cin>>a;
        if(a==1)
        {
            int y;
            cin>>c>>y;
            map<string,int>::iterator itr=m.find(c);
            if(itr==m.end())
            {
                m.insert(make_pair(c,y));
            }
            else m[c]+=y;
            
        }
        if(a==2)
        {
            cin>>c;
            m[c]=0;
        }
        if(a==3)
        {
            cin>>c;
            cout<<m[c]<<'\n';
        }   
    }   
    return 0;
}



  
