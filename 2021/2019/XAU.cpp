#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
string s;
ll solve(){
    cin >> n >> s;
    map<char, int> mp;
    for (int i=0;i<s.size();i++){
        if (s[i]>='a' && s[i]<='z') s[i]-=32;
        mp[s[i]]++;
    }
    ll tong = 0;
    for (auto i : mp){
        int t = i.second;
        tong += t*(t+1)/2;
    }
    return (tong%n==0) ? tong : mp.size();
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("XAU.INP", "r", stdin);
    freopen("XAU.OUT", "w", stdout);
    cout << solve();
    return 0;
}
