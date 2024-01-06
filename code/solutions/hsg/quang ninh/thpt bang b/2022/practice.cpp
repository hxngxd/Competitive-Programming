#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool cmp(pair<ll,ll> p1, pair<ll,ll> p2){
    return p1.first < p2.first;
}
int main()
{
    fast_io
    int n; cin >> n;
    ll c; cin >> c;
    vector<pair<ll,ll>> v(n);
    for (int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int ans = 0;
    for (auto i : v){
        if (c>=i.first){
            ans++;
            c += i.second;
        }
    }
    cout << ans;
    return 0;
}