#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    ll s; cin >> s;
    ll pref[n+1], ans = 0;
    pref[0] = 0;
    for (int i=1;i<=n;i++){
        ll a; cin >> a;
        pref[i] = pref[i-1] + a;
    }
    sort(pref, pref + n + 1);
    for (int i=0;i<=n;i++){
        ans += n-(upper_bound(pref, pref + n + 1, pref[i] + s)-pref)+1;
    }
    cout << ans;
    return 0;
}