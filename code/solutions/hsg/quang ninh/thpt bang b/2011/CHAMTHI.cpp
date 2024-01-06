#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    string s; cin >> s;
    int cnt = 0, ans = 0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='N') cnt = 0;
        else{
            cnt++;
            ans+=cnt;
        }
    }
    cout << ans;
    return 0;
}