#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    ll n, r, c;
    cin >> n >> r >> c;
    
    vector<ll> start = {1};
    ll d = 1;
    while (start.back() <= 1e9+1){
        ll next = start.back() + d;
        start.push_back(next);
        d+=2;
    }

    int i = upper_bound(start.begin(), start.end(), n)-start.begin();
    cout << i << " ";
    if (i%2==0) cout << n - start[i-1] + 1;
    else cout << start[i] - n;

    cout << nl;

    if (r%2==0) cout << start[r-1] + c - 1;
    else cout << start[r] - c;

    return 0;
}