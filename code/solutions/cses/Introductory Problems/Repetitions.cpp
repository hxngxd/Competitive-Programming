//https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    string s; cin >> s;
    int ans = 1, current = 1;
    for (int i=1;i<s.size();i++){
        if (s[i]==s[i-1]){
            current++;
        }
        else{
            ans = max(ans, current);
            current=1;
        }
    }
    cout << max(ans, current);
    return 0;
}