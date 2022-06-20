#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SUBK.INP", "r", stdin);
    freopen("SUBK.OUT", "w", stdout);
    int n, k;
    string s;
    cin >> n >> k >> s;
    unordered_map<string, int> mp;
    int longest = 0;
    for (int i=0;i<n;i++){
        string s_ = "";
        s_ += s[i];
        int t = ++mp[s_];
        if (t >= k && s_.size() > longest) longest = s_.size();
        for (int j=i+1;j<n;j++){
            s_ += s[j];
            t = ++mp[s_];
            if (t >= k && s_.size() > longest) longest = s_.size();
        }
    }
    cout << longest;
    return 0;
}
