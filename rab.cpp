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
    freopen("rab.inp", "r", stdin);
    freopen("rab.out", "w", stdout);
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll u = (y-x)/(a+b);
    if (u*(a+b)==(y-x)) cout << u;
    else cout << -1;
    return 0;
}
