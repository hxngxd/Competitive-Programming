#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    ll n, ans = 0; cin >> n;
    string s; cin >> s;
    map<char,int> mp;
    for (auto i : s){
        if ('a' <= i && i <= 'z'){
            ans += ++mp[i-'a'];
        }
        else{
            ans += ++mp[i-'A'];
        }
    }
    if (ans%n==0) cout << ans;
    else cout << mp.size();
    return 0;
}