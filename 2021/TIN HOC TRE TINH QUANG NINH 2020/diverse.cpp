#include <bits/stdc++.h>
#define int64 long long
#define charmap map<char, int64>
using namespace std;
map<pair<int, int>, charmap> lastCount;
map<int, int> d;
charmap solve(string s, int L, int R){
    charmap mp1, mp2;
    pair<int, int> sub = make_pair(L, R);
    if (lastCount.find(sub) != lastCount.end()) return lastCount[sub];
    int n = s.size();
    if (n==1) mp1[s[0]] = 1;
    else{
        string left = s, right = s;
        mp1 = solve(right.erase(0, 1), L+1, R);
        mp2 = solve(left.erase(n-1), L, R-1);
        for (auto i : mp2) mp1[i.first] += i.second;
    }
    lastCount[sub] = mp1;
    d[mp1.size()]++;
    return mp1;
}
int main(){
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    string s; cin >> s;
    cout << solve(s, 1, s.size()).size() << endl;
    string ans = "";
    for (auto i : d) ans += to_string(i.second) + "\n";
    cout << ans;
    return 0;
}
