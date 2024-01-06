//https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    ll n; cin >> n;
    while (n!=1){
        cout << n << " ";
        if (n&1) n = n*3 + 1;
        else n /= 2;
    }
    cout << n;
    return 0;
}