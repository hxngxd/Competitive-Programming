#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
            ans++;
    }
    cout << ans;
    return 0;
}