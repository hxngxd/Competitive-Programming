#include <bits/stdc++.h>
#define ll long long
#define nm 100005
using namespace std;
ll n, a[nm];
void solve(){
    cin >> n;
    unordered_map<ll, ll> mp;
    ll mx = INT_MIN, res=INT_MIN;
    for (int i=0;i<n;i++){
        cin >> a[i];
        ll t = ++mp[a[i]];
        mx = max(mx, t);
    }
    for (auto i : mp){
        if (i.second==mx){
            res = max(res, i.first);
        }
    }
    cout << res << " " << mx;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("VOLUNTE.INP", "r", stdin);
    freopen("VOLUNTE.OUT", "w", stdout);
    solve();
    return 0;
}
