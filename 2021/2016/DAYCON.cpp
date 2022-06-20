#include <bits/stdc++.h>
#define ll long long
#define nm 1000006
using namespace std;
ll n, d, sum[nm], a[nm];
void solve(){
    cin >> n >> d;
    sum[0];
    ll max_ = LONG_LONG_MIN;
    for (int i=1;i<=n;i++){
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
        if (i>=d) max_ = max(max_, sum[i]-sum[i-d]);
    }
    cout << max_;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DAYCON.INP", "r", stdin);
    freopen("DAYCON.OUT", "w", stdout);
    solve();
    return 0;
}
