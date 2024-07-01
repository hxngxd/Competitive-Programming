#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define nl '\n'

int main()
{
    int n;
    cin >> n;
    vector<pii> times;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        times.push_back({a, 1});
        times.push_back({b, -1});
    }
    sort(times.begin(), times.end(), [](pii A, pii B)
         { return A.first < B.first; });

    int ans = 0, cur = 0;
    for (auto i : times)
    {
        cur += i.second;
        ans = max(ans, cur);
    }
    cout << ans;
    return 0;
}