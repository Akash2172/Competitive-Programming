#include <bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
#define ll long long
#define MOD 1000000007
using namespace std;
 
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int curr = 0;
    int total = 0;
    int i = 0, j = n - 1, taken = 1;
    curr = arr[j];
    while (i < j)
    {
        if (taken == 2)
        {
            total++;
            j--;
            curr = arr[j];
            taken = 1;
        }
        else if (curr + arr[i] > x)
        {
            total++;
            j--;
            curr = arr[j];
            taken = 1;
        }
        else
        {
            curr += arr[i];
            i++;
            taken++;
        }
    }
    cout << total + 1;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    solve();
    return 0;
}
