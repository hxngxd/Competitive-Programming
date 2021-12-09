#include <bits/stdc++.h>
#define ll long long
#define nm 100005
using namespace std;
ll n, S, ans, a[nm], sum[nm];
void solve(){
    cin >> n >> S;
    sum[0] = 0;
    for (int i=1;i<=n;i++){
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    sort(sum, sum + n + 1);
    ans = 0;
    for (int i=0;i<=n;i++){
        int t = upper_bound(sum, sum + n + 1, sum[i]+S)-sum;
        if (t<n+1) ans+=n-t+1;
    }
    cout << ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DAYSO.INP", "r", stdin);
    freopen("DAYSO.OUT", "w", stdout);
    solve();
    return 0;
}
