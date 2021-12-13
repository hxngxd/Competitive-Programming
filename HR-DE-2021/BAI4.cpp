#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t;
ll S[105];
bool ok(set<ll> s, ll i){
    for (auto x : s){
        if (s.find(i-x)!=s.end()) return true;
    }
    return false;
}
void solve(){
    set<ll> s;
    ll sum = 0, k = 1;
    while (sum<=1e9){
        sum+=k;
        s.insert(sum);
        k++;
    }
    cout << s.size() << endl;
    cin >> t;
    for (int i=0;i<t;i++){
        cin >> S[i];
        cout << (ok(s, S[i]) ? "YES" : "NO") << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.INP", "r", stdin);
//    freopen("output.OUT", "w", stdout);
    solve();
    return 0;
}
