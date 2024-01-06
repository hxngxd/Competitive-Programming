//https://cses.fi/problemset/task/1070
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
string solve(){
    int n; cin >> n;
    if (n==1) return "1";
    if (n<=3) return "NO SOLUTION";
    if (n==4) return "2 4 1 3";
    string ans = "";
    for (int i=1;i<=n;i+=2){
        ans += to_string(i) + " ";
    }
    for (int i=2;i<=n;i+=2){
        ans += to_string(i) + " ";
    }
    return ans;
}
int main()
{
    fast_io
    cout << solve();
    return 0;
}