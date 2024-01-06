#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    int a[n];
    bool marked[32005];

    for (int i=0;i<n;i++) cin >> a[i];

    memset(marked, 0, sizeof(marked));
    sort(a, a + n);
    
    int cnt = 0, mn = 1e9;

    for (int i=0;i<n;i++){
        if (!(a[i]&1) && marked[a[i]/2]){
            cnt++;
            mn = min(mn, a[i]);
        }
        marked[a[i]] = 1;
    }

    cout << cnt << " " << mn;
    return 0;
}