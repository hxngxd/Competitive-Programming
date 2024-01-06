#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    map<string, int> mp;
    for (int i=0;i<n;i++){
        string ten; cin >> ten;
        if (mp.find(ten) != mp.end()) cout << ten << mp[ten] << nl;
        else cout << ten << nl;
        mp[ten]++;
    }
    return 0;
}