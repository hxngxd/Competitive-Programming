#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int n;
int solve(){
    cin >> n;
    int a[n+1], b[n+1];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    ll cost = 0;
    for (int i=0;i<n;i++) cost += abs(a[i]-b[i]);
    return cost;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    cout << solve();
    return 0;
}
