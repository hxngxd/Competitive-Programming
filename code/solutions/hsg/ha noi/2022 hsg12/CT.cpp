#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inf 1e18

int main()
{
    fast_io
    int n; cin >> n;
    vector<ll> money(n), pref(n);
    ll sum = 0;
    for (int i=0;i<n;i++){
        cin >> money[i];
        sum += money[i];
        pref[i] = (i==0 ? money[i] : pref[i-1] + money[i]);
    }

    vector<vector<ll>> dp(n, vector<ll>(sum+1));
    fill(dp[0].begin(), dp[0].end(), inf);
    dp[0][0] = money[0];
    dp[0][money[0]] = 0;

    for (int i=1;i<n;i++){
        for (int j=sum;j>=0;j--){
            if (j > pref[i]) dp[i][j] = inf;
            else if (j == pref[i]) dp[i][j] = 0;
            else{
                dp[i][j] = min(dp[i-1][j] + money[i], dp[i-1][abs(j-money[i])]);
                if (j+money[i] <= sum) dp[i][j] = min(dp[i][j], dp[i-1][j+money[i]]);
            }
        }
    }
    sum = (sum - dp[n-1][0])/2;
    cout << sum;
    return 0;
}