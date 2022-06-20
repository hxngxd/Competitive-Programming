#include <bits/stdc++.h>
using namespace std;
int longest(int n, int a[]){
    if (n==1) return 1;
    if (n==2) {
        if (a[0] < a[1]) return 2;
        else return 1;
    }
    vector<int> dp(n, 1);
    int MAXX = 0;
    for (int i=n-2;i>=0;i--){
        for (int j=i+1;j<n;j++){
            if (a[i] < a[j]){
                dp[i] = max(dp[i], 1 + dp[j]);
            }
        }
        MAXX = max(MAXX, dp[i]);
    }
    return MAXX;
}
int main(){
    freopen("LIQ.INP", "r", stdin);
    freopen("LIQ.OUT", "w", stdout);
    int n; cin >> n;
    int a[n+1];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << longest(n, a);
    return 0;
}
