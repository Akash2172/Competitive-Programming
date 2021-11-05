#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

void TowerSolving(int a, int b, int c, int n) {
	if (n == 0)
		return;
	TowerSolving(a, c, b, n-1);
	cout<<a<<' '<<c<<'\n';
	TowerSolving(b, a, c, n-1);
}
             
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();cout.tie();
    long long TT = 1;
    // cin>>TT;
    for(long long TR = 1;TR <= TT;TR++){
        int n;
        cin>>n;
        long long rt = (1<<n) - 1;
        cout<<rt<<'\n';
        TowerSolving(1,2,3,n);
    } 
    return 0;
}
