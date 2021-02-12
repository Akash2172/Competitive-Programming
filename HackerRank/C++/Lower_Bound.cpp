#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    vector<ll>ar;
    for(int i=0;i<n;i++)
    {
        ll c;
        cin>>c;
        ar.push_back(c);
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        if(binary_search(ar.begin(),ar.end(),a))
        {
            auto it=lower_bound(ar.begin(),ar.end(),a);
            cout<<"Yes"<<" "<<(it-ar.begin()+1)<<'\n';
        }
        else
        {
            auto it=upper_bound(ar.begin(),ar.end(),a);
            cout<<"No"<<" "<<(it-ar.begin()+1)<<'\n';       
        }       
    }
    return 0;
}
