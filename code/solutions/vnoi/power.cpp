//https://oj.vnoi.info/problem/power
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll solve(){
    ll l, r; cin >> l >> r;
    for (int i=ceil(log2(r));i>=1;i--){
        if (ceil(pow(10.0, log10(l)/i)) <= floor(pow(10.0, log10(r)/i))){
            return i;
        }
    }
    return 1;
}
int main()
{
    fast_io
    int t; cin >> t;
    for (int i=1;i<=t;i++){
        cout << "Case #" << i << ": " << solve() << endl;
    }
    return 0;
}