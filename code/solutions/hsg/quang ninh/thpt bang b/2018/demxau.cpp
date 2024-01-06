#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
string s;
bool palindrome(int l, int r){
    while (l <= r){
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}
int main()
{
    fast_io
    cin >> s;
    int n = s.size(), ans = 0;
    for (int i=0;i<n;i++){
        if (palindrome(i, i + n - 1)) ans++;
        s += s[i];
    }
    cout << ans;
    return 0;
}