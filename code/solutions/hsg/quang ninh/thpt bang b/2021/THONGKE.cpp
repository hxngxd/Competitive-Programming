#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int t; cin >> t;
    ll mx = -1;
    string ans = "";
    
    while (t--){
        string s, tmp;
        cin >> s;
        stringstream ss(s);

        ll total = 0;
        while (getline(ss, tmp, '-')){
            ll cnt = 0;
            for (int i=0;i<tmp.size()-2;i++){
                cnt = cnt * 10 + (int)tmp[i] - 48;
            }
            total += cnt;
        }

        mx = max(mx, total);
        ans += to_string(total) + nl;
    }

    cout << mx << nl << ans;
    return 0;
}