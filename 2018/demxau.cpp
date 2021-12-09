#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool dx(string s){
    int n = s.size();
    if (n==1) return true;
    if (n==2) {if (s[0]==s[1]) return true;};
    for (int i=0;i<=n/2;i++){
        if (s[i] != s[n-i-1]) return false;
    }
    return true;
}
string s;
int solve(){
     cin >> s;
     if (s.size()==1) return 1;
     int n = 0;
     ll ans = 0;
     while (n<s.size()){
        s += s.front();
        s.erase(s.begin());
        if (dx(s)) ans++;
        n++;
     }
     return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("demxau.INP", "r", stdin);
    freopen("demxau.OUT", "w", stdout);
    cout << solve();
    return 0;
}
