#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    ll sum = 0;
    ll a[n+1]; a[n] = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }

    int m; cin >> m;
    ll b[m+1]; b[m] = 0;
    for (int i=0;i<m;i++){
        cin >> b[i];
        sum -= b[i];
    }

    if (sum!=0){
        cout << -1; return 0;
    }

    int ans = 0;
    ll suma = a[0], sumb = b[0];
    int i=1, j=1;
    while (i<=n && j<=m){
        if (suma == sumb){
            ans++;
            suma = a[i++];
            sumb = b[j++];
        }
        else if (suma < sumb) suma += a[i++];
        else sumb += b[j++];
    }
    while (suma <= sumb && i<=n){
        suma += a[i++];
        if (suma==sumb) ans++;
    }
    while (sumb <= suma && j<=m){
        sumb += b[j++];
        if (suma==sumb) ans++;
    }
    cout << ans;
    return 0;
}