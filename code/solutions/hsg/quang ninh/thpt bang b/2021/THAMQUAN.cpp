#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n, m; cin >> n >> m;
    vector<ll> pref(n+1);
    pref[0] = 0;
    for (int i=1;i<=n;i++){
        ll A; cin >> A;
        pref[i] = A + pref[i-1];
    }
    for (int i=0;i<m;i++){
        ll B; cin >> B;
        cout << upper_bound(pref.begin(), pref.end(), B) - pref.begin() - 1 << " ";
    }
    return 0;
}