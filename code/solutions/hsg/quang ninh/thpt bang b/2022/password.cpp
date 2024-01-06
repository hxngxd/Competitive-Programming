#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int maxn = 1e5+1;
int thg[maxn], hoa[maxn], so[maxn];

bool safe(int i, int j){
    return (j-i+1 >= 6) &&
            (thg[j]-thg[i-1] >= 1) &&
            (hoa[j]-hoa[i-1] >= 1) &&
            (so[j]-so[i-1] >= 1);
}

ll solve(){
    string s; cin >> s;
    int n = s.size();

    if (n<6) return 0;

    thg[0] = hoa[0] = so[0] = 0;

    for (int i=0;i<n;i++){
        thg[i+1] = thg[i] + ('a' <= s[i] && s[i] <= 'z');
        hoa[i+1] = hoa[i] + ('A' <= s[i] && s[i] <= 'Z');
        so[i+1] = so[i] + ('0' <= s[i] && s[i] <= '9');
    }

    if (thg[n] * hoa[n] * so[n] == 0) return 0;

    int i=1;
    ll ans = 0;

    for (int j=6;j<=n;j++){
        if (thg[j] * hoa[j] * so[j] == 0) continue;
        while (safe(i, j)) i++;
        if (safe(i-1, j)) ans += i-1;
    }
    
    return ans;
}
int main()
{
    fast_io
    cout << solve();
    return 0;
}