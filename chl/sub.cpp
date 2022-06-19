#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("sub.inp", "r", stdin);
    freopen("sub.out", "w", stdout);
    ll n, m, M;
    cin >> n >> m >> M;
    vector<ll> a(n+1), s(n+1, 0);
    for (ll i=1;i<=n;i++){
        cin >> a[i];
        s[i] = a[i] + s[i-1];
    }
    ll ans = 0;
    for (ll i=1;i<=n;i++){
        if (s[i] >= m){
            ll mbound = upper_bound(s.begin(), s.end(), s[i]-m) - s.begin();
            ll Mbound = lower_bound(s.begin(), s.end(), s[i]-M) - s.begin();
            ans += mbound-Mbound;
        }
    }
    cout << ans;
    return 0;
}
