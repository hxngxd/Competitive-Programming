#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    int n;
    ll a, b, ans = 0;
    cin >> n >> a;
    while (--n)
    {
        cin >> b;
        if (b < a)
            ans += a - b;
        else
            a = b;
    }
    cout << ans;
    return 0;
}