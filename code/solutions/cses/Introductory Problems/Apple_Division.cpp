#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int n;
ll p[21], total = 0, ans = 1e18;

void dequy(int i, ll sum)
{
    if (i == n)
    {
        ans = min(ans, abs(total - 2 * sum));
        return;
    }
    dequy(i + 1, sum);
    dequy(i + 1, sum + p[i]);
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        total += p[i];
    }
    dequy(0, 0);
    cout << ans;
    return 0;
}