#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("ENCODE.INP", "r", stdin);
    freopen("ENCODE.OUT", "w", stdout);
    string s; cin >> s;
    int k; cin >> k;
    for (int i=0;i<s.size();i++){
        char c = s[i]-k;
        if (c < 'a') c += 26;
        s[i] = c;
    }
    cout << s;
    return 0;
}
