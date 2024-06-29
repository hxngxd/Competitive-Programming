#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void dequy(int plate, int A, int B)
{
    if (plate == 1)
    {
        cout << A << " " << B << nl;
        return;
    }
    int C = 6 - A - B;
    dequy(plate - 1, A, C);
    dequy(1, A, B);
    dequy(plate - 1, C, B);
}
int pwerof2(int n)
{
    if (n == 0)
        return 1;
    return 2 * pwerof2(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << pwerof2(n) - 1 << nl;
    dequy(n, 1, 3);
    return 0;
}