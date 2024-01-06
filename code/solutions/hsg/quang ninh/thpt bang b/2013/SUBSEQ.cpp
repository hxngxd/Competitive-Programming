#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    ll k; cin >> k;
    int ans = -1, cur = 0;

    for (int i=0;i<n;i++){
        ll a; cin >> a;

        if (a%k==0) cur++;
        else cur = 0;

        ans = max(ans, cur);
    }
    cout << ans;
    return 0;
}