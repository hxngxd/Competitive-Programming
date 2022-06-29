/*Nguyen Tuong Hung*/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define key first
#define val second
using namespace std;
const int M = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, x; cin >> n >> x;
    ll c[n];
    for (int i=0;i<n;i++) cin >> c[i];
    vector<ll> dp(x+1, 0);
    dp[0] = 1;
    for (int i=1;i<=x;i++){
        for (int j=0;j<n;j++){
            if (i>=c[j]) dp[i] += dp[i-c[j]]%M;
        }
    }
    cout << dp[x]%M;
    return 0;
}
