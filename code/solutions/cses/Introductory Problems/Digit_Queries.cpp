#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define nl '\n'

vector<ull> digits(19, 0), pwerof10(19, 0);

ull solve()
{
    ull k;
    cin >> k;
    if (k <= 9)
        return k;

    ll d = lower_bound(digits.begin(), digits.end(), k) - digits.begin();
    ull remain = k - digits[d - 1];
    ull num = pwerof10[d - 1] + remain / d - (remain % d == 0);
    if (remain % d == 0)
        return num % 10;
    else
        return to_string(num)[remain % d - 1] - 48;
}

void init()
{
    ull nums = 9;
    pwerof10[0] = 1;
    for (int i = 1; i <= 18; i++)
    {
        digits[i] = nums * i + digits[i - 1];
        nums *= 10;
        pwerof10[i] = pwerof10[i - 1] * 10;
    }
}

int main()
{
    init();
    int q;
    cin >> q;
    while (q--)
        cout << solve() << nl;
    return 0;
}