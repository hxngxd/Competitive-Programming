#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inf 1e18
#define fi first
#define se second

int main()
{
    fast_io
    int n; cin >> n;
    pair<double, double> u_r = {-inf, -inf}, d_l = {inf, inf};
    for (int i=0;i<n;i++){
        double x, y; cin >> x >> y;
        u_r.fi = max(u_r.fi, x);
        u_r.se = max(u_r.se, y);

        d_l.fi = min(d_l.fi, x);
        d_l.se = min(d_l.se, y);
    }
    double ans = (u_r.fi - d_l.fi) * (u_r.se - d_l.se);
    cout << fixed << setprecision(4) << ans;
    return 0;
}