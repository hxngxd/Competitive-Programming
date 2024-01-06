#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    string s; cin >> s;
    char min_d = CHAR_MAX;
    int n = s.size(), a = n, b;
    for (int i=n-1;i>0;i--){
        if (s[i-1] < s[i]){
            a = i-1;
            break;
        }
    }
    if (a==n){
        cout << 0; return 0;
    }
    for (int i=n-1;i>a;i--){
        if (s[i] > s[a] && s[i] < min_d){
            min_d = s[i];
            b = i;
        }
    }
    swap(s[a], s[b]);
    sort(s.begin()+a+1, s.end());
    cout << s;
    return 0;
}