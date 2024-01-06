#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
string s; int n;

string thuat_toan_ngay_tho(int l, int r){
    while (l<=r){
        if (s[l++] != s[r--]) return "no";
    }
    return "yes";
}

const int maxn = 1e5+5, p = 31, m = 1e9+9;
ll prefix_hash[maxn], suffix_hash[maxn], p_pow[maxn];
void precompute(){
    n = s.size();

    p_pow[0] = 1;
    for (int i=1;i<n;i++){
        p_pow[i] = (p_pow[i-1] * p) % m;
    }

    prefix_hash[0] = 0;
    for (int i=0;i<n;i++){
        prefix_hash[i+1] = (prefix_hash[i] + (s[i] - 'a' + 1) * p_pow[i]) % m;
    }
    
    suffix_hash[n+1] = 0;
    for (int i=n-1;i>=0;i--){
        suffix_hash[i+1] = (suffix_hash[i+2] + (s[i] - 'a' + 1) * p_pow[n-i-1]) % m;
    }
}
string solve(int l, int r){
    if (l==r) return "yes";

    ll left_hash = (prefix_hash[r] - prefix_hash[l-1] + m) % m;
    left_hash = (left_hash * p_pow[n-l]) % m;

    ll right_hash = (suffix_hash[l] - suffix_hash[r+1] + m) % m;
    right_hash = (right_hash * p_pow[r-1]) % m;

    return (left_hash == right_hash ? "yes" : "no");
}

int main()
{
    fast_io
    cin >> s;
    precompute();
    int k; cin >> k;
    while (k--){
        int l, r; cin >> l >> r;
        cout << solve(l, r) << nl;
    }
    return 0;
}