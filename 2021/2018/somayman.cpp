#include <bits/stdc++.h>
#define ll long long
#define nm 1000005
using namespace std;
int n, a[nm];
void solve(){
    cin >> n;
    unordered_map<int, int> mp;
    for (int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int lucky = 1e6 + 5;
    for (auto i : mp){
        lucky = min(lucky, i.second);
    }
    for (auto i : mp){
        if (i.second == lucky) cout << i.first << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("somayman.INP", "r", stdin);
    freopen("somayman.OUT", "w", stdout);
    solve();
    return 0;
}
