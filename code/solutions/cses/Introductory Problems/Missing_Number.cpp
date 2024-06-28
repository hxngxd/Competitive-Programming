#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int main()
{
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    while (--n)
    {
        int x;
        cin >> x;
        sum -= x;
    }
    cout << sum;
    return 0;
}