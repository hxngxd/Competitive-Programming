#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool dx(int l, int r, string s){
    if (l==r) return true;
    if (r-l+1==2){
        if (s[l-1]==s[r-1]) return true;
    }
    l--; r--;
    int n = r-l+1;
    for (int i=l;i<=l+n/2;i++){
        if (s[i]!=s[r-i+l]) return false;
    }
    return true;
}
string s;
int k, L[100005], R[100005];
void solve(){
    cin >> s >> k;
    for (int i=0;i<k;i++){
        cin >> L[i] >> R[i];
        cout << (dx(L[i], R[i], s) ? "yes" : "no") << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("D_XUNG.INP", "r", stdin);
    freopen("D_XUNG.OUT", "w", stdout);
    solve();
    return 0;
}
