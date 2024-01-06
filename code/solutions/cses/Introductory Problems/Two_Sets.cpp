//https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast_io
    ll n; cin >> n;
    if (n%4==1 || n%4==2){
        cout << "NO"; return 0;
    }
    vector<ll> set1, set2;
    if (n%4==0){
        for (ll i=1;i<=n/4;i++){
            set1.pb(i);
            set1.pb(n-i+1);
        }
        for (ll i=n/4+1;i<=n/2;i++){
            set2.pb(i);
            set2.pb(n-i+1);
        }
    }
    else{
        ll mid = (n+1)/2;
        for (ll i=1;i<mid/2;i++){
            set1.pb(i);
            set1.pb(n-i+1);
        }
        set1.pb(mid);
        set1.pb(mid/2);
        set2.pb(mid+mid/2);
        for (ll i=mid/2+1;i<mid;i++){
            set2.pb(i);
            set2.pb(n-i+1);
        }
    }
    cout << "YES" << nl << set1.size() << nl;
    for (auto i : set1) cout << i << " ";
    cout << nl << set2.size() << nl;
    for (auto i : set2) cout << i << " ";
    return 0;
}