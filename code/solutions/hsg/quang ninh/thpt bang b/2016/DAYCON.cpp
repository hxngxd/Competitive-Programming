#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n, d; cin >> n >> d;
    ll a[n], current = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (i < d) current += a[i];
    }
    ll ans = current;
    for (int i=d;i<n;i++){
        current = current + a[i] - a[i-d];
        ans = max(ans, current);
    }
    cout << ans;
    return 0;
}