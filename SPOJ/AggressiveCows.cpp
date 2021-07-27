/*Akash Sharma LPU */
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
#define AS ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define MOD         1000000007
#define all(x)      (x).begin(), (x).end()
#define fob(i,a,n)  for(int i=a;i<n;i++)
#define invec(v,n)  vll v(n);for(int i=0;i<n;i++)cin>>v[i];
#define outvec(v,n) for(int i=0;i<n;i++)cout<<v[i]<<'  ';
#define sum(a)      accumulate((a).begin(),(a).end(),0)
#define pb          push_back
#define mp          make_pair
 
bool possible(vector<ll>v,int n,int cow, int checkMid)
{
    int placed = v[0];
    int cnt = 1;
    for(int i = 1;i<n;i++)
    {
        if(v[i]-placed>=checkMid)
        {
            placed = v[i];
            cnt++;
            if(cnt==cow)return true;
        }
    }
    return false;
}
 
int binarytry(vector<ll>v, int cow)
{
    int n = v.size();
    int start = v[0];
    int end = v[n - 1] - v[0];
    int ans;
    while(start<=end)
    {
        int k = cow;
        int mid = (start + end)/2;
        if(possible(v,n,cow,mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else end = mid - 1;
    }
    return ans;
}
 
void solve()
{
    int n,cow;
    cin>>n>>cow;
    vll v;
    v.resize(n);
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        v[i]=c;
    }
    sort(all(v));
    int ans = binarytry(v,cow);
    cout<<ans;
}
int main()
{
    AS
    int T(1);
    cin >> T; 
    while(T-->0){
       solve();cout<<'\n';
    }
    return 0;
} 
