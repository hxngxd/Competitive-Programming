#include <bits/stdc++.h>
#define ll long long
using namespace std;
ull x, y;
ull solve(){
    cin >> x >> y;
    ull x_ = 0, y_ = 0;
    for (int i=1;i<=sqrt(x);i++){
        if (x%i==0){
            if (i*i==x) x_ += i;
            else x_ += i + (x/i);
        }
    }
    if (x==y) return x_;
    for (int i=1;i<=sqrt(y);i++){
        if (y%i==0){
            if (i*i==y) y_ += i;
            else y_ += i + (y/i);
        }
    }
    return max(x_, y_);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TONGUOC.INP", "r", stdin);
    freopen("TONGUOC.OUT", "w", stdout);
    cout << solve();
    return 0;
}
