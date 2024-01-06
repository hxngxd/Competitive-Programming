#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    ll a, b; cin >> a >> b;
    int n = 1e6;
    vector<bool> sieve(n+1, true);
    for (int i=2;i<=sqrt(n);i++){
        if (sieve[i]){
            for (int j=i*i;j<=n;j+=i){
                sieve[j] = false;
            }
        }
    }
    ll ans = 0;
    for (ll i=sqrt(a);i<=sqrt(b);i++){
        if (sieve[i] && a <= i*i && i*i <= b) ans++;
    }
    cout << ans;
    return 0;
}