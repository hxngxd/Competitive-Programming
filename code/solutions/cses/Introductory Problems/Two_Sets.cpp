#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    int n;
    cin >> n;
    if (n % 4 != 0 && n % 4 != 3)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << nl << (n + 1) / 2 << nl;
    for (int i = 1; i <= (n + 1) / 4; i++)
    {
        cout << i << " " << n - i + (n % 4 == 0) << " ";
    }
    cout << nl << n - (n + 1) / 2 << nl;
    for (int i = (n + 1) / 4 + 1; i <= n / 2; i++)
    {
        cout << i << " " << n - i + (n % 4 == 0) << " ";
    }
    if (n % 4 == 3)
        cout << n;
    return 0;
}