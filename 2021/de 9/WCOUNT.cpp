#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool lt(char c){
    return ((c>='a'&&c<='z')||(c>='A'&&c<='Z'));
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("WCOUNT.INP", "r", stdin);
    freopen("WCOUNT.OUT", "w", stdout);
    string s;
    getline(cin, s);
    ll cnt = 0;
    s = " " + s + " ";
    for (int i=1;i<s.size();i++){
        if (lt(s[i]) && s[i-1]==' '){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
