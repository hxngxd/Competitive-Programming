/*Nguyen Tuong Hung*/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define key first
#define val second
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("gcd.inp", "r", stdin);
    freopen("gcd.out", "w", stdout);
    ll a, b;
    cin >> a >> b;
    ll ans = 1;
    for (int i=1;i<=min(a, b);i++){
        ans *= i;
    }
    cout << ans;
    return 0;
}
