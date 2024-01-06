#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    ll a, b, k; cin >> a >> b >> k;
    a = (a + (a%k!=0)*k)/k;
    b /= k;
    ll ans = k * (b-a+1) * (a+b) / 2;
    cout << ans;
    return 0;
}