#include <bits/stdc++.h>
using namespace std;
int diff(int n, string s){
    if (n==1) return 1;
    if (n==2){
        if (s[0]==s[1]) return 2;
        else return 1;
    }
    int k=1;
    map<string, int> memo;
    while (k<=n){
        int i=0;
        bool dup = false;
        memo.clear();
        string t = s.substr(i, k);
        memo[t]++;
        while (i<n-k){
            t.erase(t.begin());
            t += s[i+k];
            memo[t]++;
            if (memo[t] > 1){
                dup = true;
                break;
            }
            i++;
        }
        if (dup==false) return k;
        k++;
    }
}
int main(){
    freopen("DIFFSSTR.INP", "r", stdin);
    freopen("DIFFSSTR.OUT", "w", stdout);
    int n; cin >> n;
    string s; cin >> s;
    cout << diff(n, s);
    return 0;
}
