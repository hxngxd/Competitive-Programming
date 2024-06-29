#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto i : s)
    {
        mp[i]++;
    }
    int odd = 0;
    pair<char, int> mid;
    for (auto i : mp)
    {
        if (i.second % 2 != 0)
        {
            odd++;
            mid = i;
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    string ans = "";
    for (auto i : mp)
    {
        if (i.second % 2 == 0)
            ans += string(i.second / 2, i.first);
    }
    int j = ans.size() - 1;
    if (odd)
        ans += string(mid.second, mid.first);
    for (int i = j; i >= 0; i--)
        ans += ans[i];
    cout << ans;
    return 0;
}