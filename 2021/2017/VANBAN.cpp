#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i=0;i<s.size();i++){
        if (s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
        mp[s[i]]++;
    }
    cout << mp.size() << endl;
    for (auto i : mp){
        cout << i.first << " " << i.second << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("VANBAN.INP", "r", stdin);
    freopen("VANBAN.OUT", "w", stdout);
    solve();
    return 0;
}
