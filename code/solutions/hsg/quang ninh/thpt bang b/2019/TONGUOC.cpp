#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll sumdiv(ll n){
    if (n==1) return 1;
    ll ans = 1 + n;
    for (ll i=2;i*i<=n;i++){
        if (n%i==0){
            if (i*i==n) ans += i ;
            else ans += i + n/i;
        }
    }
    return ans;
}
int main()
{
    fast_io
    ll x, y;
    cin >> x >> y;
    cout << max(sumdiv(x), sumdiv(y));
    return 0;
}