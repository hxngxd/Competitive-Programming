#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b;
int uoc(int n){
    int cnt = 2;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            if (i*i==n) cnt++;
            else cnt+=2;
        }
    }
    return cnt;
}
bool ok(int n){
    int cp = n/9;
    int k = sqrt(cp);
}
void solve(){
    cin >> a >> b;
    ll cnt = 0;
    for (int i=a;i<=b;i++){
        if (i%3==0 && uoc(i)==9) cout << i << " " << i/9 << " " << sqrt(i/9) << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("input.INP", "r", stdin);
//    freopen("output.OUT", "w", stdout);
    solve();
    return 0;
}
