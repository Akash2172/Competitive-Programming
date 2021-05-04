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


vector<int> count_char(string s)
{
    vector<int>ar(26);
    for(int i=0;i<s.size();i++)
    {
        char t=s[i];
        for(int j=0;j<26;j++)
        {
            if(t==65+j)ar[j]++;
        }
    }
    return ar;
}

void solve()
{
    int n,cnt(0),mis(0),out(0);
    string s;
    cin>>n>>s;
    vector<int>v = count_char(s);
    fob(i,0,n)
    {
        if(s[i]=='_')cnt++;
    }
    fob(i,0,n-1)
    {
        if(s[i]=='_')i++;
        else if(s[i]!=s[i+1])
        {
            mis++;
            i++;
        }
        else
        {
            while(s[i]==s[i+1])i++;
        }
    }
    fob(i,0,26)
    {
        if(v[i]&1)
        {
            if(v[i]<2){
                cout<<"NO";
                return;
            }
            else out++;
        }
    }
    if(mis>0)
    {
        if(cnt>=1)cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"YES";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL),cout.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}
