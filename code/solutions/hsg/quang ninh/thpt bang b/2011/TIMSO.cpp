#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    ll A; cin >> A;
    ll S=0, n=0;
    while (S<A){
        n++;
        S+=n*n;
    }
    cout << n;
    return 0;
}