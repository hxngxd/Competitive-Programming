#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    map<int,int> mp;
    for (int i=0;i<n;i++){
        int a; cin >> a;
        mp[a]++;
    }
    int freq = n+1;
    for (auto i : mp) freq = min(freq, i.second);
    for (auto i : mp){
        if (i.second == freq) cout << i.first << nl;
    }
    return 0;
}