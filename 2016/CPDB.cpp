#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b;
bool uoc(ll n){
    ll cnt = 2;
    for (ll i=2;i<=sqrt(n);i++){
        if (n%i==0){
            if (i*i==n) cnt++;
            else cnt+=2;
            if (cnt>9) return false;
        }
    }
    return cnt==9;
}
void solve(){
    cin >> a >> b;
    ll cnt = 0;
    if (a%9!=0) a+=(9-a%9);
    if (b%9!=0) b-=(b%9);
    for (ll i=a;i<=b;i+=9){
        if (i%3==0){
            if (uoc(i)) cnt++;
        }
    }
    cout << cnt;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CPDB.INP", "r", stdin);
    freopen("CPDB.OUT", "w", stdout);
    solve();
    return 0;
}
