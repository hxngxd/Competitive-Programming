#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    int n, m;
    ll k;
    cin >> n >> m >> k;
    ll a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < m; j++)
        cin >> b[j];
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, ans = 0;
    while (i < n && j < m)
    {
        if (a[i] - k <= b[j] && b[j] <= a[i] + k)
        {
            ans++;
            i++;
            j++;
        }
        else if (b[j] < a[i] - k)
            j++;
        else if (a[i] + k < b[j])
            i++;
    }
    cout << ans;
    return 0;
}