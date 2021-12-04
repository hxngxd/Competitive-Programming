#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll countp(ll n){
    if (n<=2) return 0;
    if (n==3) return 1;
    ll p;
    if (n%2==0){
        p = (n*(n-2)) / 4;
    }
    else{
        ll k = floor(n/2);
        p = k*k;
    }
    return p;
}
int main(){
    freopen("COUNTPAIRS.INP", "r", stdin);
    freopen("COUNTPAIRS.OUT", "w", stdout);
    ll T; cin >> T;
    ll n;
    for (ll i=0;i<T;i++){
        cin >> n;
        ll ans = countp(n);
        cout << ans << endl;
    }
    return 0;
}
