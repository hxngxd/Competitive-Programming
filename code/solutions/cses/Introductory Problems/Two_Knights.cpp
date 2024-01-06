//https://cses.fi/problemset/task/1072
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    ll n; cin >> n;
    for (ll k=1;k<=n;k++){
        ll total = k*k*(k*k-1)/2;
        ll attack = (k-1)*(k-2)*4;
        cout << total - attack << nl;
    }
    return 0;
}