#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

string s;

int solve()
{
    int n = s.size();
    if (n == 1)
        return 1;
    int cur = 1, ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            cur++;
        else
            cur = 1;
        ans = max(ans, cur);
    }
    return ans;
}

int main()
{
    cin >> s;
    cout << solve();
    return 0;
}