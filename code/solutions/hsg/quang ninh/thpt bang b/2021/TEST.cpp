#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int m, n; cin >> m >> n;
    vector<vector<ll>> a(m+2, vector<ll>(n+2, LLONG_MIN)),
                    b(m+2, vector<ll>(n+2, LLONG_MIN)),
                    dp1(m+1, vector<ll>(n+1)),
                    dp2(m+1, vector<ll>(n+1));
    vector<vector<char>> trace(m+1, vector<char>(n+1));

    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++) cin >> a[i][j];
    }

    //tren trai -> duoi phai
    dp1[1][1] = a[1][1];
    trace[1][1] = 'x';
    for (int i=2;i<=m;i++){
        dp1[i][1] = a[i][1] + dp1[i-1][1];
        trace[i][1] = 'u';
    }
    for (int i=2;i<=n;i++){
        dp1[1][i] = a[1][i] + dp1[1][i-1];
        trace[1][i] ='r';
    }
    for (int i=2;i<=m;i++){
        for (int j=2;j<=n;j++){
            if (dp1[i-1][j] > dp1[i][j-1]){
                dp1[i][j] = dp1[i-1][j] + a[i][j];
                trace[i][j] = 'u';
            }
            else{
                dp1[i][j] = dp1[i][j-1] + a[i][j];
                trace[i][j] = 'r';
            }
        }
    }

    //duoi phai -> tren trai
    dp2[m][n] = a[m][n];
    for (int i=m-1;i>=1;i--){
        dp2[i][n] = a[i][n] + dp2[i+1][n];
    }
    for (int i=n-1;i>=1;i--){
        dp2[m][i] = a[m][i] + dp2[m][i+1];
    }
    for (int i=m-1;i>=1;i--){
        for (int j=n-1;j>=1;j--){
            dp2[i][j] = max(dp2[i+1][j], dp2[i][j+1]) + a[i][j];
        }
    }

    //tren xuong
    for (int i=2;i<=m;i++){
        for (int j=n;j>=1;j--){
            a[i][j] = max(dp1[i-1][j] + dp2[i][j], a[i][j+1]);
        }
    }
    //trai sang
    for (int j=n;j>=2;j--){
        for (int i=m;i>=1;i--){
            b[i][j] = max(dp1[i][j-1] + dp2[i][j], b[i+1][j]);
        }
    }

    int row=m, col=n;
    ll ans = LLONG_MAX;
    while (1){
        if (!((row==1 && col==1) || (row==m && col==n))){
            ans = min(ans, max(b[row+1][col], a[row][col+1]));
        }
        if (trace[row][col]=='u') row--;
        else if (trace[row][col]=='r') col--;
        else break; 
    }

    cout << ans;
    return 0;
}
