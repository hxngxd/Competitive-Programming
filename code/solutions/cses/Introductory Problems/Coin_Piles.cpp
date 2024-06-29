#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (((2 * b - a) % 3 == 0 && 2 * b >= a) && ((2 * a - b) % 3 == 0 && 2 * a >= b))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}