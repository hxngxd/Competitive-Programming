//https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    ll ans = 0;
    ll a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=1;i<n;i++){
        if (a[i] >= a[i-1]) continue;
        ans += a[i-1] - a[i];
        a[i] = a[i-1];
    }
    cout << ans;
    return 0;
}