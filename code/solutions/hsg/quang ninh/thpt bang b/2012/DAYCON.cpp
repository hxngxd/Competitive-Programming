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
    for (int i=0;i<n;i++) cin >> a[i];

    const int INF = 1e9;
    vector<int> d(n+1, INF);
    d[0] = -INF;

    for (int i=0;i<n;i++){
        int l = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[l-1] <= a[i] && a[i] < d[l]){
            d[l] = a[i];
        }
    }

    int ans = 0;
    for (int l=0;l<=n;l++){
        if (d[l] < INF) ans = l;
    }
    
    cout << ans;
    return 0;
}