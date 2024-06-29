#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    int n, ans, k;
    cin >> n;
    ans = 0;
    k = 5;
    while (k <= n)
    {
        ans += n / k;
        k *= 5;
    }
    cout << ans;
    return 0;
}