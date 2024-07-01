#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    int n;
    ll x;
    cin >> n >> x;
    ll p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p, p + n);

    int l = 0, r = n - 1, ans = 0;
    while (l <= r)
    {
        if (l == r)
        {
            ans++;
            break;
        }

        if (p[l] + p[r] <= x)
            l++;
        r--;
        ans++;
    }
    cout << ans;
    return 0;
}