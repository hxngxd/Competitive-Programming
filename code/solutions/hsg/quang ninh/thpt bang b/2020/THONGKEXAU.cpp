#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int chr[256];
void output(char low, char high){
    for (char i=low;i<=high;i++){
        if (chr[(int)i]==0) continue;
        if (chr[(int)i]!=1) cout << chr[(int)i] << " ";
        cout << i << nl;
    }
}
int main()
{
    fast_io
    string s; cin >> s;
    int cnt = 0;
    memset(chr, 0, sizeof(chr));
    for (auto i : s){
        if (chr[(int)i]==0) cnt++;
        chr[(int)i]++;
    }
    cout << cnt << nl;
    output('0', '9');
    output('a', 'z');
    output('A', 'Z');
    return 0;
}