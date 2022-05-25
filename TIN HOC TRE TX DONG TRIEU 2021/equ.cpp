#include <bits/stdc++.h>
using namespace std;
int main(){
//    freopen("equ.inp", "r", stdin);
//    freopen("equ.out", "w", stdout);
    int n; cin >> n;
    long long a[n];
    long long res, mx = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        res += a[i];
        mx = max(mx, a[i]);
    }
    cout << mx*n - res;
    return 0;
}
