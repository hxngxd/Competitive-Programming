#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("str.inp", "r", stdin);
    freopen("str.out", "w", stdout);
    string x, y;
    cin >> x >> y;
    int n = y.size(), ans = 0;
    for (int i=0;i<n-2;i++){
        if (x[0]==y[i] && x[1]==y[i+1] && x[2]==y[i+2]){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
