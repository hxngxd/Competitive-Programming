#include <bits/stdc++.h>
#define int64 long long
using namespace std;
int solve(int n, int64 s, int64 a[]){
    int64 pref[n+1]; pref[0] = a[0];
    int ans = n;
    for (int i=1;i<n;i++) pref[i] = pref[i-1] + a[i];
    for (int i=0;i<n;i++){
        int l = lower_bound(pref, pref + n, pref[i]+s)-pref;
        if (l<n) ans = min(ans, l - i);
    }
    return (ans==n) ? -1 : ans;
}
int main(){
//    freopen("sum.inp", "r", stdin);
//    freopen("sum.out", "w", stdout);
    int n; cin >> n;
    int64 s, a[n+1]; cin >> s;
    for (int i=0;i<n;i++) cin >> a[i];
    cout << solve(n, s, a);
    return 0;
}
