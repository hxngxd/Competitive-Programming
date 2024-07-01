#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    int n, m;
    map<int, int> mp;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        mp[h]++;
    }
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        map<int, int>::iterator it = mp.upper_bound(t);
        if (it == mp.begin())
            cout << -1 << nl;
        else
        {
            it--;
            cout << it->first << nl;
            if (!--it->second)
                mp.erase(it);
        }
    }
    return 0;
}