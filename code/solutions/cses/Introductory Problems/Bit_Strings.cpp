#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int ans = 1;
    while (n--)
    {
        ans = (ans * 2) % mod;
    }
    cout << ans;
    return 0;
}