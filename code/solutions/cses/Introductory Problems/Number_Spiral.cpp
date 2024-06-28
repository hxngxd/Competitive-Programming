#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

ll solve()
{
    ll y, x;
    cin >> y >> x;
    ll s = max(x, y);
    s *= s;
    if (y == x)
        return s - max(x, y) + 1;
    if (s % 2 == 0)
        return (y < x ? s - 2 * max(x, y) + y + 1 : s - x + 1);
    else
        return (x < y ? s - 2 * max(x, y) + x + 1 : s - y + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << nl;
    }
    return 0;
}