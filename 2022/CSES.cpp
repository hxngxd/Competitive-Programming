/*Nguyen Tuong Hung*/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
string solve(){
    ll n, x; cin >> n >> x;
    map<ll, ll> mp;
    if (n==1) return "IMPOSSIBLE";
    for (int i=0;i<n;i++){
        ll a; cin >> a;
        if (mp.find(x-a) != mp.end()){
            return to_string(i+1) + " " + to_string(mp[x-a]+1);
        }
        else{
            mp[a] = i;
        }
    }
    return "IMPOSSIBLE";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << solve();
    return 0;
}
