#include <bits/stdc++.h>
#define ll long long
using namespace std;
int pldsubseq(string s){
    int n = s.size();
    if (n==1) return 1;
    int dp[n][n];
    for (int i=0;i<n;i++){
        dp[i][i]=1;
    }
    int i=0, t=1, j=i+t;
    while (true){
        if (s[i]==s[j]){
            dp[i][j] = (j==i+1) ? 2 : dp[i+1][j-1] + 2;
        }
        else{
            dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
        }
        if (j==n){
            t++;
            i=0;
            j=i+t;
            continue;
        }
        if (i==0 && j==n-1) break;
        i++; j++;
    }
    for (int t=1;t<n;t++){
        for (int i=0;i<n-1;i++){
            dp[i][i+t]=2;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[0][n-1];
}
int main(){
    cout << pldsubseq("BABCBAB");
    return 0;
}
