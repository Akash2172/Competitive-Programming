/*Akash Sharma LPU */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define fob(i,a,n) for(int i=a;i<n;i++)
#define invec(v,n) vll v(n);for(int i=0;i<n;i++)cin>>v[i];
#define pb push_back
#define mp make_pair

void solve()
{
    int n,co(0),out(0);
    cin>>n;
    invec(v,n);
    fob(i,0,n)
    {
        if(v[i]%2!=0)co++;
    }
    if(co%2!=0)cout<<"NO";
    else{
        fob(i,0,n-1)
        {
            if(v[i]%2!=0){
                out+=2;
                v[i]++;
                v[i+1]++;
            }           
        }
        cout<<out;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL),cout.tie(NULL);
    solve();
    return 0;
}
