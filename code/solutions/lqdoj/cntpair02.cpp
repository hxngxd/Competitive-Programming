//https://lqdoj.edu.vn/problem/cntpair02
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    ll k; cin >> k;
    ll a[n];
    map<ll,ll> mp;
    int ans = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        ans += mp[k-a[i]];
        mp[a[i]]++;
    }
    cout << ans;
    return 0;
}