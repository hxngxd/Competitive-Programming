#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n, ans, c = 0;
    int cnt[121] = {0};
    cin >> n;
    for (int i=0;i<n;i++){
        int t; cin >> t;
        cnt[t]++;
        if (cnt[t] >= c){
            c = cnt[t];
            ans = t;
        }
    }
    cout << ans;
    return 0;
}