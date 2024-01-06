#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    int t[n+1];
    for (int i=0;i<n;i++) cin >> t[i];
    t[n] = 0;
    int ans = 0, prev = 0, cnt = 1;
    for (int i=1;i<=n;i++){
        if (t[i] != t[i-1]){
            ans = max(ans, min(prev, cnt));
            prev = cnt;
            cnt = 1;
        }
        else{
            cnt++;
        }
    }
    cout << ans*2;
    return 0;
}