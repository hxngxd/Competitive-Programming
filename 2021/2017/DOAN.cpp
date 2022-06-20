#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    pair<ll, ll> LR[3];
    for (int i=0;i<3;i++) cin >> LR[i].first >> LR[i].second;
    sort(LR, LR + 3);
    ll l = LR[0].first, r = LR[0].second, ans = r - l;
    for (int i=1;i<3;i++){
        if (LR[i].first <= r){
            r = LR[i].second;
        }
        else{
            l = LR[i].first;
            r = LR[i].second;
        }
        ans = max(ans, r-l);
    }
    cout << ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DOAN.INP", "r", stdin);
    freopen("DOAN.OUT", "w", stdout);
    solve();
    return 0;
}
