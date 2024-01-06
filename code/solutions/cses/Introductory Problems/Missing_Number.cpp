//https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    ll n; cin >> n;
    ll sum = n*(n+1)/2;
    while (n-->1){
        ll a; cin >> a;
        sum -= a;
    }
    cout << sum;
    return 0;
}