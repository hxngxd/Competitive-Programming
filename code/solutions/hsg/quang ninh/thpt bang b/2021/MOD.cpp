#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int m = 1e9+7;
int main()
{
    fast_io
    ll a, n, csc;
    cin >> a >> n;
    csc = n%2==0 ? (n/2)%m * (n+1)%m : ((n+1)/2)%m * n%m;
    cout << ((a%m) * csc%m)%m;
    return 0;

}