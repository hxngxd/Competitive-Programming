#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool ok(char c){
    return c>='A' && c<='Z';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("CWORDS.INP", "r", stdin);
    freopen("CWORDS.OUT", "w", stdout);
    string s; cin >> s;
    s = " " + s + " ";
    int cnt = 0;
    for (int i=0;i<s.size();i++){
        if (ok(s[i]) && !ok(s[i-1])) cnt++;
    }
    cout << cnt;
    return 0;
}
