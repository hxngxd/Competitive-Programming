#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    int a[n+1];
    map<int, pair<int, int>> mp;
    int dist = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (mp[a[i]].first == 0){
            if (a[0] != a[i]) mp[a[i]] = make_pair(i, max(mp[a[i]].second, i));
            else mp[a[i]].second = max(mp[a[i]].second, i);
        }
        else mp[a[i]] = make_pair(min(mp[a[i]].first, i), max(mp[a[i]].second, i));
        dist = max(mp[a[i]].second - mp[a[i]].first, dist);
    }
    cout << dist;
}
int main(){
    freopen("MAXDIST.INP", "r", stdin);
    freopen("MAXDIST.OUT", "w", stdout);
    int n; cin >> n;
    solve(n);
    return 0;
}
