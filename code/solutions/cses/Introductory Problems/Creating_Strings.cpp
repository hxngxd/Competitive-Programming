#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int n = s.size(), i = n - 1, cnt = 1;
    string ans = s;
    while (i)
    {
        if (s[i - 1] < s[i])
        {
            pair<char, int> c = {s[i], i};
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] > s[i - 1] && s[j] < c.first)
                    c = {s[j], j};
            }
            swap(s[i - 1], s[c.second]);
            sort(s.begin() + i, s.end());
            ans += '\n' + s;
            cnt++;
            i = n - 1;
        }
        else
            i--;
    }
    cout << cnt << nl << ans;
    return 0;
}