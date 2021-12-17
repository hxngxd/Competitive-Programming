#include <bits/stdc++.h>
#define ll long long
using namespace std;
int minDistance(string s1, string s2) {
    int n = s1.size(), m = s2.size();
    int dp[n+1][m+1];
    for (int i=0;i<=n;i++) dp[i][0] = i;
    for (int i=0;i<=m;i++) dp[0][i] = i;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1];
            else{
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
            }
        }
    }
    for (int i=0;i<=n;i++){
        for (int j=0;j<=m;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[n][m];
}
int main(){
    cout << minDistance("horse", "ros");
    return 0;
}
