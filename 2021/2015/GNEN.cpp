#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ctoi(char c){
    return c - 48;
}
bool az(char c){
    return c>='a' && c<='z';
}
ll rp(string s){
    ll n = 0;
    for (int i=0;i<s.size();i++){
        n = n*10 + ctoi(s[i]);
    }
    return n;
}
string s;
void solve(){
    cin >> s;
    int n = s.size();
    string ans = "";
    for (int i=0;i<n;i++){
        if (az(s[i])){
            if (i==0) ans += s[i];
            else {
                int j=i-1;
                if (az(s[j])) ans += s[i];
                else{
                    string sb = "";
                    while (!az(s[j]) && j>=0){
                        sb = s[j] + sb;
                        j--;
                    }
                    string decode(rp(sb), s[i]);
                    ans += decode;
                }
            }
        }
    }
    cout << ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("GNEN.INP", "r", stdin);
    freopen("GNEN.OUT", "w", stdout);
    solve();
    return 0;
}
