#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    ll n, x, ans = 0;
    cin >> n >> x;
    for (int i=1;i<=n;i++){
        if (x%i!=0 || x < i) continue;
        if (x/i <= n) ans++;
    }
    cout << ans;
    return 0;
}