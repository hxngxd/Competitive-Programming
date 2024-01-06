#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int m, n, q; cin >> m >> n >> q;
    int a[m][n];
    const int INF = 1e9;
    vector<int> r(m, -1), c(n, -1);
    vector<int> r_max(m, -INF), c_max(n, -INF);
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++) cin >> a[i][j];
    }

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++) r_max[i] = max(r_max[i], a[i][j]);
    }

    for (int j=0;j<n;j++){
        for (int i=0;i<m;i++) c_max[j] = max(c_max[j], a[i][j]);
    }

    int res = 0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (a[i][j] == r_max[i] && a[i][j] == c_max[j]){
                r[i] = j;
                c[j] = i;
                res++;
            }
        }
    }

    while (q--){
        int i, j, x;
        cin >> i >> j >> x;
        i--, j--;
        a[i][j] = x;
        if (r[i]==j && c[j]==i){
            r_max[i] = c_max[j] = x;
        }
        else{
            if (x > max(r_max[i], c_max[j])){
                res++;
                r_max[i] = c_max[j] = x;
                if (r[i] != -1 && c[r[i]] != -1){
                    res--;
                    c[r[i]] = -1;
                }
                if (c[j] != -1 && r[c[j]] != -1){
                    res--;
                    r[c[j]] = -1;
                }
                r[i] = j;
                c[j] = i;
            }
            else if (x > r_max[i]){
                r_max[i] = x;
                if (r[i] != -1 && c[r[i]] != -1){
                    res--;
                    r[i] = c[r[i]] = -1;
                }
            }
            else if (x > c_max[j]){
                c_max[j] = x;
                if (c[j] != -1 && r[c[j]] != -1){
                    res--;
                    c[j] = r[c[j]] = -1;
                }
            }
        }
        cout << res << nl;
    }
    return 0;
}