#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n, m; cin >> n >> m;
    vector<vector<bool>> no_combine(n+1, vector<bool>(n+1, false));
    for (int i=0;i<m;i++){
        int p, q; cin >> p >> q;
        no_combine[p][q] = no_combine[q][p] = true;
    }

    if (n<3){
        cout << 0; return 0;
    }

    vector<int> buy = {1,2,3};
    int ans = 0;
    while (true){
        if (
            no_combine[buy[0]][buy[1]]==false &&
            no_combine[buy[1]][buy[2]]==false &&
            no_combine[buy[2]][buy[0]]==false
        ) ans++;

        int reach_max = 2;
        while (reach_max >= 0){
            if (buy[reach_max] != n - 2 + reach_max) break;
            reach_max--;
        }

        if (reach_max < 0) break;
        
        buy[reach_max]++;
        for (int i=reach_max+1;i<3;i++){
            buy[i] = buy[i-1] + 1;
        }
    }
    cout << ans;
    return 0;
}