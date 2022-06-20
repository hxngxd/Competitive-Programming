#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
vector<ull> a(1e6 + 1, 0);
ull number68(int n)
{
    a[1] = 6;
    a[2] = 8;
    for (int i=3;i<=n;i++)
    {
        if (i%2 != 0) a[i] = a[i/2]*10 + 6;
        else a[i] = a[(i/2)-1]*10 + 8;
    }
    return a[n];
}
int main(){
    freopen("NUMBER68.INP", "r", stdin);
    freopen("NUMBER68.OUT", "w", stdout);
    int n;
    cin >> n;
    cout << number68(n);
    return 0;
}
