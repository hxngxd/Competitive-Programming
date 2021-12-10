#include <bits/stdc++.h>
#define ll long long
#define nm 1000005
using namespace std;
int n, t, a[nm], cnt;
int solve(){
    cin >> n;
    map<int, int> mp;
    cnt = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        t = ++mp[a[i]];
        if (t==2) cnt+=t;
        else if (t>2) cnt++;
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("FRIEND.INP", "r", stdin);
    freopen("FRIEND.OUT", "w", stdout);
    cout << solve();
    return 0;
}
