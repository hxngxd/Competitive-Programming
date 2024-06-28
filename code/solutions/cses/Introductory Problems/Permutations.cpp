#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int n;
int ans[1000000];

void solve()
{
    if (n == 1)
    {
        cout << 1;
        return;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION";
        return;
    }
    if (n == 4)
    {
        cout << "2 4 1 3";
        return;
    }
    if (n == 5)
    {
        cout << "1 3 5 2 4";
        return;
    }
    int j = 0;
    if (n % 2)
        ans[j++] = n;
    for (int i = 1; i <= n / 2; i++)
    {
        ans[j++] = i;
        ans[j++] = i + (n / 2);
    }
    for (int i = 0; i < j; i++)
        cout << ans[i] << " ";
}

int main()
{
    cin >> n;
    solve();
    return 0;
}