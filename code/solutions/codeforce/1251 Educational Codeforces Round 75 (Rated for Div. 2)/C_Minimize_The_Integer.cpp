#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int ctoi(char c){
    return (int)c - 48;
}
void solve(){
    string s; cin >> s;
    string even = "", odd = "", ans = "";
    for (auto i : s){
        if (ctoi(i)%2==0) even += i;
        else odd += i;
    }
    int i=0, j=0;
    while (i<even.size() && j<odd.size()){
        if (even[i] < odd[j]) ans += even[i++];
        else ans += odd[j++];  
    }
    while (i<even.size()) ans += even[i++];
    while (j<odd.size()) ans += odd[j++];
    cout << ans << nl;
}
int main()
{
    fast_io
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}